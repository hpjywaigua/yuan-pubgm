// PUBG MOBILE (2.8.0) SDKGenerated by @aynb6 || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @AYMOD6 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// ()
// Parameters:
// class AActor*                  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrameworkComponentManager::RemoveReceiver(class AActor* Receiver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver");

	UGameFrameworkComponentManager_RemoveReceiver_Params params;
	params.Receiver = Receiver;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// ()
// Parameters:
// class AActor*                  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddOnlyInGameWorlds           (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrameworkComponentManager::AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ModularGameplay.GameFrameworkComponentManager.AddReceiver");

	UGameFrameworkComponentManager_AddReceiver_Params params;
	params.Receiver = Receiver;
	params.bAddOnlyInGameWorlds = bAddOnlyInGameWorlds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

