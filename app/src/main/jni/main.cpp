#include "fontch.h"
#include "Includes.h"
#include "Tools.h"
#include "fake_dlfcn.h"
#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "StrEnc.h"
#include "plthook.h"
#include "Items.h"
#include "json.hpp"
#include "Icon.h"
#include "Iconcpp.h"
#include "Vector2.hpp"
#include "Vector3.hpp"
#include "ImguiPP.cpp"
#include "Menu.h"
#include "Memory.h"
#include "Syscall读写.h"
#include "内存读写.hpp"
//#include "NIKE.h"
#include "Rect.h"
#include "KittyMemory/MemoryPatch.h"
#include "Includes/Logger.h"
#include "Includes/obfuscate.h"
#include "Includes/Utils.h"
#include "Includes/Toast.hpp"
#include "Includes/Macros.h"
//#include "obfuscate.h"
#include "Snowflake.hpp"
#include "Oxorany/oxorany.h"
#include "imgui/stb_image.h"  
#include "imgui_headers.h"
#define targetLibName OBFUSCATE("libanort.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libUE4.so")
#define SNOW_LIMIT 300
using json = nlohmann::json;
#define SLEEP_TIME 1000LL / 60LL
#include "SDK.hpp"
//字体
#include "你妈炸了.hpp"
#include "日本.h"
#include "吉良.h"
//#include "简细字体.h"
using namespace SDK;
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"
#include <stdio.h>
int code_sock = -1;
//static char s[64];
char extra[32];
char extras[32];
std::string EXP = "00:00:00:00:00:00:00";
std::string g_Token, g_Auth;
std::string KeySlot = "";
std::string FlotingText = "";
std::string expiredDate = "";
ImFont* bold;
bool 三十;
bool 六十;
bool 九十;
bool 全局离线;
bool Logo1;
bool 过效验;
bool logo;
bool 无敌jh;
bool 防十年;
bool 防禁网;
bool 防一天;
bool 菜单4;
bool 追踪函数1;
bool 追踪函数2;
bool 我爱打飞机 = false;
bool bValid = false;
bool 加速 = false;
bool 防抖 = false;
bool show_live_pron = false;
bool show_zm = false;
bool show_zz = false;
bool show_jz = false;
bool show_nc = false;
bool show_bypass = false;
bool show_gy = false;
bool show_xhmaster_pron = false;
bool WideView = false;
bool qwcifqvs86y8fify = false;
bool down;
bool 悬浮窗;
bool 大厅;
bool 飞机哥;
bool 小年爱被操;
bool 原神;
bool 南通;
bool 低调点死人;
bool Bypass0 = true;
bool Bypass1 = true;
bool Bypass2 = true;
bool Bypass3 = true;
bool Bypass4 = true;
bool Bypass5 = true;
bool Bypass6 = true;
bool style_idx = false;
bool 菜单1 = true;
bool 菜单2 = false;
bool 菜单3 = false;
bool style = false;
bool Combo = false;
bool 高跳 = false;
bool 聚点 = false;
bool 无后 = false;
bool 范围 = false;
bool 慢动作 = false;
bool 除雾 = false;
bool 防破解 = false;
bool 中 = true;
bool Eng = false;
bool 手雷;
static float Aim50;
static float Aim100;
static float Aim150;
static float Aim200;
static float Aim250;
static float Aim300;
static float AimYQ;
static bool Eaimbot;
//float org_speedup_val = 2.0f;
bool FlashSdk = false;
bool FlashSdk2 = false;
bool FlashSdk3 = false;
bool 手持 = false;
bool 自瞄 = false;
bool 加速V1 = false;
bool 预警 = false;
bool FPS = false;
float 加速系数 = 1.0f;
float FOV = 100.0f;
float IpadS = 87.0f; 
float X特效 = 300.0f;
float 自瞄距离 = 300;
float 子追距离 = 300;
//float 压枪系数 = 1.3;
float 压枪系数 = 1.2;
float 预判算法 = 40.0;
float Y算法 = 50.0;
bool 飞天 = false;
bool 吉良 = false;
bool 测试;
bool 广角;
bool 美国地震哥 = false;
bool 防1 = true;
bool 防2 = true;
bool 防3 = true;
bool Logo = true;
bool 四百1 = true;
bool 开火聚点;
char extraa[32];
static int 追踪函数 = 1;
ImFont* basic = nullptr;
ImFont* 菜单字体 = nullptr;
float accent_color[4] = { 0.300f, 0.220f, 0.750f, 1.000f };
int tab_count = 0, tabs = 0;
bool active = false;
int AutoTargetChoose = 0;

bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
template<typename T>
void 写入F类(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
void 写入D类(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}
template<typename T>
void Write(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
static char s[64];

#define GName_Offset 0x6F7A8C0  
#define GUObject_Offset 0xC2BF460
#define GEngine_Offset 0xC4A3590   //UEngine
#define GEngine_Offset 0xC4C2788  //UlocalPlayer
#define GNativeAndroidApp_Offset 0xC05A0B8
#define GetActorArry_Offset 0x88DA1EC

#define Actors_Offset 0xA0

#define ShortEvent_Offset 165 //Not Sure Maybe 166

#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(360.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 360.f))
json items_data;

//uintptr_t anogs;
uintptr_t UE4;
uintptr_t g_UE4;
uintptr_t anogs;
uintptr_t ijkffmpeg;
uintptr_t gcloud;
uintptr_t g_anogs;
uintptr_t g_TDataMaster;
uintptr_t CrashSight;

uintptr_t TDataMaster;
uintptr_t g_Gcloud;
uintptr_t tprt;
uintptr_t anort;
android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
std::vector<Snowflake::Snowflake> Snow;
bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;
uint32_t Colors[] = {0x53BB0C, 0x530826, 0x0FC3F4, 0xDC2855, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};
FLinearColor GetRandomColorByIndex(int index) {
    srand(index);

    float a = 255;
    float r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 16);
    float g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 8);
    float b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);

    return {r / 255, g / 255, b / 255, a / 255};
}




static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); // Auto 
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort) {
   //return {};
            return ViewPort->World;
        }
    }
    return 0;
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GName_Offset))();
}

std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();

    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();

    auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + Actors_Offset);

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (Actor) {
            actors.push_back(Actor);
        }
    }
    return actors;
}

/*
#include "zygisk.hpp"

using zygisk::Api;
using zygisk::AppSpecializeArgs;
using zygisk::ServerSpecializeArgs;


void hack();

class MyModule : public zygisk::ModuleBase {
 public:
  void onLoad(Api *api, JNIEnv *env) override {
    this->api_ = api;
    this->env_ = env;
  }

  void preAppSpecialize(AppSpecializeArgs *args) override {
    static constexpr const char *packages[] = {
        "com.tencent.ig", "com.vng.pubgmobile", "com.rekoo.pubgm", "com.pubg.krmobile"
    };
    const char *process = env_->GetStringUTFChars(args->nice_name, nullptr);
    for (const auto *package: packages) {
      is_game_ = (strcmp(process, package) == 0);
      if (is_game_) {
        break;
      }
    }
    env_->ReleaseStringUTFChars(args->nice_name, process);
  }

  void postAppSpecialize(const AppSpecializeArgs *args) override {
    if (is_game_) {
      std::thread{hack}.detach();
    }
    }

 private:
  Api *api_ = nullptr;
  JNIEnv *env_ = nullptr;
  bool is_game_ = false;
};
*/
#define DefineHook(RET, NAME, ARGS) \
	RET(*Orig_##NAME)               \
	ARGS;                           \
	RET Hook_##NAME ARGS
//————————————————————
static int xsuit = 0;
static int skinm4 = 0;
static int skinakm = 0;
static int skinscar = 0;
static int skinm7 = 0;
static int skinuzi = 0;
static int skinump45 = 0;
static int skinvector = 0;
static int skinbizon = 0;
static int skingroza = 0;
static int skinkar = 0;
static int skinm24 = 0;
static int skinawm = 0;
static int skindp28 = 0;
static int skinqbz = 0;
static int skinm16a4 = 0;
static int skinm249 = 0;
static int skinmini14 = 0;
static int skinslr = 0;
static int skinsks = 0;
static int skinpan = 0;
static int skins1897 = 0;
static int skinvss = 0;
static int skins12k = 0;
static int skinaug = 0;
static int skinmk14 = 0;

bool showBone = false, showBox = false, showRay = false, showInfo = false, showRadar = false;
bool showItem = true, show556 = true, show762 = true, showRifle = true, showMirror = true, showExpansion = true, showDrug = true, showArmor = true, showSubmachine = false, showSniper = false, showOtherParts = false;
bool showVehicle = false, showGrenade = false;
bool aimbot = false, dieNoAim = false, showtouch = false;
bool showChest = false, showDrop = false;
bool aimShortDis = false;
bool showRange = false;
bool showImg = false, showText = false, stroke = false;
bool showWarning = false, showTarget = false;
float aimRange = 400.f, radarLocation = 800.f, radarLocation2 = 1650.f;
int espWidth = 1, boneWidth = 3;
int boxType = 1, aimType = 0, aimLocation = 0;
bool aimFire = false, aimOpen = false;
float FOVSize = 250;
//========================== //
struct TextureInfo {
    ImTextureID textureId;
    int x;
    int y;
    int w;
    int h;
};
enum EAimBy {
    InsidFOV = 0,
	Aim = 1
};
	
enum EAim {
  Distance = 0,
  Croshhair = 1
};

enum EAimTarget {
    Auto = 1,
    Head = 2,
    Chest = 3
};

enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};

enum 中英文切换 {
    中文 = 0,
    英文 = 1,
    
};

enum Aimmode{
    Mdp = 0, //漏哪打哪
    Fixed = 1//固定点位
  //  Nearest = 2//距离准星最近
};
enum Timmode{
    FUCK = 0,
    Md = 1, //漏哪打哪
    Fixe = 2//固定点位
  //  Nearest = 2//距离准星最近
};
enum Jimmode{
    Aut = 1,
    Hea = 2,
    Hhj = 3,
    Chet = 4
};
std::map<int, bool> Items;
std::map<int, float *> ItemColors;

struct sConfig {
float 压枪系数;
        float X轴;
        float Xx轴;
        float Xxx轴;
        float Xxxx轴;
        float Y轴;
          float Y2轴;
    bool AutoESP;
    bool 无限子弹;
    bool 加速;
    bool fullMapFlash;
    bool 防9;
    bool 防1;
    bool 防2;
    bool 防3;
    bool 防4;
	bool Bypass;
	float Line;
    float ColorFov;
	//float Skeleton;
	float Skill;
	float Fov;
    float RadarX;	
	float Fovthic;
	bool Logo;
//	bool Bypass;
	bool Bypass1;
	bool Bypass2;
	bool Bypass3;
	bool Skeleton;
    struct sESPMenu {
    int Aim50;
    int Aim100;
    int Aim150;
    int Aim200;
    int Aim250;
    int Aim300;
    int AimYQ;
    int gDistance;
    
        bool Line;
        bool AutoFire;
        bool chumo;
        bool Box;
        bool Skeleton;
        bool Health;
        bool ShowKnockedHealth;
        bool Name;
        bool Distance;
        bool TeamID;
        bool NoBot;
		bool LootBox;
        bool Radar;
        bool Vehicle;
        bool VehicleHp;
	    float 压枪系数;
	    float X轴;
	    float Y轴;
     
    };
    sESPMenu ESPMenu;
    
    struct sHighRisk {
        bool Shake;
        bool NoFog;
        bool Recoil;
        bool Instant;
        bool HitEffect;
        bool Flash;
        bool Parachute;
    };
    sHighRisk HighRisk{0};
   
     struct sAimMenu {
        bool 子追2;
        bool Enable;
        bool AimBot;
        bool Enabl;
        bool FovAdd;
        EAimTarget Target1;
          EAimTarget Target2;
           EAimTarget Target3;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool IgnoreKnocked;
        bool VisCheck;
        bool IgnoreBots;
        float FovEdit;
        float Cross;
        Aimmode  Amode;
        Timmode  Tmode;
        Jimmode  Jmode;

    };
    sAimMenu SilentAim{0};
	sAimMenu AimBot{0};
	   struct sOTHER {
        bool FPS;
    };
    sOTHER OTHER{0};

    struct sColorsESP {
		float *Text;
	    float *Menucolour;
        float *Line;
        float *Box;
		float *Boxbot;
        float *Name;
        float *Distance;
        float *Skeleton;
        float *Skeletonnon;
		float *Skeletonbot;
		float *Linebot;
        float *nonbot;
        float *LootBox;
        float *Count;
        float *Vehicle;
		float *Fov;
		
    };
    sColorsESP ColorsESP{0};
};

sConfig Config{0};

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};

struct sRegion {
    uintptr_t start, end;
};



std::vector<sRegion> trapRegions;



bool isInsideFOV(int x, int y) {
    if (!Config.AimBot.Cross)
        return true;

    int circle_x = screenWidth / 3.0f;
    int circle_y = screenHeight / 3.0f;
    int rad = Config.AimBot.Cross;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}



bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }
    
    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}

std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}

int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}



void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
 if (forward.X == 0.f && forward.Y == 0.f) {
  angles.X = forward.Z > 0.f ? -90.f : 90.f;
  angles.Y = 0.f;
 } else {
  angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
  angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
 }
 angles.Z = 0.f;
}
static void Down(bool* p_open)
{
    static bool use_work_area = true;
    static ImGuiWindowFlags flags = ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoResize;

  
    const ImGuiViewport* viewport = ImGui::GetMainViewport();
    	ImGui::SetNextWindowPos(ImVec2(40, 200));
    ImGui::SetNextWindowSize(ImVec2(90, 55));
ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.92f, 0.92f, 0.92f, 0.00f));
    ImGui::SetNextWindowBgAlpha(0.0f); // Transparent background
    if (ImGui::Begin("Example: Fullsc reenwindow", p_open, flags))
    {


		static int clicked = 0;
		if(ImGui::Button("Fight",{-1,40}))
   //     if (ImGui::Button("FRONT"))
            clicked++;
			Config.AimBot.Enable = true;
        if (clicked & 1)
        {
Config.AimBot.Enable = false;
        }

    }
	   ImGui::PopStyleColor();
    ImGui::End();
}

void 绘制加粗文本(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.8, y-0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.8, y+0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
void 绘制加粗文本2(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.2, y-0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.2, y+0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}

void PlayerESP加粗文本(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.8, y-0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.8, y+0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
void PlayerESP加粗文本2(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.2, y-0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.2, y+0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
#define IM_PI                   3.14159265358979323846f

#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))
ImColor 紫色2 = ImColor(46,46,177);
ImColor 浅蓝 = ImColor(ImVec4(36/255.f, 249/255.f, 217/255.f, 255/255.f));
ImColor 蓝色 = ImColor(ImVec4(170/255.f, 203/255.f, 244/255.f, 0.95f));
ImColor 白色 = ImColor(ImVec4(255/255.f, 255/255.f, 258/255.f, 0.95f));
ImColor 浅粉 = ImColor(ImVec4(255/255.f, 200/255.f, 250/255.f, 0.95f));
ImColor 黑色 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.7f));
ImColor 半黑 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.18f));
ImColor 血色 = ImColor(ImVec4(0/255.f, 249/255.f, 0/255.f, 0.35f));
ImColor 红色 = ImColor(ImVec4(233/255.f, 55/255.f, 51/255.f, 0.95f));
ImColor 绿色 = ImColor(ImVec4(50/255.f, 222/215.f, 50/255.f, 0.95f));
ImColor 黄色 = ImColor(ImVec4(255/255.f, 255/255.f, 0/255.f, 0.95f));
ImColor 橘黄 = ImColor(ImVec4(255/255.f, 150/255.f, 30/255.f, 0.95f));
ImColor 粉红 = ImColor(ImVec4(220/255.f, 108/255.f, 1202/255.f, 0.95f));
ImColor 紫色 = ImColor(ImVec4(169/255.f, 120/255.f, 223/255.f, 0.95f));	

FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}
FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
  Xector2.X = PosX + Size.X;
 }else{
  bool flag3 = Xector2.X < PosX;
  if (flag3) {
   Xector2.X = PosX;
  }
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
  Xector2.Y = PosY + Size.Y;
 }else{
  bool flag5 = Xector2.Y < PosY;
  if (flag5){
   Xector2.Y = PosY;
  }
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6){
  flag = true;
 }
 outbuff = flag;
 return Xector2;
}



#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
ImVec4 esp_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f);
ImVec4 bot_color = ImVec4(1.f, 1.f, 1.f, 1.f);
ImVec4 ray_color = ImVec4(1.f, 1.f, 1.f, 1.f);
ImVec4 bone_color = ImVec4(0 / 255.f, 255 / 255.f, 0 / 255.f, 255 / 255.f);
ImVec4 vehicle_color = ImVec4(0 / 255.f, 255 / 255.f, 255 / 255.f, 255 / 255.f);
ImVec4 rifle_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 submachine_color = ImVec4(255 / 255.f, 110 / 255.f, 180 / 255.f, 255.f / 255.f);
ImVec4 snipe_color = ImVec4(144 / 255.f, 238 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 box_color = ImVec4(255 / 255.f, 192 / 255.f, 203 / 255.f, 255.f / 255.f);
ImVec4 drop_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 drug_color = ImVec4(255 / 255.f, 105 / 255.f, 180 / 255.f, 255.f / 255.f);
ImVec4 armor_color = ImVec4(255 / 255.f, 215 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 color_556 = ImVec4(0 / 255.f, 255 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 color_762 = ImVec4(255 / 255.f, 255 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 mirror_color = ImVec4{255.f / 255.f, 144.f / 255.f, 0.f / 255.f, 255.f / 255.f};
ImVec4 otherparts_color = ImVec4{245.f / 255.f, 245.f / 255.f, 245.f / 255.f, 255.f / 255.f};
ImVec4 expansion_color = ImVec4{208.f / 255.f, 128.f / 255.f, 114.f / 255.f, 255.f / 255.f};
ImVec4 aim_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f);

static TextureInfo textureInfo;

TextureInfo createTexture(const unsigned char* buf, int len)
{
    TextureInfo image;
    //获取文件加载
    unsigned char* image_data = stbi_load_from_memory(buf, len, &image.w, &image.h, NULL, 0);
    if (image_data == NULL)
        perror("文件不存在");
    //创建 OpenGL 标识
    GLuint image_texture;
    glGenTextures(1, &image_texture);
    glBindTexture(GL_TEXTURE_2D, image_texture);

    //设置显示参数
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); //对于非二次方纹理，这在 WebGL 上是必需的
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); //相同的

    //上传到纹理
    #if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    #endif    
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image.w, image.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    stbi_image_free(image_data);
  //  image.textureId = image_texture;

    return image;
}

static struct Hand {
    TextureInfo K98;
    TextureInfo yaser;
    TextureInfo M416;
    TextureInfo M416A4;
    TextureInfo MK14;
    TextureInfo Grozy;
    TextureInfo Scar;
    TextureInfo M24;
    TextureInfo QBZ;
    TextureInfo DP28;
    TextureInfo MK47;
    TextureInfo S12K;
    TextureInfo S1896;
    TextureInfo SKS;
    TextureInfo SLR;
    TextureInfo M762;
    TextureInfo S686;
    TextureInfo VSS;
    TextureInfo UMP9;
    TextureInfo 手雷;
    TextureInfo 烟雾弹;
    TextureInfo 燃烧瓶;
    TextureInfo 拳头;
    TextureInfo AWM;
    TextureInfo AKM;
    TextureInfo M249;
    TextureInfo QBU;
    TextureInfo Mini14;
    TextureInfo AUG;
    TextureInfo G36C;
    TextureInfo PP19;
    TextureInfo UZI;
    TextureInfo P18C;
    TextureInfo WIN94;
    TextureInfo 汤姆逊;
    TextureInfo 盒子;
    TextureInfo S187;
    TextureInfo Vector;
    TextureInfo 短管散弹;
    TextureInfo 十字弩;
} hand;

extern TextureInfo BRDM;
extern TextureInfo Scooter;
extern TextureInfo Motorcycle;
extern TextureInfo MotorcycleCart;
extern TextureInfo Snowmobile;
extern TextureInfo Tuk;
extern TextureInfo Buggy;
extern TextureInfo Dacia;
extern TextureInfo UAZ;
extern TextureInfo PickUp;
extern TextureInfo Rony;
extern TextureInfo Mirado;
extern TextureInfo Minibus;
extern TextureInfo PG117;
extern TextureInfo AquaRail;
extern TextureInfo Snowbike;
extern TextureInfo CoupeRB;
extern TextureInfo Motorglider;
extern TextureInfo Monster;
extern TextureInfo UTV;
extern TextureInfo Bigfoot;
extern TextureInfo ATV;
extern TextureInfo LionDance;
extern TextureInfo VehicleRadar;
extern TextureInfo Helicopter;
extern TextureInfo AirPlane;
extern TextureInfo AirDrop;

TextureInfo BRDM;
TextureInfo Scooter;
TextureInfo Motorcycle;
TextureInfo MotorcycleCart;
TextureInfo Snowmobile;
TextureInfo Tuk;
TextureInfo Buggy;
TextureInfo Dacia;
TextureInfo UAZ;
TextureInfo PickUp;
TextureInfo Rony;
TextureInfo Mirado;
TextureInfo Minibus;
TextureInfo PG117;
TextureInfo AquaRail;
TextureInfo Snowbike;
TextureInfo CoupeRB;
TextureInfo Motorglider;
TextureInfo Monster;
TextureInfo UTV;
TextureInfo Bigfoot;
TextureInfo ATV;
TextureInfo LionDance;
TextureInfo VehicleRadar;
TextureInfo Helicopter;
TextureInfo AirPlane;
TextureInfo AirDrop;


void DrawLine(int x1, int y1, int x2, int y2, ImVec4 color, int size);
void DrawRect(int x, int y, int w, int h, ImVec4 color, int size);
void DrawRectFilled(int x, int y, int w, int h, ImVec4 color);
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T);
void DrawCircle(int x, int y, float radius, ImVec4 color, int segments, int thickness);
void DrawStrokeText(int x, int y, ImVec4 color, const char* str);
void DrawImage(int x, int y, int w, int h, ImTextureID Texture);
void DrawCircleFilled(int x, int y, int radius, ImVec4 color, int segments);
float MouseToObjectDistance(float ObjectSrceenX,float ObjectSrceenY);
float GetD2DPosDistance(float ObjectX,float ObjectY);

void DrawImage(int x, int y, int w, int h, ImTextureID Texture) {
    ImGui::GetForegroundDrawList()->AddImage(Texture, ImVec2(x, y), ImVec2(x + w, y + h));
}


#include "数组图片/定义文件.h"
void InitTexture() {
    hand.K98 = createTexture(武器1, sizeof(武器1));
    hand.M416 = createTexture(武器2, sizeof(武器2));
    hand.M416A4 = createTexture(武器3, sizeof(武器3));
    hand.MK14 = createTexture(武器4, sizeof(武器4));
    hand.Grozy = createTexture(武器5, sizeof(武器5));
    hand.Scar = createTexture(武器6, sizeof(武器6));
    hand.M24 = createTexture(武器7, sizeof(武器7));
    hand.QBZ = createTexture(武器8, sizeof(武器8));
    hand.DP28 = createTexture(武器9, sizeof(武器9));
    hand.MK47 = createTexture(武器10, sizeof(武器10));
    hand.S12K = createTexture(武器11, sizeof(武器11));
 //   hand.S1897 = createTexture(武器12, sizeof(武器12));
    hand.SKS = createTexture(武器13, sizeof(武器13));
    hand.SLR = createTexture(武器14, sizeof(武器14));
    hand.M762 = createTexture(武器15, sizeof(武器15));
    hand.S686 = createTexture(武器16, sizeof(武器16));
    hand.VSS = createTexture(武器17, sizeof(武器17));
    hand.UMP9 = createTexture(武器18, sizeof(武器18));
    hand.拳头 = createTexture(武器22, sizeof(武器22));
    hand.AWM = createTexture(武器23, sizeof(武器23));
    hand.AKM = createTexture(武器24, sizeof(武器24));
    hand.M249 = createTexture(武器25, sizeof(武器25));
    hand.QBU = createTexture(武器26, sizeof(武器26));
    hand.Mini14 = createTexture(武器27, sizeof(武器27));
    hand.AUG = createTexture(武器28, sizeof(武器28));
    hand.G36C = createTexture(武器29, sizeof(武器29));
    hand.PP19 = createTexture(武器30, sizeof(武器30));
    hand.UZI = createTexture(武器31, sizeof(武器31));
    hand.P18C = createTexture(武器32, sizeof(武器32));
    hand.WIN94 = createTexture(武器33, sizeof(武器33));
    hand.汤姆逊 = createTexture(武器34, sizeof(武器34));
    //hand.电报 = createTexture(TG, sizeof(TG));
    hand.盒子 = createTexture(HZ, sizeof(HZ));
    //hand.悬浮窗 = createTexture(XFC, sizeof(XFC));
}


bool GetHandInfo(char *resa, char **name, TextureInfo *textureInfo) {
    if (strstr(resa, "Hand") != nullptr) {
        *textureInfo = hand.十字弩;
        *name = "Hand";
        return true;
    }
    if (strstr(resa, "Groza") != nullptr) {
        *textureInfo = hand.Grozy;
        *name = "Groza";
        return true;
    }
    if (strstr(resa, "SKS") != nullptr) {
        *textureInfo = hand.SKS;
        *name = "SKS";
        return true;
    }
    if (strstr(resa, "M249") != nullptr) {
        *textureInfo = hand.M249;
        *name = "M249";
        return true;
    }
    if (strstr(resa, "DP28") != nullptr) {
        *textureInfo = hand.DP28;
        *name = "DP28";
        return true;
    }
    if (strstr(resa, "Kar98k") != nullptr) {
        *textureInfo = hand.K98;
        *name = "Kar98k";
        return true;
    }
    if (strstr(resa, "R1895") != nullptr) {
        *textureInfo = hand.P18C;
        *name = "R1895";
        return true;
    }
    if (strstr(resa, "R45") != nullptr) {
        *textureInfo = hand.P18C;
        *name = "R45";
        return true;
    }
    if (strstr(resa, "AKM") != nullptr) {
        *textureInfo = hand.AKM;
        *name = "AKM";
        return true;
    }
    if (strstr(resa, "AUG") != nullptr) {
        *textureInfo = hand.AUG;
        *name = "AUG";
        return true;
    }
    if (strstr(resa, "Mini14") != nullptr) {
        *textureInfo = hand.Mini14;
        *name = "Mini14";
        return true;
    }
    if (strstr(resa, "M16A4") != nullptr) {
        *textureInfo = hand.M416A4;
        *name = "M16A4";
        return true;
    }
    if (strstr(resa, "SCAR") != nullptr) {
        *textureInfo = hand.Scar;
        *name = "SCAR";
        return true;
    }
    if (strstr(resa, "Win94") != nullptr) {
        *textureInfo = hand.WIN94;
        *name = "WIN94";
        return true;
    }
    if (strstr(resa, "Uzi") != nullptr) {
        *textureInfo = hand.UZI;
        *name = "UZI";
        return true;
    }
    if (strstr(resa, "TommyGun") != nullptr) {
        *textureInfo = hand.汤姆逊;
        *name = "TommyGun";
        return true;
    }
    if (strstr(resa, "Vector") != nullptr) {
        *textureInfo = hand.Vector;
        *name = "Vector";
        return true;
    }
    if (strstr(resa, "UMP9") != nullptr) {
        *textureInfo = hand.UMP9;
        *name = "UMP9";
        return true;
    }
    if (strstr(resa, "VSS") != nullptr) {
        *textureInfo = hand.VSS;
        *name = "VSS";
        return true;
    }
    if (strstr(resa, "M416") != nullptr) {
        *textureInfo = hand.M416;
        *name = "M416";
        return true;
    }
    if (strstr(resa, "MK14") != nullptr) {
        *textureInfo = hand.MK14;
        *name = "MK14";
        return true;
    }
    if (strstr(resa, "SLR") != nullptr) {
        *textureInfo = hand.SLR;
        *name = "SLR";
        return true;
    }
    if (strstr(resa, "Mk47") != nullptr) {
        *textureInfo = hand.MK47;
        *name = "Mk47";
        return true;
    }
    if (strstr(resa, "M762") != nullptr) {
        *textureInfo = hand.M762;
        *name = "M762";
        return true;
    }
    if (strstr(resa, "QBZ") != nullptr) {
        *textureInfo = hand.QBZ;
        *name = "QBZ";
        return true;
    }
    if (strstr(resa, "QBU") != nullptr) {
        *textureInfo = hand.QBU;
        *name = "QBU";
        return true;
    }
    if (strstr(resa, "S1897") != nullptr) {
        *textureInfo = hand.S1896;
        *name = "S1897";
        return true;
    }
    if (strstr(resa, "S12K") != nullptr) {
        *textureInfo = hand.S12K;
        *name = "S12K";
        return true;
    }
    if (strstr(resa, "S686") != nullptr) {
        *textureInfo = hand.S686;
        *name = "S686";
        return true;
    }
    if (strstr(resa, "FlareGun") != nullptr) {
        *textureInfo = hand.短管散弹;
        *name = "FlareGun";
        return true;
    }
    if (strstr(resa, "Shoulei") != nullptr) {
        *textureInfo = hand.手雷;
        *name = "Shoulei";
        return true;
    }
    if (strstr(resa, "Burn") != nullptr) {
        *textureInfo = hand.烟雾弹;
        *name = "Burn";
        return true;
    }
    if (strstr(resa, "WEP_Pan_C") != nullptr) {
        *textureInfo = hand.拳头;
        *name = "Pan";
        return true;
    }
    if (strstr(resa, "AWM") != nullptr) {
        *textureInfo = hand.AWM;
        *name = "AWM";
        return true;
    }
    if (strstr(resa, "M24") != nullptr) {
        *textureInfo = hand.M24;
        *name = "M24";
        return true;
    }
    if (strstr(resa, "UMP9") != nullptr) {
        *textureInfo = hand.UMP9;
        *name = "UMP9";
        return true;
    }
    textureInfo->w = hand.拳头.w;
    textureInfo->h = hand.拳头.h;
    textureInfo->y = 10;
    textureInfo->textureId = hand.拳头.textureId;
    *name = "NULL";
    return true;
}    


//180子追



       
 auto GetTargetByCrossDist() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.AimBot.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.AimBot.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Config.AimBot.IgnoreBots) {
                    if (Player->bIsAI)
                        continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                 
                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                    
                  
                }
            }
        }
    }

    return result;
}
        
            






  
       


                 


//视角360

auto 自瞄360度() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.AimBot.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.AimBot.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }

                if (Config.AimBot.IgnoreBots) {
                    if (Player->bIsAI)
                        continue;
                }

            
float dist = localPlayer->GetDistanceTo(Player);
                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        
    
    return result;
    }
//吉良自瞄
bool isInsideFOVs(int x, int y) {
    if (!Config.AimBot.Enable)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = Config.AimBot.Cross*0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}


