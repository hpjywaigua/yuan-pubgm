//
////频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS//频道@GRPLYYDS
//

#ifndef _XIAOHEI_MEMORY_H
#define _XIAOHEI_MEMORY_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/syscall.h>
#include <sys/mman.h>
#include <sys/uio.h>
#include <malloc.h>
#include <math.h>
#include <thread>
#include <iostream>
#include <sys/stat.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <iostream>
#include <locale>
#include <string>
#include <codecvt>
#include <dlfcn.h>
// syscall内存读写

#if defined(__arm__)
#define process_vm_readv_syscall 376
#define process_vm_writev_syscall 377
#elif defined(__aarch64__)
#define process_vm_readv_syscall 270
#define process_vm_writev_syscall 271
#elif defined(__i386__)
#define process_vm_readv_syscall 347
#define process_vm_writev_syscall 348
#else
#define process_vm_readv_syscall 310
#define process_vm_writev_syscall 311
#endif

typedef unsigned short UTF16;
typedef char UTF8;

class XiaoheiMemory
{
  public:

	void debugLog(const char *Message)
	{
		fprintf(stdout, "%s\n", Message);
		quick_exit(1);
	}
	
	XiaoheiMemory(){}

	XiaoheiMemory(const char *processName)
	{
		if ((pid = findPid(processName)) == -1)
		{
			return;
		}



		status = true;
		

    




	}
	static int findPid(const char *processName)
	{
		int pid = -1;
		struct dirent *pDirent;
		DIR *dir;

		if (!processName)
		{
			printf("XiaoheiMemory : not valid process name.\n");
		}

		dir = opendir("/proc/");

		if (!dir)
		{
			printf("XiaoheiMemory : can't open proc\n");
		}

		for (int currPid = 0; (pDirent = readdir(dir)) != NULL;)
		{
			if ((currPid = atoi(pDirent->d_name)) == 0)
			{
				continue;
			}

			char currCmdLinePath[128];
			sprintf(currCmdLinePath, "/proc/%d/task/%d/cmdline", currPid, currPid);
			int currcmdLineFd =
				syscall(__NR_openat, AT_FDCWD, (const char *)currCmdLinePath, O_RDONLY, 777);
			// open((const char*)currCmdLinePath, O_RDONLY);

			if (currcmdLineFd == -1)
			{
				continue;
			}

			char currProcName[128];
			memset(currProcName, 0, 128);
			if (!read(currcmdLineFd, currProcName, 128))
			{
				continue;
			}

			if (!strcmp(currProcName, processName))
			{
				pid = currPid;
				break;
			}
		}
		closedir(dir);
		return pid;
	}
	bool getStatus()
	{
		return status;
	}
	int getPid()
	{
		return getpid();
	}
    
    
	ssize_t process_v(pid_t __pid, const struct iovec * __local_iov,
						  unsigned long __local_iov_count, const struct iovec * __remote_iov,
						  unsigned long __remote_iov_count, unsigned long __flags, bool iswrite)
	{
		return syscall((iswrite ? process_vm_writev_syscall : process_vm_readv_syscall), __pid,
					   __local_iov, __local_iov_count, __remote_iov, __remote_iov_count, __flags);
	}
	
    ssize_t process_v1(pid_t __pid, const struct iovec *__local_iov, unsigned long __local_iov_count,
                  const struct iovec *__remote_iov, unsigned long __remote_iov_count,
                  unsigned long __flags, bool iswrite)
{
    return syscall((iswrite ? process_vm_writev_syscall : process_vm_readv_syscall), __pid,
                   __local_iov, __local_iov_count, __remote_iov, __remote_iov_count, __flags);
}

    bool pvm(void *address, void *buffer, size_t size, bool iswrite)
    {
        struct iovec local[1];
        struct iovec remote[1];
        local[0].iov_base = buffer;
        local[0].iov_len = size;
        remote[0].iov_base = address;
        remote[0].iov_len = size;
        ssize_t bytes = process_v1(getpid(), local, 1, remote, 1, 0, iswrite);
        return bytes == size;
    }
    
	// 读取内存
	bool vm_readv(unsigned long address, void *buffer, size_t size)
	{
        
		return pvm(reinterpret_cast < void *>(address), buffer, size, 0);
	}

	// 写入内存
	bool vm_writev(unsigned long address, void *buffer, size_t size)
	{
		return pvm(reinterpret_cast < void *>(address), buffer, size, 1);
	}

