       FVector ViewPosY{0, 0, 0};
                        if (localPlayer) {                   
                        ViewPosY = localPlayer->GetBonePos("Head", {});
                        ViewPosY.Z += 10.f;
                         }         
              
           
               
                       for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor))
                    continue;

					if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
							 long PlayerBoxClrCf = IM_COL32(0,255,0, 255);
                            long PlayerBoxClrCf2 = IM_COL32(0,255,0, 25);
                            auto Player = (ASTExtraPlayerCharacter *) Actor;
							if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                                PlayerBoxClrCf = IM_COL32(223,0,41, 255);
                                PlayerBoxClrCf2 = IM_COL32(223,0,41, 25);
                            }

                            float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                            if (Distance > 500.0f)
                                continue;

                            if (Player->PlayerKey == localController->PlayerKey)
                                continue;

                            if (Player->TeamID == localController->TeamID)
                                continue;

                            if (Player->bDead)
                                continue;

							//	int healthOutline;
                                bool IsVisible = localController->LineOfSightTo(Player, {0, 0, 0}, true);
                            int SCOLOR;
                            int SCOLOR2;
                            int SCOLO;
                            if (IsVisible)
                            {
                            SCOLOR = IM_COL32(0, 255, 0, 255);
                            SCOLOR2 = IM_COL32(0, 255, 0, 25);
                            SCOLO = IM_COL32(255, 100, 0, 100);
                            }else{
                            SCOLOR = IM_COL32(255, 0, 0, 255);
                            SCOLOR2 = IM_COL32(255, 0, 0, 25);
                            SCOLO = IM_COL32(0, 0, 0, 100);
                            }                                                   
                           int Colorhealth;
						int healthOutline;
                        if (Player->bIsAI)
						   {
                            totalBots++;
							Colorhealth = IM_COL32(0, 255, 0, 90);
							healthOutline = IM_COL32(0, 255, 174, 255);
						    }
                        else 
						    {
							totalEnemies++;
							Colorhealth = IM_COL32(255, 100, 0, 100);
							healthOutline = IM_COL32(255, 0, 0, 255);					
							}
						//	long SCOLOR2 = IM_COL32(255, 255, 255, 255); 
							long SCOLORA = IM_COL32(255, 255, 255, 255);					
                           // long SCOLOR = IM_COL32(255, 255, 255, 255);
							long SCOLOR1 = IM_COL32(255, 0, 0, 255);
                        
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                            
							SCOLORA = IM_COL32(10, 250, 250, 255); 
                            SCOLOR2 = IM_COL32(10, 250, 250, 255); 
                            SCOLOR = IM_COL32(10, 250, 250, 255); 
							SCOLOR = IM_COL32(10, 250, 250, 255); 
							SCOLOR1 = IM_COL32(10, 250, 250, 255); 
							
                            }
							
							///int SCOLOR3;
                           if (Player->bIsAI)
                                      {
                         SCOLO = IM_COL32(0, 255, 0, 90);
                                              }                          
                                
                                
                                
                                
								
                            if (!Player->Mesh)
                                continue;

                                                if (Player->bIsAI)
													
											
                    		
                    if (Config.ESPMenu.NoBot)
                        if (Player->bIsAI)
                            continue;

                    auto headPos = Player->GetBonePos("Head", {});
headPos.Z = headPos.Z + 1.0f;
ImVec2 HeadPosSC;
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto Pelvis = Player->GetBonePos("Pelvis", {});
ImVec2 PelvisPoSC;
     
if (
W2S(headPos, (FVector2D *)&HeadPosSC)&& 
W2S(upper_r, (FVector2D *)&upper_rPoSC)&& 
W2S(upper_l, (FVector2D *)&upper_lPoSC)&& 
W2S(lowerarm_r, (FVector2D *)&lowerarm_rPoSC)&& 
W2S(hand_r,(FVector2D *)&hand_rPoSC)&&
W2S(lowerarm_l, (FVector2D *)&lowerarm_lSC)&&
W2S(hand_l, (FVector2D *)&hand_lPoSC)&&
W2S(thigh_l, (FVector2D *)&thigh_lPoSC)&&
W2S(calf_l, (FVector2D *)&calf_lPoSC)&&
W2S(foot_l, (FVector2D *)&foot_lPoSC)&&
W2S(thigh_r, (FVector2D *)&thigh_rPoSC)&&
W2S(calf_r, (FVector2D *)&calf_rPoSC)&&
W2S(foot_r, (FVector2D *)&foot_rPoSC)&&
W2S(neck_01, (FVector2D *)&neck_01PoSC)&&
W2S(Pelvis, (FVector2D *)&PelvisPoSC)&&
W2S(RootPos, (FVector2D *)&RootPosSC)) {
	

                        if (Config.ESPMenu.Line) {
                            if (Player->bIsAI) {
                                draw->AddLine({(float) glWidth / 2, 90}, HeadPosSC,
                                                  PlayerBoxClrCf, Config.Line);
                            } else {
                                    draw->AddLine({(float) glWidth / 2, 90}, HeadPosSC,
                                                  PlayerBoxClrCf, Config.Line);
                                }
                        }
                        if (Config.ESPMenu.Line) {
             draw->AddText(NULL, ((float) density / 15.0f),{(float) glWidth / 2 + glWidth / 35,120},IM_COL32(255, 0, 0, 255),
                            "");
       }
        
                            if (Config.ESPMenu.Box) {
float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
float boxWidth = boxHeight * 0.65f;
Box4Line(draw, 0.5f, HeadPosSC.x - (boxWidth / 2), HeadPosSC.y, boxWidth, boxHeight,  PlayerBoxClrCf);
}
    if (手雷) {
                   if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())) {
                      auto Grenade = (ASTExtraGrenadeBase *) Actors[i];
                      
                         auto RootComponent = Grenade->RootComponent;
                            if (!RootComponent)
                                continue;
                                
                            float Distance =
                                    Grenade->GetDistanceTo(localPlayer) / 100.f;
                            if (Distance <= 50.f) {
								draw->AddText(nullptr, ((float) density / 10.5f),
                                  ImVec2(glWidth / 2 - 225, 120), IM_COL32(255, 0, 0, 255),
                                  "");
                          FVector2D GrenadePos;
                        if (W2S(Grenade->K2_GetActorLocation(), &GrenadePos)) {
                            std::string s = "投掷物";
                            s += " ";
                            s += std::to_string((int) Distance);
                            s += "M";
                                       
                            draw->AddText(NULL, ((float) density / 25.0f), {GrenadePos.X, GrenadePos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());

                                   }
                                }
                            }
                       }