auto GetTargetForAimBot() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
				auto Target = (ASTExtraPlayerCharacter *) Actor;

                float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
                if (dist > 自瞄距离)
                    continue;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
					continue;
					
					
             if (Config.AimBot.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.AimBot.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Config.AimBot.IgnoreBots) {
                    if (Player->bIsAI)
                        continue;
                        }

                        auto Root = Player->GetBonePos("Root", {});
				auto Head = Player->GetBonePos("Head", {});
				FVector2D RootSc, HeadSc;
				if (W2S(Root, &RootSc) && W2S(Head, &HeadSc))
				{
					float height = abs(HeadSc.Y - RootSc.Y);
					float width = height * 0.65f;

					FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
					if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight))
					{
						FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
						FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
						

						
						
                                if(isInsideFOVs((int)middlePoint.X, (int)middlePoint.Y)) {

                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Player;
                                }
                              
                            }
                        }
                  }  
                
            }
        }
    }

    return result;
}
/*
auto GetTargetByCrossDist() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.AimBot.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.AimBot.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Config.AimBot.IgnoreBots) {
                    if (Player->bIsAI)
                        continue;
                }
                               

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                        if(isInsideFOV((int)middlePoint.X, (int)middlePoint.Y)) {
                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        }
    }

    return result;
}
}
auto GetTargetForAimBot() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);


            auto localPlayer = g_LocalPlayer;
            auto localController = g_LocalController;

            if (localPlayer) {
                for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;

                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                        auto Player = (ASTExtraPlayerCharacter *) Actor;

                        if (Player->PlayerKey == localPlayer->PlayerKey)
                            continue;

                        if (Player->TeamID == localPlayer->TeamID)
                            continue;

                        if (Player->bDead)
                            continue;

                                       if (Config.AimBot.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.AimBot.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }

                if (Config.AimBot.IgnoreBots) {
                    if (Player->bIsAI)
                        continue;
                }

                        auto Root = Player->GetBonePos("Root", {});
                        auto Head = Player->GetBonePos("Head", {});

                        FVector2D RootSc, HeadSc;
                        if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                            float height = abs(HeadSc.Y - RootSc.Y);
                            float width = height * 0.65f;

                            FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2),
                                                   0};
                            if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
                                (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                                FVector2D v2Middle = FVector2D((float) (glWidth / 2),
                                                               (float) (glHeight / 2));
                                FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                                if(isInsideFOV((int)middlePoint.X, (int)middlePoint.Y)) {
                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Player;
                                }
                            }
                        }
                    }
                }
            }

            return result;
        }
    }
}
}*/
std::string playerstatus(int GetEnemyState)
{    
     switch (GetEnemyState)
     {
        case 0:
            return "发呆";
            break;
        case 1032:
            return "TILT HEAD";
            break;
        case 268435464:
            return "PLAY EMOTION";
            break;
        case 1552:
            return "在喵什么";
            break;
        case 8388616:
            return "PARACHUTE";
            break;
        case 131072:
            return "被打倒了";
            break;
        case 33554440:
            return "PLANE";
            break;
        case 8205:
            return "在射精";
            break;
        case 32:
            return "坐下来了";
            break;
        case 4194303:
            return "正在游泳";
            break;
        case 72:
            return "在蹦迪";
            break;
        case 8388608:
            return "PARACHUTE";
            break;
        case 16392:
            return "在丢什么";
            break;
        case 262:
            return "RELOADING";
            break;
        case 1048584:
            return "RIDE";
            break;
        case 8200:
            return "FIST";
            break;
        case 2056:
            return "切枪";
            break;
        case 4194302:
            return "正在游泳";
            break;
        case 269:
            return "RELOADING";
            break;
        case 16777224:
            return "正在爬";
            break;
        case 10:
            return "在跑步";
            break;
        case 263:
            return "RELOADING";
            break;
        case 65568 || 65544:
            return "在打药呢";
            break;
        case 4194308:
            return "正在游泳";
            break;
        case 268:
            return "RELOADING";
            break;
        case 35:
            return "GET 坐下来了";
            break;
        case 8388617:
            return "PARACHUTE";
            break;
        case 33:
            return "在喵什么";
            break;
        case 75:
            return "在蹦迪";
            break;
        case 8201:
            return "FIST";
            break;
        case 266:
            return "RELOADING";
            break;
        case 32776:
            return "被打倒了";
            break;
        case 270:
            return "RELOADING";
            break;
        case 4194301:
            return "正在游泳";
            break;
        case 1033:
            return "在跑步";
            break;
        case 131073:
            return "被打倒了";
            break;
        case 524296:
            return "在开车车";
            break;
        case 1114120:
            return "在打药呢";
            break;
        case 265:
            return "RELOADING";
            break;
        case 9:
            return "在跑步";
            break;
        case 262144:
            return "在抽烟";
            break;
        case 8203:
            return "FIST";
            break;
        case 8202:
            return "在射精";
            break;
        case 262152:
            return "嗝屁了";
            break;
        case 17416:
            return "在扔什么";
            break;
        case 17:
            return "坐下来了";
            break;
        case 11:
            return "在跑步";
            break;
        case 65545:
            return "在打药呢";
            break;
        case 33554432:
            return "PLANE";
            break;
        case 19:
            return "SQUAT";
            break;
        case 8208:
            return "在射精";
            break;
        case 520:
            return "在喵什么";
            break;
        case 8206:
            return "在射精";
            break;
        case 8:
            return "立起来了";
            break;
        case 16:
            return "坐下来了";
            break;
        case 13180:
            return "被打倒了";
            break;
        case 4194310:
            return "正在游泳";
            break;
        case 16393:
            return "在丢什么";
            break;
        case 4194309:
            return "正在游泳";
            break;
        case 264:
            return "RELOADING";
            break;
        case 4194305:
            return "正在游泳";
            break;
        case 8207:
            return "在射精";
            break;
        case 4194307:
            return "正在游泳";
            break;
        return "";
    }
}


const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
            break;
        default:
            return "Vehicle";
            break;
    }
    return "Vehicle";
}


    


void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;
void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {

 if (追踪函数1) {
  if (Config.AimBot.Enabl) {
        ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
        if (Target) {
            bool triggerOk = false;
            if (Config.AimBot.Trigger != EAimTrigger::None) {
                if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.AimBot.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }

                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;

    
   
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, start);
                    FRotator sex = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                    rot = sex;
                }
            }
        }
    }
    }
     if (追踪函数2) {
    if (Config.AimBot.Enabl) {
        ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
        if (Target) {
            bool triggerOk = false;
            if (Config.AimBot.Trigger != EAimTrigger::None) {
                if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.AimBot.Trigger == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }
                
                
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;

				
			
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    rot = ToRotator(g_LocalController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos);
                                                       
                                        
                                    
                                }
                            }
                        }
                    }
}
    return orig_shoot_event(thiz, start, rot, weapon, unk1);
}
/*if (Config.AimBot.Enable) {
        ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
        if (Target) {
            bool triggerOk = false;
            if (Config.AimBot.Trigger != EAimTrigger::None) {
                if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.AimBot.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
                    rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                }
            }
        }
    }

   /* if (Config.AimBot.Enable) {
                    ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
                    if (Target) {
                        bool triggerOk = false;
                        if (Config.AimBot.Trigger != EAimTrigger::None) {
                            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                                triggerOk = g_LocalPlayer->bIsWeaponFiring;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                                triggerOk = g_LocalPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                                triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                                triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                            }
                        } else triggerOk = true;
                        if (triggerOk) {
                            FVector targetAimPos = Target->GetBonePos("Head", {});
                            if (Config.AimBot.Target == EAimTarget::Chest) {
                                targetAimPos.Z -= 25.0f;
                            }
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
                    rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                }
            }
        }
    }*/
   // return orig_shoot_event(thiz, start, rot, weapon, unk1);
   




class FPSCounter {
protected:
    unsigned int m_fps;
    unsigned int m_fpscount;
    long m_fpsinterval;

public:
    FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
    }

    void update() {
        m_fpscount++;

        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;

            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }

    unsigned int get() const {
        return m_fps;
    }
};

FPSCounter fps;
void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
 
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
   
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}


void DrawRectangle(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
 
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
   
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}
void DrawFilledRectangle(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
 
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
   
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}
/*
void DrawRectangle(ImDrawList *draw, FVector2D Pos, float Width, float Height, float Thickness, FLinearColor Color) {
    draw->ImDrawList(Pos.X, Pos.Y, Pos.X + Width, Pos.Y, Color, Thickness);
    draw->ImDrawList(Pos.X, Pos.Y, Pos.X, Pos.Y + Height, Color, Thickness);
    draw->ImDrawList(Pos.X + Width, Pos.Y, Pos.X + Width, Pos.Y + Height, Color, Thickness);
    draw->ImDrawList(Pos.X, Pos.Y + Height, Pos.X + Width, Pos.Y + Height, Color, Thickness);
}

void (ImDrawList *draw, FVector2D Pos, float Width, float Height, FLinearColor Color) {
    draw;ImDrawList-Color, Pos.X, Pos.Y, Width, Height);
}
/*bool W2S2(FVector worldPos, FVector2D *screenPos) {
    return g_LocalController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}*/

void Line(ImDrawList *draw,FVector2D origin, FVector2D dest, ImColor color)
{
   draw->AddLine({origin.X, origin.Y},{dest.X, dest.Y},color, 2.0f);
}
int 播放音乐(const char* url) {
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;
    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_EDETACHED) {
        if (java_vm->AttachCurrentThread(&java_env, NULL) != JNI_OK) {
            return -1;
        }
    } else if (jni_return == JNI_EVERSION) {
        return -1;
    }
 jclass 音乐 = java_env->FindClass("android/media/MediaPlayer");
    if (音乐 == NULL) {
        return -3;
    }

    jmethodID create_method_id = java_env->GetMethodID(音乐, "<init>", "()V");
    if (create_method_id == NULL) {
        return -4;
    }

    jobject media_player_obj = java_env->NewObject(音乐, create_method_id);
    if (media_player_obj == NULL) {
        return -5;
    }

    jmethodID set_data_source_method_id = java_env->GetMethodID(音乐, "setDataSource", "(Ljava/lang/String;)V");
    if (set_data_source_method_id == NULL) {
        return -6;
  }

    jstring url_str = java_env->NewStringUTF(url);
    java_env->CallVoidMethod(media_player_obj, set_data_source_method_id, url_str);

    jmethodID prepare_method_id = java_env->GetMethodID(音乐, "prepare", "()V");
    if (prepare_method_id == NULL) {
        return -7;
    }
    java_env->CallVoidMethod(media_player_obj, prepare_method_id);

    jmethodID start_method_id = java_env->GetMethodID(音乐, "start", "()V");
    if (start_method_id == NULL) {
        return -8;
    }
   
    java_env->CallVoidMethod(media_player_obj, start_method_id);

    java_env->DeleteLocalRef(音乐);
    java_env->DeleteLocalRef(media_player_obj);
    java_env->DeleteLocalRef(url_str);

    if (java_vm->DetachCurrentThread() != JNI_OK) {
        return -1;
    }

    return 0;
}

