//第一步
cfg.SizePixels = ((float) density / 25.0f);
Snowflake::CreateSnowFlakes(Snow, SNOW_LIMIT, 5.f/*by吉良*/, 25.f/*maximum size*/, 0/*imgui window x position*/, 0/*imgui window y position*/, glWidth, glHeight, Snowflake::vec3(0.f, 0.005f)/*gravity*/, IM_COL32(99, 124, 146, 50)/*by吉良*/);
//加到字体那边



//第二步
ImGuiViewportP* viewport = (ImGuiViewportP*)ImGui::GetMainViewport();
    
					ImRect viewport_rect = viewport->GetMainRect();
			
					Snowflake::Update(Snow, Snowflake::vec3(ImGui::GetCursorPos().x, ImGui::GetCursorPos().y)/*mouse x and y*/, Snowflake::vec3(viewport_rect.Min.x, viewport_rect.Max.y)/*by吉良*/); // by吉良
	//加到卡密验证底下
	
	
	//第三步
	#include "Snowflake.hpp"
	#define SNOW_LIMIT 300
	//加到偏移上面
	
	
	
	//第五步
	Snowflake.cpp \
	//加到Android.mk里面