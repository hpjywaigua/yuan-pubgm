
if (Config.AimBot.Enable) {
                if(Config.AimBot.Target == EAimTarget::Auto){
                static bool THead,TNeck,TSpaine01,TSpaine02,TSpaine03,TPlesive,TLuparm,TLlowarm,TLhand,TRuparm,TRlowarm,TRhand,TLthigh,TLcalf,TLfoot,TRthigh,TRcalf,TRfoot;
                static bool AlreadyChoose = false;
                ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
                if(Target){
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("lowerarm_r", {}), true)){
                THead = false; //Controller Can't See TagertPosition
                }else{
                THead = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("neck_01", {}), true)){
                TNeck = false; //Controller Can't See TagertPosition
                }else{
                TNeck = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("spine_01", {}), true)){
                TSpaine01 = false; //Controller Can't See TagertPosition
                }else{
                TSpaine01 = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("spine_02", {}), true)){
                TSpaine02 = false; //Controller Can't See TagertPosition
                }else{
                TSpaine02 = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("spine_03", {}), true)){
                TSpaine03 = false; //Controller Can't See TagertPosition
                }else{
                TSpaine03 = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("upperarm_r", {}), true)){
                TRuparm = false; //Controller Can't See TagertPosition
                }else{
                TRuparm = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("upperarm_l", {}), true)){
                TLuparm = false; //Controller Can't See TagertPosition
                }else{
                TLuparm = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("Head", {}), true)){
                TRlowarm = false; //Controller Can't See TagertPosition
                }else{
                TRlowarm = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("lowerarm_l", {}), true)){
                TLlowarm = false; //Controller Can't See TagertPosition
                }else{
                TLlowarm = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("hand_r", {}), true)){
                TRhand = false; //Controller Can't See TagertPosition
                }else{
                TRhand = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("hand_l", {}), true)){
                TLhand = false; //Controller Can't See TagertPosition
                }else{
                TLhand = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("pelvis", {}), true)){
                TPlesive = false; //Controller Can't See TagertPosition
                }else{
                TPlesive = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("thigh_r", {}), true)){
                TRthigh = false; //Controller Can't See TagertPosition
                }else{
                TRthigh = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("thigh_l", {}), true)){
                TLthigh = false; //Controller Can't See TagertPosition
                }else{
                TLthigh = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("calf_r", {}), true)){
                TRcalf = false; //Controller Can't See TagertPosition
                }else{
                TRcalf = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("calf_l", {}), true)){
                TLcalf = false; //Controller Can't See TagertPosition
                }else{
                TLcalf = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("foot_r", {}), true)){
                TRfoot = false; //Controller Can't See TagertPosition
                }else{
                TRfoot = true; // Controller Can See TargetPosition
                }
                
                if(!g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager,Target->GetBonePos("foot_l", {}), true)){
                TLfoot = false; //Controller Can't See TagertPosition
                }else{
                TLfoot = true; // Controller Can See TargetPosition
                }
                
                if(!AlreadyChoose){ //First Attack Postition.For Safety I Choose Neck Not Head.
                if(TNeck){
                AutoTargetChoose = 2; //Neck
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }              
                
                 if(!AlreadyChoose){ //Second Attack Postition
                if(TSpaine03){
                AutoTargetChoose = 3; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }            
                
                if(!AlreadyChoose){ //Third Attack Postition
                if(TSpaine02){
                AutoTargetChoose = 4; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }            
                
                if(!AlreadyChoose){ //Fourth Attack Postition
                if(TSpaine01){
                AutoTargetChoose = 5; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ //Five Attack Postition
                if(TPlesive){
                AutoTargetChoose = 6; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TRuparm){
                AutoTargetChoose = 7; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TLuparm){
                AutoTargetChoose = 8; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TRlowarm){
                AutoTargetChoose = 9; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TLlowarm){
                AutoTargetChoose = 10; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }   
                
                if(!AlreadyChoose){ 
                if(TRhand){
                AutoTargetChoose = 11; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TLhand){
                AutoTargetChoose = 11; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TRthigh){
                AutoTargetChoose = 12; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TLthigh){
                AutoTargetChoose = 13; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TRcalf){
                AutoTargetChoose = 14; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TLcalf){
                AutoTargetChoose = 15; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TRfoot){
                AutoTargetChoose = 16; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                
                if(!AlreadyChoose){ 
                if(TLfoot){
                AutoTargetChoose = 17; 
                AlreadyChoose = true;
                }else{
                AlreadyChoose = false;
                }
                }
                }
                AlreadyChoose = false; //Return
              }
            }
				     if (Config.AimBot.Enable) {
                    ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
                    if (Target) {
                        
                        float AimDis= localPlayer->GetDistanceTo(Target) / 100.f;
                        
                        if(AimDis <= 50.0f){
                            Config.ESPMenu.AimYQ = Config.ESPMenu.Aim50;
                        }
                        if(AimDis > 50.0f && AimDis <= 100.0f){
                            Config.ESPMenu.AimYQ = Config.ESPMenu.Aim100;
                        }
                        if(AimDis > 100.0f && AimDis <= 150.0f){
                            Config.ESPMenu.AimYQ = Config.ESPMenu.Aim150;
                        }
                        if(AimDis > 150.0f && AimDis <= 200.0f){
                            Config.ESPMenu.AimYQ = Config.ESPMenu.Aim200;
                        }
                        if(AimDis > 200.0f && AimDis <= 250.0f){
                            Config.ESPMenu.AimYQ = Config.ESPMenu.Aim250;
                        }
                        if(AimDis > 250.0f && AimDis <= 300.0f){
                            Config.ESPMenu.AimYQ = Config.ESPMenu.Aim300;
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
                            FVector targetAimPos = Target->GetBonePos("Head", {});

                            
                               if(AutoTargetChoose == 2){
                             targetAimPos = Target->GetBonePos("neck_01", {});
                               }else if(AutoTargetChoose == 3){
                             targetAimPos = Target->GetBonePos("spine_03", {});
                               }else if(AutoTargetChoose == 4){
                             targetAimPos = Target->GetBonePos("spine_02", {});
                               }else if(AutoTargetChoose == 5){
                             targetAimPos = Target->GetBonePos("spine_01", {});
                               }else if(AutoTargetChoose == 6){
                             targetAimPos = Target->GetBonePos("foot_l", {});
                               }else if(AutoTargetChoose == 7){
                             targetAimPos = Target->GetBonePos("foot_r", {});
                               }else if(AutoTargetChoose == 8){
                             targetAimPos = Target->GetBonePos("upper_l", {});
                               }else if(AutoTargetChoose == 9){
                             targetAimPos = Target->GetBonePos("lowerarm_r", {});
                               }else if(AutoTargetChoose == 10){
                             targetAimPos = Target->GetBonePos("thigh_l", {});
                               }else if(AutoTargetChoose == 11){
                             targetAimPos = Target->GetBonePos("calf_l", {});
                               }else if(AutoTargetChoose == 12){
                             targetAimPos = Target->GetBonePos("upper_r", {});
                               }else if(AutoTargetChoose == 13){
                             targetAimPos = Target->GetBonePos("lowerarm_r", {});
                               }else if(AutoTargetChoose == 14){
                             targetAimPos = Target->GetBonePos("thigh_r", {});
                               }else if(AutoTargetChoose == 15){
                             targetAimPos = Target->GetBonePos("calf_r", {});
                               }else if(AutoTargetChoose == 16){
                             targetAimPos = Target->GetBonePos("calf_r", {});
                               }else if(AutoTargetChoose == 17){
                             targetAimPos = Target->GetBonePos("calf_r", {});
                               }                               
                            
                        //   targetAimPos.Z -= Config.ESPMenu.AimYQ;
                           
                          
              
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
                                                if (Config.AimBot.Enable) {
                            if (g_LocalPlayer->bIsGunADS) {
                               if (g_LocalPlayer->bIsWeaponFiring) {
                                float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                targetAimPos.Z -= dist * 压枪系数;        
                              //  targetAimPos.X -= dist * 预判算法;
                                                          
                                }  
                             }
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