int 手机版本() {
    char prop_value[PROP_VALUE_MAX];
    __system_property_get("ro.build.version.sdk", prop_value);
    return atoi(prop_value);
}
void Menu1(){
 static auto Flags21 = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar;
ImGui::SetNextWindowSize(ImVec2(120.0f, 20.0f));
							
							
							ImGuiIO& Io = ImGui::GetIO();

							ImGui::SetNextWindowPos(ImVec2(150, 80));
							if (ImGui::Begin("enee", 0, Flags21))
							{
								time_t t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
struct tm* timeInfo = localtime(&t);
char buffer[80];
strftime(buffer, 80, "%Y-%m-%d : %H:%M:%S", timeInfo);

								ImGui::Text("PUBG MOBILE FPS: %.2f");
								ImGui::SameLine();
							    //ImGui::Text("%s", buffer);
								ImGui::SameLine();
								ImGui::Text("FPS: %.2f", ImGui::GetIO().Framerate);
								ImGui::Text("PUBGM-HZ");
								ImGui::End();
								
								
								
							}
							
							//...

							}
							DefineHook(int, sub_288C090, (int a1, int a2))
{
    auto GWorld = GetWorld();
    if (GWorld){
        if (GWorld->NetDriver->ServerConnection)
            if(GWorld->NetDriver->ServerConnection->PlayerController){
                ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
                uint32_t key =  *(int*)(a2 + 0x70);
                if(key == localController->PlayerKey){
                    ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                    if (xsuit == 1)
					*(int*)(a2 + 0x94) = 1405909; //blood raven x suit
                    if (xsuit == 2)
                    *(int*)(a2 + 0x94) = 1405628; //Golden Pharaoh X-Suit
                    if (xsuit == 3)
                    *(int*)(a2 + 0x94) = 1406152; //Avalanche
                    if (xsuit == 4)
                    *(int*)(a2 + 0x94) = 1406475; //Irresidence
                    if (xsuit == 5)
                    *(int*)(a2 + 0x94) = 1405983; //Poseidon
                    if (xsuit == 6)
                    *(int*)(a2 + 0x94) = 1406638; //Arcane Jester X-suit
                    if (xsuit == 7)
                    *(int*)(a2 + 0x94) = 1406311; //Silvanus X-Sui
                    if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
						if (skinakm == 1)
                        *(int*)(a2 + 0x90) = 1101001042; //Sculpture - AKM
                        if (skinakm == 2)
                        *(int*)(a2 + 0x90) = 1101001063; //The Seven Seas - AKM
                        if (skinakm == 3)
                        *(int*)(a2 + 0x90) = 1101001068; //Roaring Tiger - AKM
                        if (skinakm == 4)
                        *(int*)(a2 + 0x90) = 1101001089; //Glacier - AKM
                        if (skinakm == 5)
                        *(int*)(a2 + 0x90) = 1101001101; //Desert Fossil - AKM
                        if (skinakm == 6)
                        *(int*)(a2 + 0x90) = 1101001116; //Jack-o'-lantern - AKM
                        if (skinakm == 7)
                        *(int*)(a2 + 0x90) = 1101001128; //Ghillie Dragon - AKM          
                        else if (skinakm == 8)
					    *(int*)(a2 + 0x90) = 1101001143; //Gold Pirate - AKM        		
					    else if (skinakm == 9)
					    *(int*)(a2 + 0x90) = 1101001174;
					   else if (skinakm == 10)
					    *(int*)(a2 + 0x90) = 1101001213;
					    else if (skinakm == 11)
					    *(int*)(a2 + 0x90) = 1101001023;
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){                  
                        if (skinm4 == 1) 
                            *(int*)(a2 + 0x90) = 1101004044; //Glacier - M416 
                        else if (skinm4 == 2) 
                            *(int*)(a2 + 0x90) = 1101004062; //The Fool - M416
                        else if (skinm4 == 3) 
                            *(int*)(a2 + 0x90) = 1101004086; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            *(int*)(a2 + 0x90) = 1101004078; //Wanderer - M416
                       else if (skinm4 == 5) 
                            *(int*)(a2 + 0x90) = 1101004098; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            *(int*)(a2 + 0x90) = 1101004163; //Imperial Splendor - M416
                            else if (skinm4 == 7) 
                            *(int*)(a2 + 0x90) = 1101004201; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            *(int*)(a2 + 0x90) = 1101004138; //TechnoCore - M416
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
                           if (skinscar == 1) 
                        *(int*)(a2 + 0x90) = 1101003057; //Water Blaster - SCAR-L
                       else if (skinscar == 2) 
						    *(int*)(a2 + 0x90) = 1101003070; //Enchanted Pumpkin - SCAR-L
						 else if (skinscar == 3) 
						    *(int*)(a2 + 0x90) = 1101003079; //Operation Tomorrow - SCAR-L
						 else if (skinscar == 4) 
						    *(int*)(a2 + 0x90) = 1101003099; //Drop the Bass - SCAR-L @kero_200
						    else if (skinscar == 5) 
						    *(int*)(a2 + 0x90) = 1101003119;
						    else if (skinscar == 6) 
						    *(int*)(a2 + 0x90) = 1101003146;
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){                  
                      if (skinm7 == 1) 
                        *(int*)(a2 + 0x90) = 1101003057; //8-bit Unicorn - M762
                       else if (skinm7 == 2) 
						    *(int*)(a2 + 0x90) = 1101008116; //Messi Football Icon M762
						 else if (skinm7 == 3) 
						    *(int*)(a2 + 0x90) = 1101008070; //GACKT MOONSAGA-M762
						 else if (skinm7 == 4) 
						    *(int*)(a2 + 0x90) = 1101008036; //Lotus Fury - M762
						    else if (skinm7 == 5)
						    *(int*)(a2 + 0x90) = 1101008051; //Concerto of Love - M762
						    else if (skinm7 == 6)
						    *(int*)(a2 + 0x90) = 1101008104; //StarCore-M762
						    else if (skinm7 == 7)
						    *(int*)(a2 + 0x90) = 1101008081; //Stray Rebellion - M762
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
                    if (skingroza == 1) 
                        *(int*)(a2 + 0x90) = 1101005019;
                        if (skingroza == 2) 
                        *(int*)(a2 + 0x90) = 1101005052;
                        if (skingroza == 3) 
                        *(int*)(a2 + 0x90) = 1101005025; 
                        if (skingroza == 4) 
                        *(int*)(a2 + 0x90) = 1101005038; 
                        }
                    
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){

if (skinuzi == 1) 
                        *(int*)(a2 + 0x90) = 1102001024; //Savagery - UZI
                        if (skinuzi == 2) 
                        *(int*)(a2 + 0x90) = 1102001036; //Ethereal Emblem - UZI
                        if (skinuzi == 3) 
                        *(int*)(a2 + 0x90) = 1102001058; //Romantic Moments - UZI
                        if (skinuzi == 4) 
                        *(int*)(a2 + 0x90) = 1102001069; //Shimmer Power - UZI
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){

                      if (skinump45 == 1) 
                        *(int*)(a2 + 0x90) = 1102002043;
                        if (skinump45 == 2) 
                        *(int*)(a2 + 0x90) = 1102002053;
                        if (skinump45 == 3) 
                        *(int*)(a2 + 0x90) = 1102002061; 
                        if (skinump45 == 4) 
                        *(int*)(a2 + 0x90) = 1102002070; 
                        if (skinump45 == 5) 
                        *(int*)(a2 + 0x90) = 1102002030; 
                        if (skinump45 == 6) 
                        *(int*)(a2 + 0x90) = 1102002090; 
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vector")){

                        if (skinvector == 1) 
                        *(int*)(a2 + 0x90) = 1102003020;
                        if (skinvector == 2) 
                        *(int*)(a2 + 0x90) = 1102003031;
                        if (skinvector == 3) 
                        *(int*)(a2 + 0x90) = 1102003039; 
                        if (skinvector == 4) 
                        *(int*)(a2 + 0x90) = 1102003072; 
                        if (skinvector == 5) 
                        *(int*)(a2 + 0x90) = 1102003060; 
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Thompson")){

                        *(int*)(a2 + 0x90) = 1102004018; //candy cane
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "PP-19 Bizon")){

if (skinbizon == 1) 
                        *(int*)(a2 + 0x90) = 1102005007;
                        if (skinbizon == 2) 
                        *(int*)(a2 + 0x90) = 1102005020;
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Kar98K")){

                        if (skinkar == 1) 
                        *(int*)(a2 + 0x90) = 1103001060;
                        if (skinkar == 2) 
                        *(int*)(a2 + 0x90) = 1103001079;
                        if (skinkar == 3) 
                        *(int*)(a2 + 0x90) = 1103001085; 
                        if (skinkar == 4) 
                        *(int*)(a2 + 0x90) = 1103001101;                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){

                        if (skinm24 == 1) 
                        *(int*)(a2 + 0x90) = 1103002018;
                        if (skinm24 == 2) 
                        *(int*)(a2 + 0x90) = 1103002030;
                        if (skinm24 == 3) 
                        *(int*)(a2 + 0x90) = 1103002049; 
                        if (skinm24 == 4) 
                        *(int*)(a2 + 0x90) = 1103002047; 
                        if (skinm24 == 5) 
                        *(int*)(a2 + 0x90) = 1103002059; 
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){

                        if (skinawm == 1) 
                        *(int*)(a2 + 0x90) = 1103003022;
                        if (skinawm == 2) 
                        *(int*)(a2 + 0x90) = 1103003030;
                        if (skinawm == 3) 
                        *(int*)(a2 + 0x90) = 1103003042; 
                        if (skinawm == 4) 
                        *(int*)(a2 + 0x90) = 1103003062; 
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DP28")){

                        if (skindp28 == 1) 
                        *(int*)(a2 + 0x90) = 1105002018;
                        if (skindp28 == 2) 
                        *(int*)(a2 + 0x90) = 1105002035;
                        
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
                    if (skinm16a4 == 1) 
                        *(int*)(a2 + 0x90) = 1101002029;
                        if (skinm16a4 == 2) 
                        *(int*)(a2 + 0x90) = 1101002056;
                        if (skinm16a4 == 3) 
                        *(int*)(a2 + 0x90) = 1101002068; 
                        if (skinm16a4 == 4) 
                        *(int*)(a2 + 0x90) = 1101002081; 
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
                        if (skinqbz == 1) 
                        *(int*)(a2 + 0x90) = 1101007025;
                        if (skinqbz == 2) 
                        *(int*)(a2 + 0x90) = 1101007036;
                        if (skinqbz == 3) 
                        *(int*)(a2 + 0x90) = 1101007046;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
                                                if (skinm249== 1) 
                        *(int*)(a2 + 0x90) = 1105001034;
                        if (skinm249== 2) 
                        *(int*)(a2 + 0x90) = 1105001020;
                        if (skinm249== 3) 
                        *(int*)(a2 + 0x90) = 1105001048;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mini 14")){
                        if (skinm16a4 == 1) 
                        *(int*)(a2 + 0x90) = 1101007025;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SLR")){
                        if (skinslr == 1) 
                        *(int*)(a2 + 0x90) = 1103009022;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SKS")){
                        if (skinsks == 1) 
                        *(int*)(a2 + 0x90) = 1103004037;
                        if (skinsks == 2) 
                        *(int*)(a2 + 0x90) = 1103004046;
                        if (skinsks == 3) 
                        *(int*)(a2 + 0x90) = 1103004058; 
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Pan")){

                        if (skinpan == 1) 
                        *(int*)(a2 + 0x90) = 1108004125;
                        if (skinpan == 2) 
                        *(int*)(a2 + 0x90) = 1108004145;
                        if (skinpan == 3) 
                        *(int*)(a2 + 0x90) = 1108004160; 
                         if (skinpan == 4) 
                        *(int*)(a2 + 0x90) = 1108004337; 
                        if (skinpan == 5) 
                        *(int*)(a2 + 0x90) = 1108004283; 
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vss")){
                    if (skinvss == 1) 
                        *(int*)(a2 + 0x90) = 1103005024;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MK14")){
                    if (skinmk14 == 1) 
                        *(int*)(a2 + 0x90) = 1103007020;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S1897")){
                        if (skins1897 == 1) 
                        *(int*)(a2 + 0x90) = 1104002022;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AUG")){
                    if (skinaug == 1) 
                        *(int*)(a2 + 0x90) = 1101006033;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S12K")){
                        if (skins12k == 1) 
                        *(int*)(a2 + 0x90) = 1104003026;
                    }
                }
            }
    }
    return Orig_sub_288C090(a1, a2);
}
void InitTexture();
bool GetHandInfo(char* resa,char** name,TextureInfo* textureInfo);

