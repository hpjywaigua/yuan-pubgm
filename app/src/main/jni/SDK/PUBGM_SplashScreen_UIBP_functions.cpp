// PUBG MOBILE (2.8.0) SDKGenerated by @aynb6 || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @AYMOD6 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SplashScreen_UIBP.SplashScreen_UIBP_C.Construct
// ()

void USplashScreen_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SplashScreen_UIBP.SplashScreen_UIBP_C.Construct");

	USplashScreen_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SplashScreen_UIBP.SplashScreen_UIBP_C.ExecuteUbergraph_SplashScreen_UIBP
// (NetReliable, NetRequest, Native, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USplashScreen_UIBP_C::STATIC_ExecuteUbergraph_SplashScreen_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SplashScreen_UIBP.SplashScreen_UIBP_C.ExecuteUbergraph_SplashScreen_UIBP");

	USplashScreen_UIBP_C_ExecuteUbergraph_SplashScreen_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}