//闪光绘图
if(Config.SilentAim.Tmode == Timmode::FUCK){
if (Config.ESPMenu.TeamID || Config.ESPMenu.Name || Config.ESPMenu.Distance) {
                                    float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                    float boxWidth = boxHeight * 0.65f;
                                    std::string s;

                                    if (Config.ESPMenu.TeamID) {
                                      
                                        s += std::to_string(Player->TeamID);
                                        s += " - ";
                                    }

                                    if (Config.ESPMenu.Name) {
                                       if (Player->Health == 0.0f) {
                                 s += "DOWN";
                                 } else {
                            
                            if (Player->bIsAI) {
                                s += "BOT";
                            } else {
                                s += Player->PlayerName.ToString();
                               }
                            }

                                    if (Config.ESPMenu.Distance) {
                                        if (!s.empty()) {
                                            s += " - ";
                                        }
                                        s += std::to_string((int) Distance);
                                        s += "m";
                                    }

                                    auto textSize = ImGui::CalcTextSize(s.c_str(), 0, ((float) density / 25.0f));
									  if (Player->bIsAI) {
                                    draw->AddText(NULL, ((float) density / 25.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, SCOLOR, s.c_str());
									 } else {
									draw->AddText(NULL, ((float) density / 25.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, SCOLOR1, s.c_str());
									}
                                }
                            }
                                                                               /*   if (Config.ESPMenu.Health) {
                            int CurHP = (int) std::max(0, std::min((int) Player->Health,
                                                                   (int) Player->HealthMax));
                            int MaxHP = (int) Player->HealthMax;

                            long HPColor = IM_COL32(
                                    std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),
                                    std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                            if (Player->Health == 0.0f && !Player->bDead) {
                                HPColor = IM_COL32(255, 0, 0, 155);

                                CurHP = Player->NearDeathBreath;
                                if (Player->NearDeatchComponent) {
                                    MaxHP = Player->NearDeatchComponent->BreathMax;
                                }
                            }
                            auto AboveHead = Player->GetHeadLocation(true);
                                            AboveHead.Z += 35.f;
                                            FVector2D AboveHeadSc;
                                            
                                            
                            auto mWidthScale = std::min(0.1f * Distance, 35.f);

                            auto mWidth = 75.f - mWidthScale;
                            auto mHeight = mWidth * 0.175f;
                            AboveHeadSc.X -= (mWidth / 2);
                            AboveHeadSc.Y -= (mHeight * 1.2f);

                            float boxWidth = density / 1.6f;
                            boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
                            float boxHeight = boxWidth * 0.07f;
                          
                            ImVec2 vStart = {HeadPosSC.x - (mWidth / 2),
                                             HeadPosSC.y - (boxHeight * 2.1f)};

                            ImVec2 vEndFilled = {vStart.x + (CurHP * mWidth / MaxHP),
                                                 vStart.y + mHeight};
                              
                                                 
                           ImVec2 vStart2 = {HeadPosSC.x - (mWidth / 2),
                                             HeadPosSC.y - (boxHeight * 2.1f)};
                      
                            ImVec2 vEndFilled2 = {vStart2.x - (20 * mWidth / MaxHP),
                                                 vStart2.y + mHeight};
                           ImVec2 vStart3 = {HeadPosSC.x - (mWidth / 2),
                                             HeadPosSC.y - (boxHeight * 2.1f)};    
                                                 
                            ImVec2 vEndFilled3 = {vStart3.x + mWidth + (mWidth / MaxHP),
                                                 vStart2.y + mHeight};                     
                             bool IsVisible = localController->LineOfSightTo(Player, ViewPosY, true);
    
                                   
                                            if (Player->bIsAI) {
                                                draw->AddRectFilled(vStart, vEndFilled,  SCOLOR);
                                                                        
                                                draw->AddRect(vStart2, vEndFilled2,  SCOLOR);
                                                
                                                
                                                } else {
                                                draw->AddRectFilled(vStart, vEndFilled,  SCOLOR1);
                                               // draw->AddRectFilled(vStart2, vEndFilled2, ToColor(ItemColors[Player->TeamID]));                                 
                                              //   draw->AddRect(vStart2, vEndFilled2, ToColor(Config.ColorsESP.Skeleton));
                                                 draw->AddRect(vStart2, vEndFilled3, SCOLOR1);
                                                 
                                           
                                                }
                                               }*/
                                               
                                                                               if (Config.ESPMenu.Health) {
							        int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
                                    int MaxHP = (int) Player->HealthMax;

                                    long HPColor = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                                    if (Player->Health == 0.0f && !Player->bDead) {
                                        HPColor = IM_COL32(255, 255, 0, 255);

                                        CurHP = Player->NearDeathBreath;
                                        if (Player->NearDeatchComponent) {
                                            MaxHP = Player->NearDeatchComponent->BreathMax;
                                        }
                                    }

                                    float boxWidth = density / 6.0f;
                                    boxWidth -= std::min(((boxWidth / 2) / 700.0f) * Distance, boxWidth / 2);
                                    float boxHeight = boxWidth * 0.15f;


                                    ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y - (boxHeight * 2.5f)};

                                    ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP), vStart.y + boxHeight};
                                    ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};

                                    draw->AddRectFilled(vStart, vEndFilled, HPColor, 6.0f);
                                    draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155), 6.0f);
                               
						   
						   }
                            }
                                               
                                               
                                               
                            







                                       if(Config.SilentAim.Tmode == Timmode::Fixe){
                                   
                                                                           if (Config.ESPMenu.TeamID) {
                                    float boxWidth = density / 1.8f;
                            boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
                            float boxHeight = boxWidth * 0.17f;
                            std::string s;
						
							s += "[";
                            s += std::to_string(Player->TeamID);
							s += "]";
                            draw->AddText(NULL, ((float) density / 30.0f),
                                          {HeadPosSC.x - (boxWidth / 2),
                                           HeadPosSC.y - (boxHeight * 1.83f)},
                                          IM_COL32(255, 255, 255, 255), s.c_str());
                                    }
                                    
                                if (Config.ESPMenu.Distance) {
                                float boxWidth = density / 1.6f;
                                boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,boxWidth / 2);
                                float boxHeight = boxWidth * 0.13f;
                                std::string s;
								s += "";
                                s += std::to_string((int) Distance);
                                s += "米";
                                   auto textSize = ImGui::CalcTextSize(s.c_str(), 0, ((float) density / 30.0f)); 
								
                                draw->AddText(NULL, ((float) density / 36.0f),
								    {RootPosSC.x - (textSize.x / 2.5), RootPosSC.y},
								    IM_COL32(255, 255, 255, 255), s.c_str());
                            }
	if (Config.ESPMenu.Health) {
                       int CurHP = (int) std::max(0, std::min(
                                  (int) Player->Health,
                                 (int) Player->HealthMax));
                               int MaxHP = (int) Player->HealthMax;
                                       											
					    	  long HPColor;
                                                if (Player->Health < 25)
                                                       HPColor = IM_COL32(0, 203, 255, 110);
                                                 else if (Player->Health < 50)
                                                       HPColor = IM_COL32(255, 0, 233, 120);
                                                 else if ( Player->Health < 75)
                                                       HPColor = IM_COL32(255, 0, 233, 120);
                                                  else
                                                       HPColor = SCOLO;
                                                //if (Config.ESPMenu.ShowKnockedHealth) {
                                                if (Player->Health == 0.0f && !Player->bDead) {
                                                   SCOLOR = IM_COL32(250, 0, 0, 80);
                                                   
                                                    HPColor = IM_COL32(255, 0, 0, 110);

                                                    CurHP = Player->NearDeathBreath;
                                                    if (Player->NearDeatchComponent) {
                                                        MaxHP = Player->NearDeatchComponent->BreathMax;
                                                    }
                                                }                                       
                                                float boxWidth = density / 1.6f;
                                                boxWidth -= std::min(
                                                        ((boxWidth / 2) / 0.001f) * Distance,
                                                        boxWidth / 2);
                                                float boxHeight = boxWidth * 0.15f;


                                                ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2),
                                                                 HeadPosSC.y -
                                                                 (boxHeight * 2.001f)};

                                                ImVec2 vEndFilled = {
                                                        vStart.x + (CurHP * boxWidth / MaxHP),
                                                        vStart.y + boxHeight};
                                                ImVec2 vEndRect = {vStart.x + boxWidth,
                                                                   vStart.y + boxHeight};

                                                draw->AddRectFilled(vStart, vEndFilled, HPColor,
                                                                    10.0f);
                                                draw->AddRect(vStart, vEndRect,
                                                              SCOLO, 10.0f);
                                            }
                                            
                                            if (Config.ESPMenu.Name) {
                            float boxWidth = density / 2.0f;
                                               boxWidth -= std::min(
                                               ((boxWidth / 2) / 00.0f) * Distance,
                                               boxWidth / 2);
                                               float boxHeight = boxWidth * 0.19f;
                                               std::string s;
                                               if (Player->bIsAI) {
                                               s += "    人机";
                                               } else {
                                               s += Player->PlayerName.ToString();
                                               }
                                               draw->AddText(NULL, ((float) density / 30.0f),
                                               {HeadPosSC.x - (boxWidth / 3.3),
                                               HeadPosSC.y - (boxHeight * 1.83f)},
                                               IM_COL32(255, 255, 255, 255),
                                               s.c_str());
                        }
                                            
                                            
                        }
                        




                        
                        
                      /*  
                        if (Config.ESPMenu.TeamID) {
                         float boxWidth = density / 2.0f;
                                               boxWidth -= std::min(
                                               ((boxWidth / 2) / 00.0f) * Distance,
                                               boxWidth / 2);
                                               float boxHeight = boxWidth * 0.19f;
                                               std::string s;
                                               s += std::to_string(Player->TeamID);
                                               draw->AddText(NULL, ((float) density / 30.0f),
                                               {HeadPosSC.x - (boxWidth / 1.7),
                                               HeadPosSC.y - (boxHeight * 1.83f)},
                                               IM_COL32(255, 255, 255, 215),
                                               s.c_str());
                        }


                        if (Config.ESPMenu.Name) {
                            float boxWidth = density / 2.0f;
                                               boxWidth -= std::min(
                                               ((boxWidth / 2) / 00.0f) * Distance,
                                               boxWidth / 2);
                                               float boxHeight = boxWidth * 0.19f;
                                               std::string s;
                                               if (Player->bIsAI) {
                                               s += "    BOT";
                                               } else {
                                               s += Player->PlayerName.ToString();
                                               }
                                               draw->AddText(NULL, ((float) density / 30.0f),
                                               {HeadPosSC.x - (boxWidth / 3.3),
                                               HeadPosSC.y - (boxHeight * 1.83f)},
                                               IM_COL32(255, 255, 255, 215),
                                               s.c_str());
                        }
*/
                                                       	if (手持) {
           	        
                                auto rrrr = Player->GetBonePos("Head", {});
                                auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                
   if (WeaponManagerComponent) {
        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
        if (CurrentWeaponReplicated) {
            auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
            auto wppp = CurrentWeaponReplicated->GetWeaponID();
            if (WeaponId) {
                auto Weapon_Name= CurrentWeaponReplicated->GetWeaponName().ToString();
                TextureInfo textureInfo{};
                switch (wppp) {
                
                //十字弩
                case 107001:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070011:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070012:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070013:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070014:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070015:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070016:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070017:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                
                //狗杂
                case 101005:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010051:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010052:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010053:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010054:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010055:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010056:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010057:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;

                //SKS
                case 103004:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030041:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030042:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030043:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030044:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030045:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030046:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030047:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                
                //M249                               
                case 105001:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050011:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050012:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050013:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050014:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050015:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050016:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050017:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                
                //DP28
                case 105002:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050021:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050022:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050023:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050024:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050025:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050026:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050027:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                
                //Kar98k
                case 103001:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030011:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030012:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030013:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030014:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030015:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030016:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030017:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                
                //R1895
                case 106003:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060031:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060032:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060033:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060034:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060035:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060036:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060037:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                
                //P18C
                case 106005:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060051:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060052:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060053:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060054:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060055:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060056:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060057:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                
                //AKM
                case 101001:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010011:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010012:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010013:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010014:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010015:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010016:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010017:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                
                //G36C
                case 101010:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010101:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010102:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010103:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010104:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010105:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010106:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010107:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                
                //FAMAS                
                case 101100:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011001:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011002:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011003:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011004:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011005:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011006:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011007:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
                
                //AUG
                case 101006:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010061:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010062:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010063:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010064:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010065:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010066:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010067:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                
                //Mini14
                case 103006:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030061:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030062:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030063:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030064:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030065:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030066:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030067:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                
                //PP19
                case 102005:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020051:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020052:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020053:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020054:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020055:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020056:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020057:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                
                //M16A4
                case 101002:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010021:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010022:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010023:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010024:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010025:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010026:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010027:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                
                //死嘎
                case 101003:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010031:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010032:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010033:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010034:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010035:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010036:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010037:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                
                //Win94
                case 103008:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030081:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030082:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030083:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030084:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030085:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030086:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030087:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                
                //UZI
                case 102001:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020011:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020012:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020013:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020014:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020015:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020016:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020017:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                
                //汤姆逊
                case 102004:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020041:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020042:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020043:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020044:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020045:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020046:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020074:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                
                //Vector
                case 102003:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020031:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020032:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020033:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020034:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020035:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020036:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020037:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                
                //UMP9
                case 102002:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020021:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020022:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020023:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020024:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020025:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020026:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020027:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                
                //VSS
                case 103005:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030051:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030052:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030053:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030054:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030055:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030056:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030057:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                
                //M416
                case 101004:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010041:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010042:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010043:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010044:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010045:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010046:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010047:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                
                //MK14
                case 103007:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030071:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030072:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030073:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030074:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030075:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030076:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030077:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                
                //SLR
                case 103009:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030091:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030092:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030093:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030094:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030095:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030096:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030097:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                
                //MK47
                case 101009:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010091:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010092:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010093:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010094:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010095:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010096:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010097:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                
                //M762
                case 101008:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010081:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010082:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010083:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010084:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010085:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010086:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010087:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                
                //QBZ
                case 101007:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010071:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010072:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010073:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010074:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010075:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010076:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010077:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                
                //QBU
                case 103010:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030101:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030102:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030103:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030104:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030105:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030106:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030107:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                /*
                //S1897
                case 104002:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040021:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040022:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040023:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040024:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040025:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040026:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040027:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                */
                //S12K
                case 104003:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040031:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040032:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040033:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040034:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040035:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040036:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040037:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                
                //S686
                case 104001:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040011:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040012:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040013:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040014:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040015:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040016:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040017:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                
                //拳头👊
                case 108004:
                if(Weapon_Name = "Pan"){
                textureInfo = hand.拳头;
                //*name = "Pan";
                }
                break;
                
                //AWM
                case 103003:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030031:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030032:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030033:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030034:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030035:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030036:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030037:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                
                //M24
                case 103002:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030021:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030022:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030023:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030024:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030025:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030026:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030027:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                }
            DrawImage((int) (HeadPosSC.x - 1 - (float) textureInfo.w / 2), (int) (HeadPosSC.y - 99.1 - (float) textureInfo.y / 2.5f), textureInfo.w, textureInfo.h, textureInfo.textureId);
                }
            } 
                        else {
            
            
            textureInfo = hand.拳头;
            
            DrawImage((int) (HeadPosSC.x - 1 - (float) textureInfo.w / 2), (int) (HeadPosSC.y - 99.1 - (float) textureInfo.y / 2.5f), textureInfo.w, textureInfo.h, textureInfo.textureId);
            }
        }
   }

       
       