void GetIni() {
    FILE *fp;
    if ((fp = fopen("/storage/emulated/0/Android/data/com.tencent.ig/files/image/Config.txt", "r")) != nullptr) {
        char temp[2048];
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showBox = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            boxType = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showBone = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showRay = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showInfo = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showRadar = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showVehicle = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showGrenade = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showWarning = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showTarget = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showRifle = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showSubmachine = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showSniper = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            show556 = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            show762 = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showMirror = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showExpansion = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showOtherParts = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showDrug = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showArmor = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showChest = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showDrop = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            dieNoAim = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            aimShortDis = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            aimbot = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            aimType = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            aimFire = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            aimOpen = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showRange = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            aimRange = atof(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            //SpeedAim = atof(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            //Recoil = atof(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showtouch = atof(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showImg = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showText = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            esp_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                               atoi(strstr(temp, ",") + 1) / 255.f,
                               atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            bot_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                               atoi(strstr(temp, ",") + 1) / 255.f,
                               atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            bone_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                atoi(strstr(temp, ",") + 1) / 255.f,
                                atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            ray_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                               atoi(strstr(temp, ",") + 1) / 255.f,
                               atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            vehicle_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                   atoi(strstr(temp, ",") + 1) / 255.f,
                                   atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            rifle_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                 atoi(strstr(temp, ",") + 1) / 255.f,
                                 atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            submachine_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                      atoi(strstr(temp, ",") + 1) / 255.f,
                                      atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            snipe_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                 atoi(strstr(temp, ",") + 1) / 255.f,
                                 atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            box_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                               atoi(strstr(temp, ",") + 1) / 255.f,
                               atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            drop_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                atoi(strstr(temp, ",") + 1) / 255.f,
                                atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            drug_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                atoi(strstr(temp, ",") + 1) / 255.f,
                                atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            armor_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                 atoi(strstr(temp, ",") + 1) / 255.f,
                                 atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            color_556 = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                               atoi(strstr(temp, ",") + 1) / 255.f,
                               atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            color_762 = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                               atoi(strstr(temp, ",") + 1) / 255.f,
                               atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            mirror_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                  atoi(strstr(temp, ",") + 1) / 255.f,
                                  atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            expansion_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f,
                                     atoi(strstr(temp, ",") + 1) / 255.f,
                                     atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            otherparts_color = ImVec4(atoi(strstr(temp, "=") + 1) / 255.f, atoi(strstr(temp, ",") + 1) / 255.f, atoi(strstr(temp, ".") + 1) / 255.f, 1.f);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            stroke = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            espWidth = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            boneWidth = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            showItem = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            aimLocation = atoi(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            radarLocation = atof(strstr(temp, "=") + 1);
        if (fgets(temp, sizeof(temp), fp) != nullptr)
            radarLocation2 = atof(strstr(temp, "=") + 1);
        fclose(fp);
    }
}
std::string GetDeviceKernel()
{
    FILE* pipe = popen("uname -r", "r");
    if (!pipe)
        return "Failed to get kernel information";
    char buffer[128];
    std::string result = "";
    while (!feof(pipe))
    {
        if (fgets(buffer, 128, pipe) != NULL)
            result += buffer;
    }
    pclose(pipe);
    return result;
}
int OpenURL(const char* url)
{
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;

    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;

    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;

    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;

    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_LaunchURL", "(Ljava/lang/String;)V");
    if (method_id == NULL)
        return -4;
        
    jstring retStr = java_env->NewStringUTF(url);
    java_env->CallVoidMethod(g_App->activity->clazz, method_id, retStr);

    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;

    return 0;
}
//void RenderESP(ImDrawList *draw, int screenWidthNRG, int screenHeightNRG) 
void DrawESP(ImDrawList*draw,int screenWidth, int screenHeight) {



if(Logo){


MemoryPatch::createWithHex("libanogs.so",0x4AEF8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AEE0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AED0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AEC0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AE80,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AE60,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AE5C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AE50,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AE40,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AE28,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4ADE4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4ADE0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4ADD4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4ADA8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD94,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD90,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD80,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD74,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD60,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD50,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD4C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD28,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD24,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD14,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4AD0C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4ACE8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4ACE4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4ACCC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A9C8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A9BC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A9B8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A9A8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A9A4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A954,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A948,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A918,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8EC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8D4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A8B8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A890,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A878,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A868,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A860,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A854,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A830,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A7F4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A7EC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A75C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A754,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A74C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A73C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A730,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A72C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A71C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A710,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A6F8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A6E8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A6A4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A684,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A5BC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A514,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A464,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A458,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A454,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A424,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A420,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A414,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A410,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A3F8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A3BC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A3B4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A39C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A398,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A394,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A390,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A380,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A374,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A368,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A364,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A35C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A358,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A354,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A350,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A34C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A344,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A338,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A334,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A328,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A324,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A30C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2E0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2D4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2BC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A258,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A24C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A238,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A22C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A224,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1FC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1EC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1E4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A1DC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A174,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A170,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A118,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A114,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A104,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0F4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0F0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0E0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0D0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0C0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0B0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A0A8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A07C,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A078,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A074,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A020,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A018,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A004,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49FA4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CB0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49CA4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C80,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C74,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C70,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C54,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C50,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C48,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C44,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C40,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C24,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C14,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C10,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49C04,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BF4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BF0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BE8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BE4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BD4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BD0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BCC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BC8,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BC4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BBC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49BA0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x49B98,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0xC4,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0xC0,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0xAC,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x78,"25 39 29 00").Modify();
MemoryPatch::createWithHex("libanogs.so",0x74,"25 39 29 00").Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC108, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC120, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC130, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC140, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC180, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC1A0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC1A4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC1B0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC1C0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC1D8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC21C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC220, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC22C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC258, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC26C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC270, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC280, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC28C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC2A0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC2B0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC2B4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC2D8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC2DC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC2EC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC2F4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC318, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC31C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC334, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC638, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC644, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC648, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC658, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC65C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC6AC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC6B8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC6E8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC714, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC72C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC748, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC770, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC788, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC798, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC7A0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC7AC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC7D0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC80C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC814, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC8A4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC8AC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC8B4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC8C4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC8D0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC8D4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC8E4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC8F0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC908, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC918, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC95C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xC97C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCA44, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCAEC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCB9C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCBA8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCBAC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCBDC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCBE0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCBEC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCBF0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC08, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC44, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC4C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC64, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC68, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC6C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC70, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC80, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC8C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC98, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCC9C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCA4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCA8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCAC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCB0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCB4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCBC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCC8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCCC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCD8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCDC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCCF4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCD20, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCD2C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCD44, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCDA8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCDB4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCDC8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCDD4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCDDC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCE04, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCE14, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCE1C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCE24, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCE8C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCE90, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCEE8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCEEC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCEFC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF0C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF10, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF20, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF30, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF40, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF50, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF58, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF84, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF88, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCF8C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCFE0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCFE8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xCFFC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD05C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD350, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD35C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD380, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD38C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD390, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3AC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3B0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3B8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3BC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3C0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3DC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3EC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3F0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD3FC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD40C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD410, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD418, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD41C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD42C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD430, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD434, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD438, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD43C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD444, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD460, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0xD468, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x56F3C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x56F40, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x56F54, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x56F88, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x56F8C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();

MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260108, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260120, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260130, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260140, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260180, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752601A0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752601A4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752601B0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752601C0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752601D8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526021C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260220, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526022C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260258, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526026C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260270, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260280, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526028C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752602A0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752602B0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752602B4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752602D8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752602DC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752602EC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752602F4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260318, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526031C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260334, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260638, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260644, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260648, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260658, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526065C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752606AC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752606B8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752606E8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260714, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526072C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260748, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260770, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260788, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260798, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752607A0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752607AC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752607D0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526080C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260814, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752608A4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752608AC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752608B4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752608C4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752608D0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752608D4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752608E4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752608F0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260908, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260918, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526095C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526097C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260A44, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260AEC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260B9C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260BA8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260BAC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260BDC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260BE0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260BEC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260BF0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C08, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C44, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C4C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C64, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C68, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C6C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C70, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C80, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C8C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C98, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260C9C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CA4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CA8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CAC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CB0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CB4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CBC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CC8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CCC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CD8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CDC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260CF4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260D20, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260D2C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260D44, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260DA8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260DB4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260DC8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260DD4, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260DDC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260E04, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260E14, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260E1C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260E24, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260E8C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260E90, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260EE8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260EEC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260EFC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F0C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F10, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F20, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F30, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F40, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F50, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F58, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F84, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F88, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260F8C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260FE0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260FE8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375260FFC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526105C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261350, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526135C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261380, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526138C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261390, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613AC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613B0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613B8, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613BC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613C0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613DC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613EC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613F0, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752613FC, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526140C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261410, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261418, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526141C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526142C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261430, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261434, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261438, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x737526143C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261444, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261460, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7375261468, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752AAF3C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752AAF40, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752AAF54, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752AAF88, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x73752AAF8C, OBFUSCATE("h 28 29 62 00 34 29 27 33")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83A0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83B4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83B8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83C4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83C8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83D0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83D4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83D8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83EC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD83F0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8404, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8408, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD840C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8418, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8438, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8444, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8468, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8470, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8474, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD847C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8498, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD849C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84A4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84AC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84B0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84C0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84C8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84CC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84D0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84E8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84EC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84F0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD84FC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8500, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8508, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8528, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8614, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD861C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8630, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8640, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8654, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8658, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD865C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD866C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8670, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8678, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8680, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8684, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8694, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8698, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86A8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86B0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86C0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86C4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86D8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86E0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86E8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86EC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86F4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86F8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD86FC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8720, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8724, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8728, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD872C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8738, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8740, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8748, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8760, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8764, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8768, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8770, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8784, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8788, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD878C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8798, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD87C4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD87C8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD87D0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD87D4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD87DC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8820, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8828, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8858, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD88CC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD88D0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8914, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8918, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD891C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8920, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD8934, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9664, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD966C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9684, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD968C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9690, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD96C0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD96D0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD96D4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD96D8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD96DC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9704, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9708, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD970C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9710, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9714, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9718, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD971C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9720, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9724, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD972C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9738, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD973C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9744, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD974C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9750, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9754, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9758, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9760, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9764, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9768, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9774, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9778, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD977C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9788, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD978C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9790, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9798, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD979C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD97A0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9820, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9824, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98A8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98AC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98B8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98C8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98D0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98E0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98E4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98E8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98EC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD98FC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9904, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD990C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9910, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9914, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9928, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9930, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9948, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9950, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9954, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9958, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD995C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9964, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD996C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9974, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9978, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9980, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9984, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9988, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD998C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9994, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9998, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD999C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99A0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99A4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99A8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99AC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99BC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99C0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99C4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99C8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99CC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99D0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99DC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99E0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99E4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99E8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99F0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99F4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD99F8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A00, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A30, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A38, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A40, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A48, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A4C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A54, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A58, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A68, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A6C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A70, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A74, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A78, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A84, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A88, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A94, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9A98, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AA8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AAC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AB0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AB4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AC0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AC4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AC8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AD0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AD4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AE4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AEC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AF0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9AF8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B08, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B38, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B40, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B4C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B60, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B78, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B7C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B84, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B8C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B94, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9B9C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BA0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BA4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BA8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BAC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BB0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BB4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BC4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BCC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BD0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BD4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BDC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BE0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BE4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BE8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BF0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BF8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9BFC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C20, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C24, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C3C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C40, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C60, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C64, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C70, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C74, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C78, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C84, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C88, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C8C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C94, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9C98, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9CEC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9CF0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9CF4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9CF8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9CFC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9D00, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9D10, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9D18, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9D1C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9D2C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9D44, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9EE4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9EE8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9EF0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9EF4, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9F84, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9F88, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9F8C, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9F90, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9FC8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9FD0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9FD8, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9FDC, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x7369FD9FE0, OBFUSCATE("h 53 65 72 69 34 38 2C 53")).Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C60,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C4C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C48,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C3C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C38,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C30,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C2C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C28,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C14,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1C10,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1BFC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1BF8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1BF4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1BE8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1BC8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1BBC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B98,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B90,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B8C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B84,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B68,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B64,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B5C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B54,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B50,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B40,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B38,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B34,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B30,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B18,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B14,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B10,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B04,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1B00,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1AF8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1AD8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C19EC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C19E4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C19D0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C19C0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C19AC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C19A8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C19A4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1994,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1990,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1988,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1980,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C197C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C196C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1968,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1958,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1950,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1940,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C193C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1928,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1920,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1918,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1914,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C190C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1908,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1904,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C18E0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C18DC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C18D8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C18D4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C18C8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C18C0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C18B8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C18A0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C189C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1898,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1890,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C187C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1878,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1874,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1868,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C183C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1838,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1830,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C182C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1824,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C17E0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C17D8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C17A8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1734,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C1730,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C16EC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C16E8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C16E4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C16E0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C16CC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C099C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0994,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C097C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0974,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0970,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0940,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0930,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C092C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0928,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0924,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08FC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08F8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08F4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08F0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08EC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08E8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08E4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08E0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08DC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08D4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08C8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08C4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08BC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08B4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08B0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08AC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08A8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C08A0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C089C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0898,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C088C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0888,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0884,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0878,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0874,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0870,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0868,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0864,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0860,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C07E0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C07DC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0758,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0754,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0748,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0738,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0730,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0720,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C071C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0718,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0714,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0704,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06FC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06F4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06F0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06EC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06D8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06D0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06B8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06B0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06AC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06A8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C06A4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C069C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0694,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C068C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0688,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0680,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C067C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0678,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0674,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C066C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0668,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0664,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0660,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C065C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0658,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0654,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0644,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0640,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C063C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0638,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0634,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0630,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0624,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0620,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C061C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0618,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0610,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C060C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0608,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0600,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C05D0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C05C8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C05C0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C05B8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C05B4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C05AC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C05A8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0598,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0594,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0590,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C058C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0588,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C057C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0578,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C056C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0568,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0558,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0554,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0550,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C054C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0540,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C053C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0538,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0530,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C052C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C051C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0514,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0510,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0508,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C04F8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C04C8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C04C0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C04B4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C04A0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0488,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0484,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C047C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0474,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C046C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0464,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0460,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C045C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0458,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0454,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0450,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C044C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C043C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0434,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0430,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C042C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0424,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0420,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C041C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0418,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0410,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0408,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0404,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C03E0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C03DC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C03C4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C03C0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C03A0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C039C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0390,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C038C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0388,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C037C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0378,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0374,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C036C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0368,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0314,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0310,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C030C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0308,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0304,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0300,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C02F0,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C02E8,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C02E4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C02D4,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C02BC,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C011C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0118,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0110,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C010C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C007C,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0078,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0074,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0070,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0038,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0030,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0028,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0024,"53 65 72 69").Modify();
MemoryPatch::createWithHex("libUE4.so",0x13C0020,"53 65 72 69").Modify();



draw->AddText({ ((float) density / 20.0f), 180}, IM_COL32(0, 0, 255, 255),"免费直装，请勿倒卖");
draw->AddText({ ((float) density / 20.0f), 150}, IM_COL32(0, 255, 0, 255),"ZR直装");
draw->AddText({ ((float) density / 10.0f), 600}, IM_COL32(255, 0, 0, 255),"电报:@FBBIBB");
draw->AddText({ ((float) density / 10.0f), 550}, IM_COL32(255, 255, 0, 255),"作者:晓然 合作:HZ");
}
/*if(四百1){
脚本已结束：:
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E38537F8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E38538A8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853968, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E38539AC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E38539CC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E38539DC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853A60, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853A64, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853AAC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853AD8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853AE0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853AE4, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853AF8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853B08, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853B20, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853B54, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853B5C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853C08, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853C18, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853C1C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853C28, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853C4C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853C8C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853CD0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853D0C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853D24, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853D48, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853D70, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853D80, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853D90, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853D98, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853DB0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853DC0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853DD0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853DD4, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853E0C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853E1C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853E30, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853E40, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853E5C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853E80, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853EC0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853F0C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E3853F40, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4A4C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4A88, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4A94, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4AAC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4AFC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4B14, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4B34, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4B60, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4B80, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4B84, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4BC4, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4BD4, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4C28, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4C3C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4C7C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4C84, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4CAC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4CB0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4CBC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4CC8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4CCC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4CE0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4D14, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4D18, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4D38, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4D84, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4D90, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4DA0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4DB8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4DBC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4DD8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4DDC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4E10, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4E44, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4E5C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4E78, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4E88, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4EA8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4ED0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4EE8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4F34, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4F50, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4F64, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4FA8, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4FD0, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4FD4, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC4FE4, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC5004, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC5054, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC506C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC507C, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC5090, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC50D4, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC50EC, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC5168, OBFUSCATE("h 00 01 00 00")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libUE4.so"), 0x71E4BC5184, OBFUSCATE("h 00 01 00 00")).Modify();

//Telegram @JZZPD

//退出.
}*/

if (无敌jh){


MemoryPatch::createWithHex("libanogs.so",0x4A3010,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A300C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FEC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FE0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FD8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FCC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FC8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FC0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FBC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FB4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FB0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2FA8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F9C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F94,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F88,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F7C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F78,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F74,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F70,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F68,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F64,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F40,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F34,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F28,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F20,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F18,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F14,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2F0C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EF4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EF0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EE8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EE4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EDC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2ED8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2ED4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2ED0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EC8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EC4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EBC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EB8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EB4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EA8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2EA4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2CB8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2CA0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C9C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C94,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C88,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C84,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C58,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C40,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C38,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C34,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C24,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C20,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2C1C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2BC4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2BC0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2BB4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2BA8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2BA4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B9C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B98,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B94,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B7C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B78,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B74,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B68,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B64,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B5C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B58,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B54,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B40,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B3C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B38,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B30,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B20,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B18,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B10,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B0C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B08,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2B04,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2AFC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2AF8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2AF4,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2AF0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2ADC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2AD8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2ACC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2AC8,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2AC0,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A90,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A88,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A78,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A74,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A6C,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A68,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A60,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A58,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A2A54,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A29FC,"74 74 72 5F").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4A29F8,"74 74 72 5F").Modify();

MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x1FF0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x1FF4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2014, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2020, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2028, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2034, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2038, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2040, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2044, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x204C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2050, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2058, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2064, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x206C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2078, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2084, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2088, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x208C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2090, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2098, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x209C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x20C0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x20CC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x20D8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x20E0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x20E8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x20EC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x20F4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x210C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2110, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2118, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x211C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2124, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2128, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x212C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2130, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2138, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x213C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2144, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2148, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x214C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2158, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x215C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2348, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2360, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2364, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x236C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2378, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x237C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x23A8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x23C0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x23C8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x23CC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x23DC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x23E0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x23E4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x243C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2440, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x244C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2458, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x245C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2464, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2468, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x246C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2484, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2488, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x248C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2498, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x249C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24A4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24A8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24AC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24C0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24C4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24C8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24D0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24E0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24E8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24F0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24F4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24F8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x24FC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2504, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2508, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x250C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2510, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2524, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2528, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2534, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2538, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2540, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2570, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2578, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2588, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x258C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2594, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2598, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x25A0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x25A8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x25AC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2604, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x2608, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();


MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA6FF0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA6FF4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7014, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7020, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7028, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7034, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7038, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7040, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7044, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA704C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7050, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7058, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7064, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA706C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7078, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7084, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7088, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA708C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7090, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7098, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA709C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA70C0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA70CC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA70D8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA70E0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA70E8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA70EC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA70F4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA710C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7110, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7118, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA711C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7124, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7128, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA712C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7130, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7138, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA713C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7144, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7148, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA714C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7158, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA715C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7348, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7360, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7364, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA736C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7378, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA737C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA73A8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA73C0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA73C8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA73CC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA73DC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA73E0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA73E4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA743C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7440, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA744C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7458, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA745C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7464, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7468, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA746C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7484, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7488, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA748C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7498, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA749C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74A4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74A8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74AC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74C0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74C4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74C8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74D0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74E0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74E8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74F0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74F4, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74F8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA74FC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7504, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7508, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA750C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7510, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7524, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7528, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7534, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7538, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7540, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7570, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7578, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7588, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA758C, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7594, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7598, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA75A0, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA75A8, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA75AC, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7604, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libanogs.so"), 0x7374DA7608, OBFUSCATE("h 63 00 6D 65 6D 63 70 79")).Modify();

MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0438, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0444, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0450, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0454, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0458, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B045C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0460, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0464, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0468, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B046C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0470, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0478, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0484, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0488, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B048C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0490, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B049C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04B0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04C0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04C4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04C8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04CC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04D0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04DC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B04FC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0500, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0504, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0508, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B050C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0514, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0518, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0520, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0538, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0540, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0548, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0560, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B056C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0584, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0590, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B05AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B09D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0A10, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0A14, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0A4C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0A50, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0A6C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0A98, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0A9C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0AA0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0AAC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0AB0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0AC4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0AF8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0B98, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0B9C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0BA8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0BC4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0BEC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0C3C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0CA4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0CB4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0CB8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0CE8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0DB0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0DB4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0DC0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0DD0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0DD4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0DE8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0E3C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B0E40, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73033B128C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91360, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91364, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9136C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91378, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9137C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91384, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9139C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F913A0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F913A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F913C0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F913DC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F913E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F913E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F913F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F913F4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91410, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91418, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91424, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91430, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9143C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91440, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9144C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91464, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9146C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91478, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91484, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91488, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9148C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F914D0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F914D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F914E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F914F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F914F4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F914F8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F914FC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91504, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91508, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9150C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91528, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91534, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91540, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9157C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915A0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915B4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915B8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915C8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915D0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F915F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91604, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91608, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91610, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91640, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91644, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91648, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9164C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91668, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91670, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91674, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F916A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F916AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F916CC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F916D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F916E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F916E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F916EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F916F8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91734, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91738, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9173C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91740, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91748, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9174C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91750, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91768, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9176C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91774, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91778, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9177C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91780, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91784, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91788, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F917A0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F917A4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F917A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F917AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F917D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91810, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91814, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9181C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91820, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91824, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91828, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9182C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91830, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91834, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9183C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91844, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91848, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91850, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91874, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91878, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F91888, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F9188C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F918AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F918B0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F918D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F918D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F918E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7373F918F4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380C80, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380C90, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380C94, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380C9C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380CB0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380CB4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380CC0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380CF4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380CF8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D00, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D14, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D18, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D2C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D30, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D38, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D4C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D50, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D64, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D68, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D70, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D84, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380D88, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380DB8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380DBC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380DCC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380DD0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380DEC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374380DFC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743810B4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743810B8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743810D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743810D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743810E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743810EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743810F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374381114, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374381118, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x737438111C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374381120, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374381168, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743811D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743811E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743811E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x737438122C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x737438123C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374381264, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x737438126C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x737438127C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743812C0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743812C4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7374381580, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x737438158C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743815A0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743815A4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743815B4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73743815B8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C02C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C044, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C048, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C04C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C058, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C05C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C068, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C06C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C074, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C07C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C08C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C094, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C0A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C0CC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C0D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C168, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C170, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90C178, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5CC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5D0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5F4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E5FC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E608, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E60C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73ED90E614, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73EDED7604, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73EDED7630, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73EDED7638, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x73EDF4BF24, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();


MemoryPatch::createWithHex("libtgpa.so",0x67BC8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67BBC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67BB0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67BAC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67BA8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67BA4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67BA0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B9C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B98,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B94,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B90,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B88,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B7C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B78,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B74,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B70,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B64,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B50,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B40,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B3C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B38,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B34,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B30,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B24,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B20,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B1C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B18,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B14,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B10,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B04,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67B00,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AFC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AF8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AF4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AEC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AE8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AE0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AC8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AC0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AB8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67AA0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67A94,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67A7C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67A70,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67A54,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67628,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x675F0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x675EC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x675B4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x675B0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67594,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67568,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67564,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67560,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67554,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67550,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x6753C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67508,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67468,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67464,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67458,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x6743C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67414,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x673C4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x6735C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x6734C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67348,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67318,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67250,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x6724C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67240,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67230,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x6722C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x67218,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x671C4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x671C0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x66D74,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2CA0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C9C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C94,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C88,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C84,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C7C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C64,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C60,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C58,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C40,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C24,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C20,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C1C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C10,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2C0C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2BF0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2BE8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2BDC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2BD0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2BC4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2BC0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2BB4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B9C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B94,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B88,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B7C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B78,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B74,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B30,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B28,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B18,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B10,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B0C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B08,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2B04,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2AFC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2AF8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2AF4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2AD8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2ACC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2AC0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A84,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A60,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A58,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A54,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A4C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A48,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A38,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A30,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A20,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A14,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2A10,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A29FC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A29F8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A29F0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A29C0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A29BC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A29B8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A29B4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2998,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2990,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A298C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2958,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2954,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2934,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A292C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A291C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2918,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2914,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2908,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A28CC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A28C8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A28C4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A28C0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A28B8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A28B4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A28B0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2898,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2894,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A288C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2888,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2884,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2880,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A287C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2878,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2860,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A285C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2858,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2854,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A282C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27F0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27EC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27E4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27E0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27DC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27D8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27D4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27D0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27CC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27C4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27BC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27B8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A27B0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A278C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2788,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2778,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2774,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2754,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2750,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A272C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A2728,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A271C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x4A270C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3380,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3370,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB336C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3364,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3350,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB334C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3340,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB330C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3308,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3300,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB32EC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB32E8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB32D4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB32D0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB32C8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB32B4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB32B0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB329C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3298,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3290,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB327C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3278,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3248,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3244,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3234,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3230,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3214,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB3204,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2F4C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2F48,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2F2C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2F28,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2F18,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2F14,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2F10,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2EEC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2EE8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2EE4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2EE0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2E98,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2E2C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2E20,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2E1C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2DD4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2DC4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2D9C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2D94,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2D84,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2D40,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2D3C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2A80,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2A74,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2A60,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2A5C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2A4C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0xB2A48,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3FD4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3FBC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3FB8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3FB4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3FA8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3FA4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F98,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F94,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F8C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F84,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F74,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F6C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F58,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F34,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3F28,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3E98,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3E90,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F3E88,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A34,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A30,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A2C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A20,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A1C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A18,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A14,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A10,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A0C,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F1A04,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F19F8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F19F4,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x8F19EC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x3289FC,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x3289D0,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x3289C8,"h 00 01 00 00").Modify();
MemoryPatch::createWithHex("libtgpa.so",0x2B40DC,"h 00 01 00 00").Modify();


MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2438, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2444, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2450, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2454, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2458, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x245C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2460, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2464, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2468, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x246C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2470, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2478, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2484, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2488, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x248C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2490, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x249C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24B0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24C0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24C4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24C8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24CC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24D0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24DC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24FC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2500, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2504, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2508, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x250C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2514, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2518, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2520, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2538, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2540, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2548, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2560, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x256C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2584, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2590, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x29D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2A10, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2A14, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2A4C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2A50, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2A6C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2A98, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2A9C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2AA0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2AAC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2AB0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2AC4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2AF8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2B98, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2B9C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2BA8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2BC4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2BEC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2C3C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2CA4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2CB4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2CB8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2CE8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2DB0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2DB4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2DC0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2DD0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2DD4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2DE8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2E3C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2E40, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x328C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2360, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2364, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x236C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2378, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x237C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2384, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x239C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x23A0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x23A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x23C0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x23DC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x23E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x23E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x23F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x23F4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2410, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2418, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2424, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2430, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x243C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2440, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x244C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2464, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x246C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2478, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2484, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2488, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x248C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24D0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24F4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24F8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x24FC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2504, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2508, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x250C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2528, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2534, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2540, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x257C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25A0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25B4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25B8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25C8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25D0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2604, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2608, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2610, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2640, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2644, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2648, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x264C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2668, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2670, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2674, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x26A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x26AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x26CC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x26D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x26E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x26E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x26EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x26F8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2734, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2738, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x273C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2740, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2748, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x274C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2750, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2768, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x276C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2774, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2778, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x277C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2780, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2784, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2788, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x27A0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x27A4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x27A8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x27AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x27D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2810, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2814, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x281C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2820, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2824, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2828, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x282C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2830, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2834, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x283C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2844, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2848, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2850, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2874, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2878, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2888, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x288C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x28AC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x28B0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x28D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x28D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x28E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x28F4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1C80, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1C90, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1C94, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1C9C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1CB0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1CB4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1CC0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1CF4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1CF8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D00, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D14, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D18, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D2C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D30, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D38, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D4C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D50, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D64, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D68, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D70, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D84, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1D88, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1DB8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1DBC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1DCC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1DD0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1DEC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F1DFC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F20B4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F20B8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F20D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F20D8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F20E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F20EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F20F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F2114, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F2118, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F211C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F2120, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F2168, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F21D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F21E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F21E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F222C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F223C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F2264, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F226C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F227C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F22C0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F22C4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F2580, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F258C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F25A0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F25A4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F25B4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x3F25B8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x44, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x48, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x4C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x58, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x5C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x68, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x6C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x74, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x7C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x8C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x94, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0xA8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0xCC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0xD8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x168, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x170, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x178, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25CC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25D0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25D4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25E0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25E4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25E8, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25EC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25F0, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25F4, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x25FC, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2608, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x260C, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x2614, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x5CB604, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x5CB630, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x5CB638, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libtgpa.so"), 0x63FF24, OBFUSCATE("h 33 36 36 33 61 74 61 64")).Modify();
}