	template < typename T > T Read(uintptr_t addr)
	{
		T buf;
		vm_readv(addr, &buf, sizeof(buf));
		return buf;
	}

	template < typename T > void Write(uintptr_t addr, T buf)
	{
		vm_writev(addr, &buf, sizeof(buf));
	}

	uintptr_t getZZ(uintptr_t addr)
	{
		
	    uintptr_t var = 0;
	
	    vm_readv(addr, &var, 4);
	
	    return var;
	}



	float getFloat(uintptr_t addr)
	{
		return Read < float >(addr);
	}
	int getDword(uintptr_t addr)
	{
		return Read < int >(addr);
	}
	uintptr_t getModuleBase(const char *module_name)
	{
		FILE *fp;
		unsigned long addr = 0;
		char *pch;
		char filename[64];
		char line[1024];
		snprintf(filename, sizeof(filename), "/proc/%d/maps", getpid());
		fp = fopen(filename, "r");
		if (fp != NULL)
		{
			while (fgets(line, sizeof(line), fp))
			{
				if (strstr(line, module_name))
				{
					pch = strtok(line, "-");
					addr = strtoul(pch, NULL, 16);
					if (addr == 0x8000)
						addr = 0;
					break;
				}
			}
			fclose(fp);
		}
		return addr;
	}

	uintptr_t getModuleBaseCB(const char *name)
	{
		FILE *fp;
		int cnt = 0;
		long start;
		char tmp[256];
		fp = NULL;
		char line[1024];
		char fname[128];
		sprintf(fname, "/proc/%d/maps", getpid());
		fp = fopen(fname, "r");
		while (!feof(fp))
		{
			fgets(tmp, 256, fp);
			if (cnt == 1)
			{
				if (strstr(tmp, "[anon:.bss]") != NULL)
				{
					sscanf(tmp, "%lx-%*lx", &start);
					break;
				}
				else
				{
					cnt = 0;
				}
			}
			if (strstr(tmp, name) != NULL)
			{
				cnt = 1;
			}
		}
		return start;
	}
	
	// 读取字符信息
    void getUTF8(UTF8 * buf, unsigned long namepy)
    {
    	UTF16 buf16[16] = { 0 };
    	vm_readv(namepy, buf16, 28);
    	UTF16 *pTempUTF16 = buf16;
    	UTF8 *pTempUTF8 = buf;
    	UTF8 *pUTF8End = pTempUTF8 + 32;
    	while (pTempUTF16 < pTempUTF16 + 28)
    	{
    		if (*pTempUTF16 <= 0x007F && pTempUTF8 + 1 < pUTF8End)
    		{
    			*pTempUTF8++ = (UTF8) * pTempUTF16;
    		}
    		else if (*pTempUTF16 >= 0x0080 && *pTempUTF16 <= 0x07FF && pTempUTF8 + 2 < pUTF8End)
    		{
    			*pTempUTF8++ = (*pTempUTF16 >> 6) | 0xC0;
    			*pTempUTF8++ = (*pTempUTF16 & 0x3F) | 0x80;
    		}
    		else if (*pTempUTF16 >= 0x0800 && *pTempUTF16 <= 0xFFFF && pTempUTF8 + 3 < pUTF8End)
    		{
    			*pTempUTF8++ = (*pTempUTF16 >> 12) | 0xE0;
    			*pTempUTF8++ = ((*pTempUTF16 >> 6) & 0x3F) | 0x80;
    			*pTempUTF8++ = (*pTempUTF16 & 0x3F) | 0x80;
    		}
    		else
    		{
    			break;
    		}
    		pTempUTF16++;
    	}
    }
    uintptr_t getPtrs(uintptr_t address, std::initializer_list<uintptr_t> offset, bool firstJump = true) {
        int count = 0;
        for (uintptr_t Offset : offset)
        {
            
            address = ((count == 0 && !firstJump) ? address : getZZ(address)) + Offset;
            // printf("%d %p %p\n", count, address, Offset);
            count ++;
        }
        return address;
    }
	
bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}

bool WriteFloat(uintptr_t addr,float var) {
    return WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var), sizeof(var));
}

bool WriteDword(uintptr_t addr,int var) {
    return WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var), sizeof(var));
}


	
  private:
	int pid = 0;
	int pagemap_fd = 0;
	int pageSize = getpagesize();
	bool status = false;
};

#endif