if (Config.AutoESP) {
	                                
				}

                        
					if (Config.ESPMenu.Radar){    // This is Rect Radar
                            
                     bool out = false;                              
                     struct Vector3 Pos;
                     Pos.X = screenWidth / 4.395;
                     Pos.Y = screenHeight / 200;
                     struct Vector3 Size;
                     Size.X = 200; //Width of Radar Box.
                     Size.Y = 210; //Height of Radar Box.
                     float RadarCenterX = Pos.X + (Size.X / 2);
                     float RadarCenterY = Pos.Y + (Size.Y / 2);
                     ImColor CircleColor = ImColor(0, 0, 0, 20);
                     ImColor PointColor = ImColor(255, 255, 255, 150);
                     draw->AddLine(ImVec2(RadarCenterX, RadarCenterY), ImVec2(RadarCenterX, Pos.Y), IM_COL32(255, 000, 000, 0), 0.f);
                     draw->AddLine(ImVec2(RadarCenterX, RadarCenterY), ImVec2(Pos.X , RadarCenterY), IM_COL32(255, 000, 000, 0), 0.f);
                     draw->AddLine(ImVec2(Pos.X, RadarCenterY), ImVec2(Pos.X + Size.X, RadarCenterY), IM_COL32(255, 000, 000, 0), 0.f);
                     draw->AddLine(ImVec2(RadarCenterX, RadarCenterY), ImVec2(RadarCenterX, Pos.Y + Size.Y), IM_COL32(255, 000, 000, 0), 0.f);
                            
                     draw->AddCircleFilled(ImVec2(RadarCenterX, RadarCenterY), 100.f, CircleColor, 1000); //Background
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 100.f, PointColor, 1000);
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 80.f, PointColor, 1000);
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 60.f, PointColor, 1000);
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 25.f, PointColor, 1000);
                     draw->AddCircleFilled(ImVec2(RadarCenterX + 0.5f, RadarCenterY + 0.5f), 3.f, PointColor, 1000);

                 }                 