if (全局离线){
写入D类(anort + 0X423B38, 328671808);//--XQ
} else {
写入D类(anort + 0X423B38, 841800666);//--XQ

}

    auto Actors = getActors();
    //UCanvas *Canvas = draw->Canvas;

    int totalEnemies = 0, totalBots = 0;

    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localController = 0;
    ASTExtraPlayerController *localPlayerController = 0;
    
    
    if (无敌jh) {  //伯爵官方授权注入
            draw->AddText({((float) density / 10.0f), 70}, IM_COL32(0, 255, 0, 255), "注入防封[已连接]ZR为你保驾护航 ");
            }else{
            draw->AddText({((float) density / 10.0f), 70}, IM_COL32(255, 0, 0, 255), "注入内部 [断连中] 请务必开启");
        }
 
 /*
 draw->AddText(NULL, 20,{glWidth / 2 - 500, glHeight / 2 - 330},ImColor(255, 255, 255, 255),"wind ");
  draw->AddText(NULL, 20,{glWidth / 2 - 500, glHeight / 2 - 300},ImColor(255, 255, 255, 255),"telegram @T_MOD ");
 std::string sFPS = "FPS:";
sFPS += std::to_string(int(ImGui::GetIO().Framerate));
 draw->AddText(NULL, 20,{glWidth / 2 - 500, glHeight / 2 - 270}, ImColor(255, 255, 255, 255),sFPS.c_str());
 */
/* std::string 内核 = "内核版本: ";
    内核 += GetDeviceKernel();
        draw->AddText({ ((float) density / 50), 570}, IM_COL32(255, 255, 255, 255), 内核.c_str());*/
    
    /* std::string sFPS = "\n\n\n\n吉良Aimbot telegram @IOS_JL \n\nFPS:";
		sFPS += std::to_string(fps.get());
        draw->AddText({((float)density / 10.0f), 40}, IM_COL32(255, 255, 255, 255), sFPS.c_str());*/
    
   // ImGui::Text("FPS: %.2f", ImGui::GetIO().Framerate);
if (Config.AimBot.FovAdd) {
    draw->AddCircle({(float) glWidth / 2, (float) glHeight / 2},Config.AimBot.FovEdit, ToColor(Config.ColorsESP.Fov), 0, Config.Fov);
                        }
	

switch (追踪函数) {
            case 1:
            追踪函数1 = true;
            追踪函数2 = false;
            break;
            case 2:
            追踪函数1 = true;
            追踪函数2 = false;
          
            break;
            }
//draw->AddText(NULL, ((float) density / 12.0f),{(float) glWidth / 200 + glWidth / 40,610}, IM_COL32(255, 255, 0, 25),(""));
	
	
	
    static float isAutoSlider = -0.20; //Where the text will first start on the screens width.

      ImGui::GetForegroundDrawList()->AddText(NULL, ((float) density / 20.0f),{(float) glWidth * isAutoSlider + glWidth / 40,690}, ImColor(255, 248, 0, 255), " ");


    if(isAutoSlider)
    {

        auto isFramese = ImGui::GetFrameCount();

        if(isFramese % 30 == 0) //We use modulus to check if it's divisible by 30, and if the remainder equals 0, then we continue. Our text gets called every 30 frames.
        {

            if(isAutoSlider > 1) //1 = The max screen width.
            {
                isAutoSlider = -0.20; //We use -0.20, because that makes the intro of the text look "seamless".
            }

            isAutoSlider += 0.01; //How much we move the text per 30 frames. By altering this, and the amount of frames, you can make this quite smooth.By @DDD_MOD

        }

    }
    for (int i = 0; i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
            continue;

        if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
            localController = (ASTExtraPlayerController *) Actor;
            break;
        }
    }

    if (localController) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
                    localPlayer = (ASTExtraPlayerCharacter *) Actor;
                    break;
                }
            }
        }

        if (localPlayer) {
            if (localPlayer->PartHitComponent) {
                auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                    ConfigCollisionDistSqAngles[j].Angle = 90.0f;
                }
                localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
            }
            
            


if (Config.AimBot.Enabl) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                        if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                            if (CurrentWeaponReplicated) {
                                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                if (ShootWeaponComponent) {
                                    int shoot_event_idx = 165;
                                    auto VTable = (void **) ShootWeaponComponent->VTable;
                                    // CHANGE22222 add lambda function f_mprotect
                                    auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
                                      static_assert(PAGE_SIZE == 4096);
                                      constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
                                      void* start = reinterpret_cast<void*>(addr & -page_size);
                                      uintptr_t end = (addr + len + page_size - 1) & -page_size;
                                      return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
                                    };
                                    if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
                                        orig_shoot_event = decltype(orig_shoot_event)(
                                                VTable[shoot_event_idx]);
                                        // CHANGE22222 add call of f_mprotect
                                        f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
                                        VTable[shoot_event_idx] = (void *) shoot_event;
                                    }
                                }
                            }
                        }
                    }
                }



                        
            
            
            //自动开枪
            	if (Config.ESPMenu.AutoFire) {
  if (GetTargetByCrossDist()) {
    localController->bIsPressingFireBtn = true;
  } else {
   
    qwcifqvs86y8fify = false;
  }
}

   if (Config.AimBot.Enabl){
         ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
         
                    long PlayerAimLineColor = IM_COL32(0, 255, 0, 255);
                    
                    
                    

                    if (Target) {
                        FVector HEAD = Target->GetBonePos("Head", {});
                        
                        ImVec2 HeadPosSC;
                        if (W2S(HEAD, (FVector2D *)&HeadPosSC)) {
                    
                           
                          draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, HeadPosSC,
                                              IM_COL32(0, 0, 255, 255), 2.5f);
                            
                        }
                  
       }
     }  
            
             if (Config.AimBot.Enable){
         ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
         
                    long PlayerAimLineColor = IM_COL32(0, 255, 0, 255);
                    
                    
                    

                    if (Target) {
                        FVector HEAD = Target->GetBonePos("Head", {});
                        
                        ImVec2 HeadPosSC;
                        if (W2S(HEAD, (FVector2D *)&HeadPosSC)) {
                    
                           
                          draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, HeadPosSC,
                                              IM_COL32(0, 0, 255, 255), 2.5f);
                            
                        }
                  
       }
     }  
     
   /*  if (Eaimbot) {
                    
                
                    ASTExtraPlayerCharacter *Target = 自瞄360度();
                    
                  
                    long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
                    
                    
                    

                    if (Target) {
                        FVector HEAD = Target->GetBonePos("Head", {});
                        
                        ImVec2 headPosSC;
                        if (W2S(HEAD, (FVector2D *)&headPosSC)) {
                    
                           
                          draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, headPosSC,
                                              PlayerAimLineColor, 1.0f);
                            
                        }
                        
                        float AimDis= localPlayer->GetDistanceTo(Target) / 100.f;
                        
                        if(AimDis <= 50.0f){
                            AimYQ = Aim50;
                        }
                        if(AimDis > 50.0f && AimDis <= 100.0f){
                            AimYQ = Aim100;
                        }
                        if(AimDis > 100.0f && AimDis <= 150.0f){
                            AimYQ = Aim150;
                        }
                        if(AimDis > 150.0f && AimDis <= 200.0f){
                            AimYQ = Aim200;
                        }
                        if(AimDis > 200.0f && AimDis <= 250.0f){
                            AimYQ = Aim250;
                        }
                        if(AimDis > 250.0f && AimDis <= 300.0f){
                            AimYQ = Aim300;
                        }
                       
                     
                        bool triggerOk = false;
                        if (Config.AimBot.Trigger != EAimTrigger::None) {
                            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                                triggerOk = localPlayer->bIsWeaponFiring;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                                triggerOk = localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                                triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                                triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
                            }
                        } else triggerOk = true;
                        if (triggerOk) {
                              /*
                       其余次序:  
                         1      2     3      4
                         头    盆骨   左手   右手
                         左脚  右脚   
                          5     6
                         7     8       9    10
                       左上臂 左小臂  左大腿 左小腿 
                       右上臂 右小臂  右大腿 右小腿 
                         11    12     13    14
                        */
                 /*     FVector targetAimPos;
                      if(Config.AimBot.Amode == Aimmode::Mdp){
                        if(Corepriority == 1)
                        {
                             targetAimPos = Target->GetBonePos("Head", {});
                        }else if(Corepriority == 2){
                             targetAimPos = Target->GetBonePos("pelvis", {});
                        }else if(Corepriority == 3){
                             targetAimPos = Target->GetBonePos("hand_l", {});
                        }else if(Corepriority == 4){
                             targetAimPos = Target->GetBonePos("hand_r", {});
                        }else if(Corepriority == 5){
                             targetAimPos = Target->GetBonePos("foot_l", {});
                        }else if(Corepriority == 6){
                             targetAimPos = Target->GetBonePos("foot_r", {});
                        }else if(Corepriority == 7){
                             targetAimPos = Target->GetBonePos("upper_l", {});
                        }else if(Corepriority == 8){
                             targetAimPos = Target->GetBonePos("lowerarm_r", {});
                        }else if(Corepriority == 9){
                             targetAimPos = Target->GetBonePos("thigh_l", {});
                        }else if(Corepriority == 10){
                             targetAimPos = Target->GetBonePos("calf_l", {});
                        }else if(Corepriority == 11){
                             targetAimPos = Target->GetBonePos("upper_r", {});
                        }else if(Corepriority == 12){
                             targetAimPos = Target->GetBonePos("lowerarm_r", {});
                        }else if(Corepriority == 13){
                             targetAimPos = Target->GetBonePos("thigh_r", {});
                        }else if(Corepriority == 14){
                             targetAimPos = Target->GetBonePos("calf_r", {});
                        }
                     }else{
                          targetAimPos = Target->GetBonePos("Head", {});
                          if (Config.AimBot.Target == EAimTarget::Chest) {
                                targetAimPos.Z -= 25.0f;
                        }

                     }
                        
                           
                           targetAimPos.Z -= AimYQ;
                           Corepriority = 0;   
                          
              
                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                            if (WeaponManagerComponent) {
                                auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                if ((int) propSlot.GetValue() >= 1 &&
                                    (int) propSlot.GetValue() <= 3) {
                                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                    if (CurrentWeaponReplicated) {
                                        auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                        if (ShootWeaponComponent) {
                                            UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                            if (ShootWeaponEntityComponent) {
                                                ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                                if (CurrentVehicle) {
                                                    FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    LinearVelocity, timeToTravel));
                                                } else {
                                                    FVector Velocity = Target->GetVelocity();

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    Velocity, timeToTravel));
                                                }
                                                localController->SetControlRotation(ToRotator(
                                                        localController->PlayerCameraManager->CameraCache.POV.Location,
                                                        targetAimPos), "");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  
                }
            */
               if (Config.AimBot.子追2) {
                                                    
         ASTExtraPlayerCharacter *Target = 自瞄360度();
        long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
        
        if (Target) {
        FVector HEAD = Target->GetBonePos("Head", {});
        ImVec2 headPosSC;
                        if (W2S(HEAD, (FVector2D *)&headPosSC)) {
                    
                           ImDrawList *draw = ImGui::GetBackgroundDrawList();
                          draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, headPosSC,
                                              PlayerAimLineColor, 1.0f);
                            
                        }
                        }
                    if (Target) {
                        bool triggerOk = false;
                        if (Config.AimBot.Trigger != EAimTrigger::None) {
                            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                                triggerOk = localPlayer->bIsWeaponFiring;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                                triggerOk = localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                                triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                                triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
                            }
                        } else triggerOk = true;
                        if (triggerOk) {
                            FVector targetAimPos = Target->GetBonePos("Head", {});
                            if (Config.AimBot.Target == EAimTarget::Chest) {
                                targetAimPos.Z -= 25.0f;
                            }

                            auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
                                        if (WeaponManagerComponent) {
                                            auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                            if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3) {
                                                auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
                                                if (CurrentWeaponReplicated) {
                                                    auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                                    if (ShootWeaponComponent) {
                                                        UShootWeaponEntity * ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                                        if (ShootWeaponEntityComponent) {
                                                    
                                                            ASTExtraVehicleBase * CurrentVehicle = Target->CurrentVehicle;
                                                            if (CurrentVehicle) {
                                                                FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
                                                                float dist = g_LocalPlayer->GetDistanceTo(Target);
                                                                auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
                                                                targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                                            } else {
                                                                FVector Velocity = Target->GetVelocity();
                                                                float dist = g_LocalPlayer->GetDistanceTo(Target);
                                                                auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
                                                                targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                                                            }
                                                            
                                                            if (g_LocalPlayer->bIsGunADS) {
                                                        if (g_LocalPlayer->bIsWeaponFiring) {
                                                            float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                                            
                                                        }  
                                                    }
                                                                                                        if (g_LocalController) {
                                            auto PlayerCameraManage = g_LocalController->PlayerCameraManager;
                                            if (PlayerCameraManage) {                                                                                                                                          
                                                FVector currViewAngle = PlayerCameraManage->CameraCache.POV.Location;                                                
                                                auto aimRotation = ToRotator(currViewAngle, targetAimPos);  
                                                g_LocalController->PlayerCameraManager->CameraCache.POV.Rotation = aimRotation;          
                                               }
                                               }
                                               }
                                                }
                                                }
                                                }
                                                }
                                                }
                                                }
                                                }
