// PUBG MOBILE (2.8.0) SDKGenerated by @aynb6 || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @AYMOD6 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::SetAdaptation(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation");

	UUICommonFunctionLibrary_C_SetAdaptation_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

