#pragma once

// PUBG MOBILE (2.8.0) SDKGenerated by @aynb6 || 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @AYMOD6 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
struct UMediaPlaneComponent_SetMediaPlane_Params
{
	struct FMediaPlaneParameters                       Plane;                                                    // (Parm)
};

// Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged
struct UMediaPlaneComponent_OnRenderTextureChanged_Params
{
};

// Function MediaCompositing.MediaPlaneComponent.GetPlane
struct UMediaPlaneComponent_GetPlane_Params
{
	struct FMediaPlaneParameters                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