#include "吉良/自瞄.cpp"
                
                
                if (Config.AimBot.Enable) {
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.AimBot.Cross*0.5f, ToColor(Config.ColorsESP.Fov), 100, 0.0f);
                   }
                   
                                    /*  // if (Tmode) {
                        bool triggerOk = false;
                        if (Config.SilentAim.Timmode != Timmode::Md) {
                            if (Config.SilentAim.Timmode == Timmode::Fixe) {
                               // triggerOk = localPlayer->bIsWeaponFiring;
                            } 
                            }
                            */
                         
                   
                      /*  if (Config.AimBot.Cross) {
               draw->AddRect({(screenWidth/3.0f)-(Config.AimBot.Cross/1.0f), (screenHeight/3.0f)-(Config.AimBot.Cross/1.0f)}, {(screenWidth/3.0f)+(Config.AimBot.Cross/1.0f), (screenHeight/3.0f)+(Config.AimBot.Cross/1.0f)}, ToColor(Config.ColorsESP.Fov),100, 0.0f);
                }*/
                #include "吉良/绘图.cpp"
                
                


 
                }
            }
               if(Config.无限子弹){
                                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                                    if (WeaponManagerComponent) {
                                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                        if (CurrentWeaponReplicated) {
                                                CurrentWeaponReplicated->CurBulletNumInClip = 9999;
                                           CurrentWeaponReplicated->CurBulletNumInBarrel  = 9999;
                                                 CurrentWeaponReplicated->CurMaxBulletNumInOneClip = 9999;
                                                 CurrentWeaponReplicated->ClientShootTimes = 0;

                                          }
                                           auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                                    if (ShootWeaponComponent) {
                                                        UShootWeaponEntity * ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                                        if (ShootWeaponEntityComponent) {
                                                      ShootWeaponEntityComponent->MaxBulletNumInOneClip = 9999;
                                                          //  ShootWeaponEntityComponent->ExtraBulletNumInOneClip = 9999;
                       
                                    ShootWeaponEntityComponent-> MaxBulletNumInBarrel = 9999;
                                                            ShootWeaponEntityComponent->ExtendMaxBulletNumInOneClip = 9999;
//发布频道@ANKDYa
     
           
                                                ShootWeaponEntityComponent->BulletFireSpeed = 999999999;
                                          
                                          }
                                          }
                                         }
                                        }
                                        
                                        if (加速){
                   				UCharacterMovementComponent *CharacterMovement = g_LocalPlayer->CharacterMovement;
                   				if (CharacterMovement){
                       			CharacterMovement->MaxWalkSpeed = 90000.0f;
                   				}}

                   
                                        
                                        
             g_LocalController = localController;
        g_LocalPlayer = localPlayer;
                          
//    int TotalCount = totalEnemies;

ImGui::GetForegroundDrawList()->/*@gi_1a*/AddRectFilled/*@gi_1a*/({glWidth /2-80,40},{glWidth /2-20,80},IM_COL32(255, 0, 0, 70),17.5f);
    ImGui::GetForegroundDrawList()->/*@gi_1a*/AddRectFilled/*@gi_1a*/({glWidth /2+15.f,40},{glWidth /2+75.f,80},ImColor(0, 0, 255, 60),17.5f);   
       
ImGui::GetForegroundDrawList()->/*@gi_1a*/AddRect/*@gi_1a*/({glWidth /2-80,40},{glWidth /2-20,80},IM_COL32(255, 0, 0, 255), 16.0f, 0,2.0f);
    ImGui::GetForegroundDrawList()->/*@gi_1a*/AddRect({glWidth /2+15.5f,39.5},{glWidth /2+75.5f,80.5}, ImColor(0, 0, 255, 255), 16.0f, 0,2.0f);

    sprintf(extras, "%d", totalEnemies);
    ImGui::GetForegroundDrawList()->AddText({glWidth /2-55,45},IM_COL32(255, 255, 255, 255),extras);
    sprintf(extras, "%d", totalBots);
    ImGui::GetForegroundDrawList()->AddText({glWidth /2+35,45},IM_COL32(255, 255, 255, 255),extras);
    }

//fps.update();
	//	}
		 




    


		    



        


	
		  void loadConfig()
{
    int fd = open("/data/data/com.tencent.ig/files/hunter.ini", O_RDONLY);
    
        read(fd, &Config.ESPMenu, sizeof(Config.ESPMenu));   
		read(fd, &Config.SilentAim, sizeof(Config.SilentAim));   
        read(fd, &s, sizeof(s));
        
        
        close(fd);
    
    
}
void DeleteConfig()
{

    int fd = remove("/data/data/com.tencent.ig/files/hunter.ini");
    close(fd);
}

void saveConfig()
{
    
    int fd = open("/data/data/com.tencent.ig/files/hunter.ini", O_WRONLY | O_CREAT);
    system("chmod 777 /data/data/com.tencent.ig/files/hunter.ini");
    write(fd, &Config.ESPMenu , sizeof(Config.ESPMenu));
	write(fd, &Config.SilentAim , sizeof(Config.SilentAim));
	write(fd, &s, sizeof(s));
    
    
    close(fd);
}

void loadCFG(){
    loadConfig();

}
void removeCFG(){
    DeleteConfig();

}
void saveCFG(){
    saveConfig();
}
	
	
	
std::string getClipboardText() {
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    {
        auto ContextClass = env->FindClass("android/content/Context");
        auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

        auto str = env->NewStringUTF("clipboard");
        auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
        env->DeleteLocalRef(str);

        auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
        auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

        auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
        auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

        auto text = env->CallObjectMethod(clipboardManager, getText);
        if (text) {
            str = (jstring) env->CallObjectMethod(text, toStringMethod);
            result = env->GetStringUTFChars(str, 0);
            env->DeleteLocalRef(str);
            env->DeleteLocalRef(text);
        }

        env->DeleteLocalRef(CharSequenceClass);
        env->DeleteLocalRef(ClipboardManagerClass);
        env->DeleteLocalRef(clipboardManager);
        env->DeleteLocalRef(ContextClass);
    }
    vm->DetachCurrentThread();

    return result;
}

const char *GetAndroidID(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
    jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

    auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
    jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

    auto len = strlen(uuid);

    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
    jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

struct MemoryStruct {
    char *memory;
    size_t size;
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *) userp;

    mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
    if (mem->memory == NULL) {
        return 0;
    }

    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}

 
std::string Login(const char *user_key) {//独家东西，请勿外传
    if (!g_App)
        return "Internal Error";
        
    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);

    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);

    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());
//拆你软件包的时候看不到你的链接
    vm->DetachCurrentThread();

    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();

     if (curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());

        std::string api_key = OBFUSCATE("http://hxmb.99778.icu/connect");

        curl_easy_setopt(curl, CURLOPT_URL, (api_key.c_str()));
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
            struct curl_slist *headers = NULL;
            headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
//加入频道 @Fascismod
        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    
               //     expiredDate = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*exdate*/ StrEnc("=So_ D", "\x58\x2B\x0B\x3E\x54\x21", 6).c_str()].get<std::string>();
                     if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{", "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E", 32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);
     
                        g_Token = token;
                        g_Auth = outputAuth;        
bValid = g_Token == g_Auth;
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);

    return bValid ? "OK" : errMsg;
}



#define V2 ImVec2
#include <vector>
int N = 300;
auto v = [] {
 std::vector<std::pair<V2,V2>>r(N);
 for (auto&p:r)
  p.second = p.first = V2(rand() % 320, rand() % 180);
 return r;
}();
float l2 (V2 x) { return x.x*x.x + x.y*x.y; }
void FX(ImDrawList* d,V2 a,V2 b,V2 s,ImVec4,float t)
{
 float D, T;
 for (auto&p:v) {
  D = sqrt(l2(p.first - p.second));
  if (D > 0) p.first += (p.second - p.first) / D;
  if (D < 4) p.second = V2(rand() % 320, rand() % 180);
 }
 for (int i = 0; i < N; i++) {
  for (int j = i+1; j < N; j++) {
   D = l2(v[i].first - v[j].first);
   T = l2((v[i].first + v[j].first) - s) / 200;
   if (T > 255) T = 255;
   if (D < 400) d->AddLine(a+v[i].first, a+v[j].first, IM_COL32(T, 255-T, 255, 70), 2);
  }
 }
}



#define IM_CLAMP(V, MN, MX)     ((V) < (MN) ? (MN) : (V) > (MX) ? (MX) : (V))
namespace Settings
{
    static int Tab = 1;
}













EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);

EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
  if (glWidth <= 0 || glHeight <= 0)
        return orig_eglSwapBuffers(dpy, surface);

    if (!g_App)
        return orig_eglSwapBuffers(dpy, surface);

    screenWidth = ANativeWindow_getWidth(g_App->window);
    screenHeight = ANativeWindow_getHeight(g_App->window);
    density = AConfiguration_getDensity(g_App->config);
if (!initImGui) {
        ImGui::CreateContext();
        ImGui::StyleColorsLight();
        
        

        ImGuiStyle &style = ImGui::GetStyle();
        style.WindowRounding = 10.0f;
        style.FrameRounding = 10.0f;
        style.ScrollbarRounding = 10.0f;
        style.GrabRounding = 10.0f;
        style.ScrollbarSize = 20.0f;

        style.WindowTitleAlign = ImVec2(0.5, 0.5);
          //style.WindowMinSize = ImVec2(600, 150);

        style.FramePadding = ImVec2(8, 6);

        ImGui::SetNextWindowBgAlpha(0.7);

        style.WindowTitleAlign = ImVec2(0.5, 0.5);

   /*     style.Colors[ImGuiCol_TitleBg] = ImColor(255, 101, 53, 255);//255  101  53  255
        style.Colors[ImGuiCol_TitleBgActive] = ImColor(255, 101, 53, 255);
        style.Colors[ImGuiCol_TitleBgCollapsed] = ImColor(255, 101, 53, 100);
        style.Colors[ImGuiCol_Text] = ImColor(1.0f, 1.0f, 1.0f, 1.0f);

        style.Colors[ImGuiCol_WindowBg] = ImVec4(0.09f, 0.09f, 0.15f, 1.00f);
        style.Colors[ImGuiCol_CheckMark] = ImVec4(0.90f, 0.90f, 0.90f, 0.83f);

        style.Colors[ImGuiCol_Button] = ImColor(255, 30, 31, 255);
        style.Colors[ImGuiCol_ButtonActive] = ImColor(31, 30, 31, 255);
        style.Colors[ImGuiCol_ButtonHovered] = ImColor(41, 40, 41, 255);


        style.Colors[ImGuiCol_Separator] = ImColor(255, 70, 70, 255);
        style.Colors[ImGuiCol_SeparatorActive] = ImColor(76, 76, 76, 255);
        style.Colors[ImGuiCol_SeparatorHovered] = ImColor(76, 76, 76, 255);

        style.Colors[ImGuiCol_FrameBg] = ImColor(37, 36, 37, 255);
        style.Colors[ImGuiCol_FrameBgActive] = ImColor(37, 36, 37, 255);
        style.Colors[ImGuiCol_FrameBgHovered] = ImColor(37, 36, 37, 255);

        style.Colors[ImGuiCol_Header] = ImColor(255, 0, 0, 133);
        style.Colors[ImGuiCol_HeaderActive] = ImColor(255, 0, 0, 0);
        style.Colors[ImGuiCol_HeaderHovered] = ImColor(46, 46, 46, 255);*/


        ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");
        
        ImGuiIO& io = ImGui::GetIO();
        
       // ImGuiIO& io = ImGui::GetIO();



        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;

        static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
        ImFontConfig icons_config;

        ImFontConfig CustomFont;
        CustomFont.FontDataOwnedByAtlas = false;

        icons_config.MergeMode = true;
        icons_config.PixelSnapH = true;
        icons_config.OversampleH = 2.5;
        icons_config.OversampleV = 2.5;
        //io.MouseDrawCursor = true;
        //菜单字体 = io.Fonts->AddFontFromMemoryTTF((void *) 菜单字体_data, 菜单字体_size, 28.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
        io.Fonts->AddFontFromMemoryTTF((void *)nmsl_data, nmsl_size, 20.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
       // io.Fonts->AddFontFromMemoryTTF((void *)日本_data, 日本_size, 20.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
//basic = io.Fonts->AddFontFromMemoryTTF((void *)Custom, sizeof(Custom), 23.f, &CustomFont);
//bold = io.Fonts->AddFontFromMemoryTTF((void*)Custom1, sizeof(Custom1), 55.0f, &CustomFont);
//io.Fonts->AddFontFromMemoryTTF((void *)nmsl_data, nmsl_size, 18.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
     /*   io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 21.f, &CustomFont);*/
  /*      io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 19.0f, &icons_config, icons_ranges);*/
//io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom_11), sizeof(Custom_11), 30.f, NULL, io.Fonts->GetGlyphRangesVietnamese());

        ImFontConfig cfg;
        cfg.SizePixels = ((float) density / 25.0f);
Snowflake::CreateSnowFlakes(Snow, SNOW_LIMIT, 5.f/*minimum size*/, 25.f/*maximum size*/, 0/*imgui window x position*/, 0/*imgui window y position*/, glWidth, glHeight, Snowflake::vec3(0.f, 0.005f)/*gravity*/, IM_COL32(99, 124, 146, 50)/*color*/);
		  
        memset(&Config, 0, sizeof(sConfig));


// ===============================ESPCOLOR ================================== //

// =====================================================================

        
        
        
        Config.ColorsESP.Text = CREATE_COLOR(255, 255, 255, 255);
		Config.ColorsESP.Menucolour = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Menucolour = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
	    Config.ColorsESP.Linebot = CREATE_COLOR(255, 255, 255, 255);
	    Config.ColorsESP.Skeletonbot = CREATE_COLOR(255, 255, 255, 255);
	    Config.ColorsESP.Boxbot = CREATE_COLOR(255, 255, 255, 200);
        Config.ColorsESP.Box = CREATE_COLOR(255, 0, 0, 200);
        Config.ColorsESP.Name = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Distance = CREATE_COLOR(255, 0, 255, 255);
        Config.ColorsESP.Skeleton = CREATE_COLOR(255, 0, 0, 200);
        Config.ColorsESP.Vehicle = CREATE_COLOR(255, 255, 000, 200);
        Config.ColorsESP.Count = CREATE_COLOR(255, 0, 0, 255);
	    Config.ColorsESP.Fov =  CREATE_COLOR(255, 255, 255, 180);
        Config.AimBot.Cross  = 00.00f;


             initImGui = true;
        
        for (auto &i : items_data) {
            for (auto &item : i["Items"]) {
                int r, g, b;
                sscanf(item["itemTextColor"].get<std::string>().c_str(), "#%02X%02X%02X", &r, &g, &b);
                ItemColors[item["itemId"].get<int>()] = CREATE_COLOR(r, g, b, 255);
            }
        }
        initImGui = true;
    }

        ImGuiIO &io = ImGui::GetIO();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
        ImGui::NewFrame();
       // Menu1();


       
DrawESP(ImGui::GetBackgroundDrawList(), /* NRG */glWidth, glHeight);
ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.55f, (float) glHeight * 0.68f),ImGuiCond_Once); // 45% width 70% height
   bool showsta = true;
              //  if(showsta) Showstate(&showsta);
                if(down) Down(&down);
           
    

            static bool isLogin = true;
