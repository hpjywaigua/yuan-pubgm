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