if (Config.ESPMenu.Radar) {
                      FVector MyPosition;
                      ASTExtraVehicleBase *CurrentVehiclea = Player->CurrentVehicle;
                 if (CurrentVehiclea) {
                      MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
                       } else {
                      MyPosition = Player->RootComponent->RelativeLocation;
                       }                                     
                      FVector EnemyPosition;
                      ASTExtraVehicleBase *CurrentVehicle = localPlayer->CurrentVehicle;
                 if (CurrentVehicle) {
                      EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                       }  else {
                      EnemyPosition = localPlayer->RootComponent->RelativeLocation;
                }
               bool out = false;                              
               struct Vector3 Pos;
               Pos.X = screenWidth / 4.395;
               Pos.Y = screenHeight / 200;
               struct Vector3 Size;
               Size.X = 200; //Width of Radar Box.
               Size.Y = 210; //Height of Radar Box.
               float RadarCenterX = Pos.X + (Size.X / 2);
               float RadarCenterY = Pos.Y + (Size.Y / 2);                                    
                                                   
               bool IsVisible = true;
               FVector RadarSketch = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, Pos.X, Pos.Y, Vector3(Size.X, Size.Y, 0), out);
                                if (Distance >= 0.f) {
                                
                                draw->AddCircleFilled(ImVec2(RadarSketch.X, RadarSketch.Y), 5, PlayerBoxClrCf, 0.0f);
}
}             
             

                      /*  if (Config.ESPMenu.Distance) {
                        float boxWidth = density / 1.8f;
                                               boxWidth -= std::min(
                                               ((boxWidth / 2) / 00.0f) * Distance,
                                               boxWidth / 2);
                                               float boxHeight = boxWidth * 0.20f;
                            std::string s;
							        s += ":";
                                    s += std::to_string((int) Distance);
                                    s += "M";
         draw->AddText(NULL, ((float) density / 30.0f), {HeadPosSC.x - 20, HeadPosSC.y - 58}, IM_COL32(255,255,255, 255), s.c_str());
                    }*/
                    
                    //绘图二
                    
                
                    bool Visble = false;
                      if (Config.ESPMenu.Skeleton) {
                                float boxWidth = 7.f - Distance * 0.05;
				        if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
						{
						Visble = true;

						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, neck_01PoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, neck_01PoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
						{
						Visble = true;

						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, neck_01PoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, neck_01PoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
						{
						Visble = true;

						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, lowerarm_rPoSC,SCOLOR2, 1.0f );
						}else
						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, lowerarm_rPoSC,SCOLOR, 1.0f );
						
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, false))
						{
						Visble = true;

						draw->AddLine( { lowerarm_rPoSC.x, lowerarm_rPoSC.y }, hand_rPoSC,SCOLOR2, 1.0f );
						}else
						draw->AddLine( { lowerarm_rPoSC.x, lowerarm_rPoSC.y }, hand_rPoSC,SCOLOR, 1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
						{
						Visble = true;

						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, lowerarm_lSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, lowerarm_lSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, false))
						{
						Visble = true;
						
						draw->AddLine( { lowerarm_lSC.x, lowerarm_lSC.y }, hand_lPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { lowerarm_lSC.x, lowerarm_lSC.y }, hand_lPoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, false))
						{
						Visble = true;
						
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, thigh_lPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, thigh_lPoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, false))
						{
						Visble = true;
						
						draw->AddLine( { thigh_lPoSC.x, thigh_lPoSC.y }, calf_lPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { thigh_lPoSC.x, thigh_lPoSC.y }, calf_lPoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, false))
						{
						Visble = true;
						
						draw->AddLine( { calf_lPoSC.x, calf_lPoSC.y }, foot_lPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { calf_lPoSC.x, calf_lPoSC.y }, foot_lPoSC, SCOLOR,1.0f );
					    
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, false))
						{
						Visble = true;
						
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, calf_rPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, calf_rPoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, false))
						{
						Visble = true;
						
						draw->AddLine( { calf_rPoSC.x, calf_rPoSC.y }, foot_rPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { calf_rPoSC.x, calf_rPoSC.y }, foot_rPoSC, SCOLOR,1.0f );
						
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, Pelvis, false))
						{
						Visble = true;
						
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, PelvisPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, PelvisPoSC, SCOLOR,1.0f );
						
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, headPos, false))
						{
						Visble = true;
						
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, HeadPosSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, HeadPosSC, SCOLOR,1.0f );
					}
					    if(Config.SilentAim.Tmode == Timmode::Md){
					    
                    if (Config.ESPMenu.Health) {
                    
                    
                                                                            if (Config.ESPMenu.TeamID) {
                                    float boxWidth = density / 1.8f;
                            boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
                            float boxHeight = boxWidth * 0.17f;
                            std::string s;
						
							s += "[";
                            s += std::to_string(Player->TeamID);
							s += "]";
                            draw->AddText(NULL, ((float) density / 30.0f),
                                          {HeadPosSC.x - (boxWidth / 2),
                                           HeadPosSC.y - (boxHeight * 1.83f)},
                                          IM_COL32(255, 255, 255, 255), s.c_str());
                                    }
                                    
                                if (Config.ESPMenu.Distance) {
                                float boxWidth = density / 1.6f;
                                boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,boxWidth / 2);
                                float boxHeight = boxWidth * 0.13f;
                                std::string s;
								s += "";
                                s += std::to_string((int) Distance);
                                s += "米";
                                   auto textSize = ImGui::CalcTextSize(s.c_str(), 0, ((float) density / 30.0f)); 
								
                                draw->AddText(NULL, ((float) density / 36.0f),
								    {RootPosSC.x - (textSize.x / 2.5), RootPosSC.y},
								    IM_COL32(255, 255, 255, 255), s.c_str());
                            }
									   
                                      int CurHP = (int) std::max(0, std::min((int) Player->Health,
                                                                       (int) Player->HealthMax));
                                int MaxHP = (int) Player->HealthMax;

                                long HPColor = IM_COL32(
                                        std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),
                                        std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                                if (Player->Health == 0.0f && !Player->bDead) {
                                    HPColor = IM_COL32(255, 0, 0, 155);

                                    CurHP = Player->NearDeathBreath;
                                    if (Player->NearDeatchComponent) {
                                        MaxHP = Player->NearDeatchComponent->BreathMax;
                                    }
                                }

                                float boxHeight = abs(HeadPosSC.y - foot_lPoSC.y);
                                float boxWidth = 5.0f;
                                ImVec2 vStart = {HeadPosSC.x +15.0f+ (boxWidth / 2), HeadPosSC.y};
                                ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};
                                ImVec2 VStart = {PelvisPoSC.x - (boxWidth / 2),
                                                 PelvisPoSC.y - (boxHeight * 2.1f)};
                                ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP),
                                                     vStart.y + boxHeight};
                                ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};
                                draw->AddRectFilled(vStart, vEndFilled, HPColor);
                                draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                      draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                            }
                            
                            if (Config.ESPMenu.Name) {
                            float boxWidth = density / 2.0f;
                                               boxWidth -= std::min(
                                               ((boxWidth / 2) / 00.0f) * Distance,
                                               boxWidth / 2);
                                               float boxHeight = boxWidth * 0.19f;
                                               std::string s;
                                               if (Player->bIsAI) {
                                               s += "    人机";
                                               } else {
                                               s += Player->PlayerName.ToString();
                                               }
                                               draw->AddText(NULL, ((float) density / 30.0f),
                                               {HeadPosSC.x - (boxWidth / 3.3),
                                               HeadPosSC.y - (boxHeight * 1.83f)},
                                               IM_COL32(255, 255, 255, 255),
                                               s.c_str());
                        }
                            
                            
                            
                            //ZERO新版血量
                       /*     if (Config.ESPMenu.Health) {
                            int CurHP = (int) std::max(0, std::min((int) Player->Health,110));
                                int MaxHP = 100;  

                                long HPColor;
                                long HPBordersColor;
                                
                                if (Player->bIsAI) {

                                HPColor = IM_COL32(0, 200, 0, 100);
                                HPBordersColor = IM_COL32(0, 200, 0, 130);
                                
                                } else {
                                
                                HPColor = IM_COL32(200, 0, 0, 100);
                                HPBordersColor = IM_COL32(200, 0, 0, 130);
                                
                                }

                                if (Player->Health == 0.0f && !Player->bDead) 
                                {                                
                                   HPColor = IM_COL32(0, 0, 0, 0);
                                   HPBordersColor = IM_COL32(255, 255, 255, 255);
                                }
                                //нижний слева
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55, HeadPosSC.Y - 10));
                                //нижний с права
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55 + CurHP, HeadPosSC.Y - 10));
                                //середина с права
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55 + CurHP + 9, HeadPosSC.Y - 20));
                                //верхний с права
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55 + CurHP, HeadPosSC.Y - 30));
                                //верхний слева
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55, HeadPosSC.Y - 30));
                                //середина слева
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55 - 9, HeadPosSC.Y - 20));                                
                                draw->PathFillConvex(HPColor);
 
                                //нижний слева
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55, HeadPosSC.Y - 10));
                                //нижний с права
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55 + CurHP, HeadPosSC.Y - 10));
                                //середина с права
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55 + CurHP + 9, HeadPosSC.Y - 20));
                                //верхний с права
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55 + CurHP, HeadPosSC.Y - 30));
                                //верхний слева
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55, HeadPosSC.Y - 30));
                                //середина слева
                                draw->PathLineTo(ImVec2(HeadPosSC.X - 55 - 9, HeadPosSC.Y - 20));            
                                draw->PathStroke(HPBordersColor, 5);
                            
                            
                            }*/
                            
                            
                    
								}
                    
                    
                    
                    
                    }
                }
                
                    
        if (Config.ESPMenu.LootBox) {
                            if (Actor->IsA(APickUpListWrapperActor::StaticClass())) {
                                auto LootBox = (APickUpListWrapperActor *) Actor;
                                auto RootComponent = Actor->RootComponent;
                                if (!RootComponent)
                                    continue;
                                float Distance = LootBox->GetDistanceTo(localPlayer) / 300.f;

                                FVector2D lootboxPos;
                                if (W2S(LootBox->K2_GetActorLocation(), &lootboxPos)) {
                                    std::string s = "盒子";
                                    s += "-";
                                    s += std::to_string((int) Distance);
                                    s += "";

                                    draw->AddText(NULL, ((float) density / 20.0f),
                                                  {lootboxPos.X, lootboxPos.Y},
                                                  IM_COL32(255,255,255, 255), s.c_str());
                                }
                            }
                        }



            if (Config.ESPMenu.Vehicle || Config.ESPMenu.Vehicle || Config.ESPMenu.VehicleHp)
                    {
                        if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass()))
                        {
                            auto Vehicle = (ASTExtraVehicleBase *)Actors[i];
                            if (!Vehicle->Mesh)
                                continue;
                            int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
                            int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
                            long curHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0, 155);
                            float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
                            FVector2D vehiclePos;
                            if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
                            {
                                auto mWidthScale = std::min(0.10f * Distance, 50.f);
                                auto mWidth = 70.f - mWidthScale;
                                auto mHeight = mWidth * 0.15f;
                                if (Config.ESPMenu.Vehicle)
                                {
                                    std::string s = GetVehicleName(Vehicle);
                                    s += ":";
                                    s += std::to_string((int)Distance);
                                    s += "M";
                                    draw->AddText(NULL, ((float)density / 30.0f), {vehiclePos.X - (mWidth / 2), vehiclePos.Y}, ToColor(Config.ColorsESP.Vehicle), s.c_str());
                                }
                                if (Config.ESPMenu.Vehicle)
                                {
                                    std::string sf;
                                    sf += "Fuel:";
                                    sf += std::to_string((int)(100 * Vehicle->VehicleCommon->Fuel / Vehicle->VehicleCommon->FuelMax));
                                    sf += "";
                                    draw->AddText(NULL, ((float)density / 30.0f), {vehiclePos.X - (mWidth / 2), vehiclePos.Y + 15.f}, IM_COL32(255,255,000, 200), sf.c_str());
                                }
                                if (Config.ESPMenu.VehicleHp)
                                {
                                    ImVec2 vStart = {vehiclePos.X - (mWidth / 2), vehiclePos.Y - (mHeight * 1.5f)};
                                    ImVec2 vEndFilled = {vStart.x + (CurHP * mWidth / MaxHP), vStart.y + mHeight};
                                    ImVec2 vEndRect = {vStart.x + mWidth, vStart.y + mHeight};
                                    draw->AddRectFilled(vStart, vEndFilled, curHP_Color, 3.2f, 240);
                                    draw->AddRect(vStart, vEndRect, IM_COL32(000, 000, 000, 255), 3.2f, 240);
                                }
                            }
                        }
					}
					


                                       if (Actors[i]->IsA(APickUpWrapperActor::StaticClass())) {
                            auto PickUp = (APickUpWrapperActor *) Actors[i];
                            if (Items[PickUp->DefineID.TypeSpecificID]) {
                                auto RootComponent = PickUp->RootComponent;
                                if (!RootComponent)
                                    continue;

                                float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;

                                FVector2D itemPos;
                                if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
                                    std::string s;

                                    for (auto &category : items_data) {
                                        for (auto &item : category["Items"]) {
                                            if (item["itemId"] == PickUp->DefineID.TypeSpecificID) {
                                                s = item["itemName"].get<std::string>();
                                                break;
                                            }
                                        }
                                    }

                                    s += "-";
                                    s += std::to_string((int) Distance);
                                    s += "M";

                                    draw->AddText(NULL, ((float) density / 25.0f), {itemPos.X, itemPos.Y}, ToColor(ItemColors[PickUp->DefineID.TypeSpecificID]), s.c_str());
                                }
                            }
                        }
                        
                                        if (Config.HighRisk.Recoil || Config.HighRisk.Shake || Config.HighRisk.Instant) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                if (Config.HighRisk.Recoil) {
                                    memset(&ShootWeaponEntityComp->RecoilInfo, 0,
                                           sizeof(FSRecoilInfo));

                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;

                                    memset(&ShootWeaponEntityComp->DeviationInfo, 0,
                                           sizeof(FSDeviation));

                                    ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                    ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                    ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;

                                    ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;

                                    ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                    ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;

                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }
                                
                                
                                if (美国地震哥) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 99999.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 99999.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 99999.0f;
                                }
                                
                                if (美国地震哥) {
                                    memset(&ShootWeaponEntityComp->RecoilInfo, 0,
                                           sizeof(FSRecoilInfo));

                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 99999.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 99999.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 99999.0f;

                                    memset(&ShootWeaponEntityComp->DeviationInfo, 0,
                                           sizeof(FSDeviation));

                                    ShootWeaponEntityComp->ShotGunCenterPerc = 99999.0f;
                                    ShootWeaponEntityComp->ShotGunVerticalSpread = 99999.0f;
                                    ShootWeaponEntityComp->ShotGunHorizontalSpread = 99999.0f;

                                    ShootWeaponEntityComp->GameDeviationFactor = 99999.0f;
                                    ShootWeaponEntityComp->GameDeviationAccuracy = 99999.0f;

                                    ShootWeaponEntityComp->CrossHairInitialSize = 99999.0f;
                                    ShootWeaponEntityComp->CrossHairBurstSpeed = 99999.0f;
                                    ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 99999.0f;
                                    ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 99999.0f;

                                    ShootWeaponEntityComp->RecoilKickADS = 99999.0f;
                                }
                                

                                if (Config.HighRisk.Shake) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }

                          /*      if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->ExtraHitPerformScale = X特效;
                                }*/
                                 if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->ExtraHitPerformScale = 50.0f;
                                }

                                if (Config.HighRisk.Instant) {
                                    ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;

                                }
                            }
                        }
                    }
                }
                    }