//登陆页面

                if (!isLogin) {
            ImGui::Text("Please Login! (Copy Key to Clipboard)");

            ImGui::PushItemWidth(-1);
            static char s[64];
            ImGui::InputText("##key", s, sizeof s);
            ImGui::PopItemWidth();
          
            if (ImGui::Button(ICON_FA_KEY"Paste Key", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s);
            }
 
              static std::string err;
            if (ImGui::Button(ICON_FA_USER"Login", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                err = Login(s);
                if (err == "OK") {
                    isLogin = bValid && g_Auth == g_Token;
                }
            }

            if (!err.empty() && err != "OK") {
                ImGui::Text("Error: %s", err.c_str());
            }
        } else {
			
		/*	bool wcnm = true;
			bool 原神 = true;
			bool 小年爱被操 = true;
			bool 低调点死人 = true;
			bool 南通 = true;
			bool 飞机哥 = true;
            		*/
            
//
//FX(draw_list, a, b, ss, color, t);
//ImGui::PushFont(菜单字体);
	#include "吉良/菜单3.cpp"
	
    
    
           
                         }
    ImGui::End();
    ImGui::Render();

        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        return orig_eglSwapBuffers(dpy, surface);
    }

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    if (initImGui) {
        ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
    }
    return orig_onInputEvent(app, inputEvent);
}
   [[noreturn]] void *bypass_thread(void *) {
           while (true) {
               auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();



               auto localPlayer = g_LocalPlayer;
               auto localController = g_LocalController;
               if (localPlayer && localController) {
               

               
                           if (Config.HighRisk.Recoil || Config.HighRisk.HitEffect) {
                    auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                if (Config.HighRisk.Recoil) {
                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;

                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }


                                if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->ExtraHitPerformScale = X特效;
                                }
                                
			               }
			            }
			         }
			      }

		
}








        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
    return 0;
}






#define SLEEP_TIME 1000LL / 60LL
[[noreturn]] void *maps_thread(void *) {
    while (true) {
   auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
   
   
   
               std::vector<sRegion> tmp;
            char line[512];
            FILE *f = fopen("/proc/self/maps", "r");;
            if (f) {
                while (fgets(line, sizeof line, f)) {
                    uintptr_t start, end;
                    char tmpProt[16];
                    if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {
                        if (tmpProt[0] != 'r') {
                            tmp.push_back({start, end});
                        }
                    }
                }
                fclose(f);
            }
            trapRegions = tmp;
        auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
   if (isObjectInvalid(Object))
                continue;
            
            
                
          /*  if (Config.HighRisk.NoSmoke) {
   
        auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;

         if (Object->IsA(UParticleEmitter::StaticClass())) {
              auto playerChar = (UParticleEmitter *) Object;      
              playerChar->EmitterRenderMode = EEmitterRenderMode::ERM_None;
     playerChar->DetailMode = EDetailMode::DM_MAX;
	 
          }     
		}
     }
                
            
if (Config.HighRisk.NoFog) {
                if (Object->IsA(UExponentialHeightFogComponent::StaticClass())) {
                    auto playerChar = (UExponentialHeightFogComponent *) Object;
                    playerChar->SetFogMaxOpacity(0.0f);
                    playerChar->SetFogDensity(0.0f);
                    playerChar->SetFogHeightFalloff(0.0f);
                    playerChar->SetFogCutoffDistance(0.0f);
                    playerChar->SetStartDistance(0.0f);
                }}
                if (isObjectInvalid(Object))
                continue;*/
/*if (FlashSdk3) {
auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
   if (isObjectInvalid(Object))
                continue;

                if (Object->IsA(ASTExtraBaseCharacter::StaticClass())) {
                    auto playerChar = (ASTExtraBaseCharacter *) Object;
                    playerChar->CharacterOverrideAttrs.GameModeOverride_SpeedScaleModifier = 2;

                    }
                    }
*/
/*if (Config.HighRisk.NoFog) {
                if (Object->IsA(UExponentialHeightFogComponent::StaticClass())) {
                    auto playerChar = (UExponentialHeightFogComponent *) Object;
                    playerChar->SetFogMaxOpacity(0.0f);
                    playerChar->SetFogDensity(0.0f);
                    playerChar->SetFogHeightFalloff(0.0f);
                    playerChar->SetFogCutoffDistance(0.0f);
                    playerChar->SetStartDistance(0.0f);
                    
                    
                }}*/
          if (WideView) {
                if (Object->IsA(ULocalPlayer::StaticClass())) {
                    auto playerChar = (ULocalPlayer *) Object;
                    playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
                }}else
            if (Object->IsA(ULocalPlayer::StaticClass())) {
                auto playerChar = (ULocalPlayer *) Object;
                playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
            }
             
                
                   
                      
                            if (三十) {
auto objs = UObject::GetGlobalObjects();
for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);
if (isObjectInvalid(Object))
continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto playerChar = (USTExtraGameInstance *) Object;      
                playerChar->UserDetailSetting.PUBGDeviceFPSDef = 30;   
                playerChar->UserDetailSetting.PUBGDeviceFPSLow = 30;
                playerChar->UserDetailSetting.PUBGDeviceFPSMid = 30;
                playerChar->UserDetailSetting.PUBGDeviceFPSHigh = 30;
                playerChar->UserDetailSetting.PUBGDeviceFPSHDR = 30;
                playerChar->UserDetailSetting.PUBGDeviceFPSUltralHigh = 30;
}
}

}





            
if (六十) {
auto objs = UObject::GetGlobalObjects();
for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);
if (isObjectInvalid(Object))
continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto playerChar = (USTExtraGameInstance *) Object;      
                playerChar->UserDetailSetting.PUBGDeviceFPSDef = 60;   
                playerChar->UserDetailSetting.PUBGDeviceFPSLow = 60;
                playerChar->UserDetailSetting.PUBGDeviceFPSMid = 60;
                playerChar->UserDetailSetting.PUBGDeviceFPSHigh = 60;
                playerChar->UserDetailSetting.PUBGDeviceFPSHDR = 60;
                playerChar->UserDetailSetting.PUBGDeviceFPSUltralHigh = 60;
}
}

}

if (九十) {
auto objs = UObject::GetGlobalObjects();
for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);
if (isObjectInvalid(Object))
continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto playerChar = (USTExtraGameInstance *) Object;      
                playerChar->UserDetailSetting.PUBGDeviceFPSDef = 90;   
                playerChar->UserDetailSetting.PUBGDeviceFPSLow = 90;
                playerChar->UserDetailSetting.PUBGDeviceFPSMid = 90;
                playerChar->UserDetailSetting.PUBGDeviceFPSHigh = 90;
                playerChar->UserDetailSetting.PUBGDeviceFPSHDR = 90;
                playerChar->UserDetailSetting.PUBGDeviceFPSUltralHigh = 90;
}
}

}
                

/*
if (高跳) {
if (Object->IsA(UPhysicsSettings::StaticClass())) {
auto playerChar = (UPhysicsSettings *) Object;
playerChar->DefaultGravityZ=900.00f;
}
}*/

if (除雾) {
if (Object->IsA(UExponentialHeightFogComponent::StaticClass())) {
auto playerChar = (UExponentialHeightFogComponent *) Object;
playerChar->SetFogMaxOpacity(0.0f);
playerChar->SetFogDensity(0.0f);
playerChar->SetFogHeightFalloff(0.0f);
playerChar->SetFogCutoffDistance(0.0f);
playerChar->SetStartDistance(0.0f);
}
}
 if (广角){
                                g_LocalPlayer->ThirdPersonCameraComponent->SetFieldOfView(IpadS);
                                }




                    
                    

/*
 	if (加速){
                   				UCharacterMovementComponent *CharacterMovement = localPlayer->CharacterMovement;
                   				if (CharacterMovement){
                       			CharacterMovement->MaxWalkSpeed = 1.7f;
                   				}}
*/


                    
				 
				


				/* if(加速){
    auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            
            auto Object = objs.GetByIndex(i);
            if (isObjectInvalid(Object))
                continue;
if (Object->IsA(UCharacterMovementComponent::StaticClass())) {
auto playerChar = (UCharacterMovementComponent *) Object;
playerChar->DefaultTerminalVelocity=999999.0f;
}
if(加速){
                if (Object->IsA(ASTExtraBaseCharacter::StaticClass())) {
                    auto playerChar = (ASTExtraBaseCharacter *) Object;
                    
                      if (Object->IsA(ASTExtraBaseCharacter::StaticClass())) {
                    auto playerChar = (ASTExtraBaseCharacter *) Object;
                    }
  
         auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
         std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td),SLEEP_TIME)));
     }
}



}
       if (加速) {
			 
			 
			 auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
       auto Object = objs.GetByIndex(i);
    if (isObjectInvalid(Object))
       continue;
			     if (Object->IsA(UBulletHitInfoUploadComponent::StaticClass())) {
                 auto SDK_UBulletHitInfoUploadComponent = (UBulletHitInfoUploadComponent *) Object;
			 
                 SDK_UBulletHitInfoUploadComponent->bEnableTssSdkAntiData = 0;
                 SDK_UBulletHitInfoUploadComponent->bEnableTssSdkAntiDataFilter = 0;
                 SDK_UBulletHitInfoUploadComponent->bEnableTssSdkAntiDataFilterNew = 0;
                 SDK_UBulletHitInfoUploadComponent->bDisableDsTick = 1;
                 SDK_UBulletHitInfoUploadComponent->bDisableDsAntiDataReport = 1;
                 SDK_UBulletHitInfoUploadComponent->bEnableAddSPCShootData = 0;
                 SDK_UBulletHitInfoUploadComponent->NeedSendSimpleCharacterHitData = 0;
				 
				 }}}

				 }
				 */
				 
				
   }
  
         auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
         std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td),SLEEP_TIME)));
     }
}

/*
int (*osub_E2172)(const char *a1, unsigned int a2);
//Hook
int hsub_E2172(const char *a1, unsigned int a2)
{
while(true)
{
sleep(10000);//166/24
}


return osub_E2172(a1,a2);
}

*/
/*
void * oxx_thread(void *) {
do {
sleep(1);

} while (!isLibraryLoaded(targetLibName));
//A64HookFunction((void*)getAbsoluteAddress("libanogs.so", 0xd91f8), (void*)IsEnable, (void**)&old_IsEnable);
//A64HookFunction((void*)getAbsoluteAddress("libanogs.so", 0xda8e0), (void*)IsEnable, (void**)&old_IsEnable);
//A64HookFunction((void*)getAbsoluteAddress("libanogs.so", 0xea740), (void*)IsEnable, (void**)&old_IsEnable);
//HOOK_LIB("libanogs.so", "0xea740", sub_EA740, old_sub_EA740);
HOOK_LIB("libanort.so", "0x1c0c40", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1bce50", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1b9494", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1b936c", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1b3af4", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1b3418", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1b3384", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1b2b4c", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1ac088", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1a96cc", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1a9500", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1a51c4", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x19cadc", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x192944", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x17e51c", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1596b8", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1596ac", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1552c4", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x13bb28", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x13ab0c", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x11a0d8", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x119f1c", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x1187d0", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0x118598", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0xadf84", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0xab214", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0xa7090", hsub_E2172, osub_E2172);
HOOK_LIB("libanort.so", "0xa6de0", hsub_E2172, osub_E2172);
return 0;
}  

*/
/*
int (*osub_3CB7E0)(const char *a1, unsigned int a2);
//Hook
int hsub_3CB7E0(const char *a1, unsigned int a2)
{
while(true)
{
sleep(10000);
}


return osub_3CB7E0(a1,a2);
}

int (*osub_12B3DC)(const char *a1, unsigned int a2);
int hsub_12B3DC(const char *a1, unsigned int a2)
{
    while(true)
    {
        sleep(10000);//SLEEP
    }
    return osub_12B3DC(a1,a2);//Hook(@NIKEPUBGHACK)
}
void * oxx_thread(void *) {
do {
sleep(1);

} while (!isLibraryLoaded(targetLibName));

return 0;
}*/

//
int (*osub_1A6FA4)(const char *a1, unsigned int a2);
//Hook
int hsub_1A6FA4(const char *a1, unsigned int a2)
{
while(true)
{
sleep(10000);
}


return osub_1A6FA4(a1,a2);
}


void * xn_thread(void *) {
do {
sleep(1);

} while (!isLibraryLoaded(targetLibName));

/////////////////////////////////////////////////////////////////////////////////
//HOOK_LIB("libanogs.so", "0x48E240", hsub_3C050C, osub_3C050C);


return 0;
}


int (*osub_1B99A4)(const char *a1, unsigned int a2);
int hsub_1B99A4(const char *a1, unsigned int a2) {
    pthread_exit(NULL);
}
void *HOOK防闪_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libanort.so"));
//HOOK_LIB("libanort.so", "0x1B99A4", hsub_1B99A4, osub_1B99A4);
    return NULL;   
}
void *HOOK防封_thread(void *) {



    return NULL;
}

void *main_thread(void *) {
    UE4 = Tools::GetBaseAddress("libUE4.so");
    while (!UE4) {
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }
anogs = Tools::GetBaseAddress("libanogs.so");
    while (!anogs) {
        anogs = Tools::GetBaseAddress("libanogs.so");
        sleep(1);
    }
gcloud = Tools::GetBaseAddress("libgcloud.so");
	while (!gcloud) {
		gcloud = Tools::GetBaseAddress("libgcloud.so");
		sleep(1);
	}
    anort = Tools::GetBaseAddress("libanort.so");
    while (!anort) {
        anort = Tools::GetBaseAddress("libanort.so");
        sleep(1);
    }
TDataMaster = Tools::GetBaseAddress("libTDataMaster.so");
    while (!TDataMaster) {
        TDataMaster = Tools::GetBaseAddress("libTDataMaster.so");
        sleep(1);
    }
    


while (!g_App) {
        g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
        sleep(1);
    }

    while (!g_App->onInputEvent)
        sleep(1);

    orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
    g_App->onInputEvent = onInputEvent;

    FName::GNames = GetGNames();
    while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
    UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);

    void *egl = dlopen_ex("libEGL.so", 4);
    while (!egl) {
        egl = dlopen_ex("libEGL.so", 4);
        sleep(1);
    }

    void *addr = dlsym_ex(egl, "eglSwapBuffers");
    HOOK(addr, _eglSwapBuffers, &orig_eglSwapBuffers);
    dlclose_ex(egl);

    pthread_t t;
    pthread_create(&t, 0, maps_thread, 0);

    items_data = json::parse(JSON_ITEMS);

    return 0;
}
void *bypassanogs_thread(void *) {
    sleep(5);

    
    return 0;
}
       

__attribute__((constructor)) void _init() {
    pthread_t t;
    pthread_create(&t, 0, main_thread, 0);
    pthread_create(&t, 0, bypassanogs_thread, 0);
	pthread_create(&t, 0, bypass_thread, 0);
	//pthread_create(&t, 0, oxx_thread, 0);
	//pthread_create(&t, 0, JL_thread, 0);
	pthread_create(&t, NULL, HOOK防闪_thread, NULL);
    pthread_create(&t, NULL, HOOK防封_thread, NULL);  
	pthread_create(&t, 0, xn_thread, 0);
	
}

/*
void hack() {
        pthread_t t;
    pthread_create(&t, 0, main_thread, 0);
    }
REGISTER_ZYGISK_MODULE(MyModule)
*/
