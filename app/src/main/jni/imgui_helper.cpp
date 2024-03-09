#include <cmath>
#define IMGUI_DEFINE_MATH_OPERATORS
#include <imgui_headers.h>
#include <ctime>
#include <map>
#include <queue>
#include <android/native_window.h>
#include <android/input.h>
#include <android/keycodes.h>
#include <android/log.h>
using namespace ImGui;

#define ICON_FA_CIRCLE_CHECK "\xef\x81\x98" // U+f058
#define ICON_FA_CIRCLE_XMARK "\xef\x81\x97"	// U+f057

struct WindowData
{
    ImGuiID m_id;
    bool m_collapsed;
};

ImVec2 DisplayScale;
std::vector <WindowData*> g_window_data;
WindowData* GMyWindowData;

bool ImGuiHelper::getCollapsed() {
    return GMyWindowData->m_collapsed;
}

float ImGuiHelper::getWidth() {
	return ImGui::GetContentRegionAvail().x;
}
float ImGuiHelper::getHeight() {
	return ImGui::GetContentRegionAvail().y;
}

float clamp(float n, float min, float max) {
	return (std::max)(min, (std::min)(n, max));
}

float ImGuiHelper::scaleX(float x)
{
	return x * DisplayScale.x;
}

float ImGuiHelper::scaleY(float y)
{
    return y * DisplayScale.y;
}

void ImGuiHelper::SetScale(const ImVec2& Scale)
{
	DisplayScale = Scale;
}

void ImGuiHelper::drawTabHorizontally(std::string childName, ImVec2 childSize, std::vector<std::string>tabNames, int& selectedSubTab, ImVec4 col) {
	int length = tabNames.front().length(); // get shortest string length
	int strIndex = 1;
	for (int i = 1; i < tabNames.size(); i++) {
		if (length > tabNames.at(i).length()) {
			length = tabNames.at(i).length();
			strIndex = i;
		}
	}

	ImGui::BeginChild(childName.c_str(), childSize, true, ImGuiWindowFlags_HorizontalScrollbar);

	int minWidth = ImGuiHelper::getTextLength(tabNames.at(strIndex).c_str()).x;
	int maxWidth = 200;

	int btnWidth = (ImGuiHelper::getWidth() - ImGui::GetStyle().ItemSpacing.x * (tabNames.size())) / tabNames.size();
	int btnHeight = clamp(ImGuiHelper::getHeight(), 20, 60);
	btnWidth = (std::max)(minWidth, (std::min)(btnWidth, maxWidth));

	{ // center buttons
		// tell Dear ImGui to render the button at the new pos
		ImGui::SetCursorPosX((childSize.x - btnWidth * tabNames.size() - ImGui::GetStyle().ItemSpacing.x) / 2);
	}

	ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 5); // round buttons
	for (int i = 0; i < tabNames.size(); i++) {
		std::string it = tabNames.at(i);
		ImGui::PushStyleColor(ImGuiCol_Button, selectedSubTab == i ? ImGui::GetStyle().Colors[ImGuiCol_ButtonActive] : ImGui::GetStyle().Colors[ImGuiCol_Button]);
		ImGui::PushStyleColor(ImGuiCol_Text, selectedSubTab == i ? ImGui::GetStyle().Colors[ImGuiCol_Text] : col);


		if (ImGui::Button(it.c_str(), ImVec2(btnWidth, btnHeight))) selectedSubTab = i;
		ImGui::SameLine();
		ImGui::PopStyleColor(2);

	}
	ImGui::PopStyleVar();

	ImGui::EndChild();
}

ImVec4 ImGuiHelper::hexToVec4(int hexValue)
{
  int A = (hexValue & 0xFF000000) >> 24;  // Extract the AA byte
  int R = (hexValue & 0x00FF0000) >> 16;  // Extract the RR byte
  int G = (hexValue & 0x0000FF00) >> 8;   // Extract the GG byte
  int B = (hexValue & 0x000000FF) >> 0;   // Extract the BB byte
			
  return ImVec4(R / 255.f, G / 255.f, B / 255.f, A / 255.f);
}
ImVec4 ImGuiHelper::rgbaToVec4(float r, float g, float b, float a) {
	return ImVec4(r / 255.f, g / 255.f, b / 255.f, a / 255.f);
}
ImVec4 ImGuiHelper::rgbaToVec4(ImColor& col) {
	return col.Value;
}

ImVec2 ImGuiHelper::getTextLength(std::string text) {
	return ImGui::CalcTextSize(text.c_str());
}

void ImGuiHelper::renderCombo(std::string title, std::vector<std::string>items, int& index, int comboWidth) {
	ImGui::PushItemWidth(comboWidth);
	if (ImGui::BeginCombo(title.c_str(), items.at(index).c_str(), 0)) {

		for (int n = 0; n < items.size(); n++) {
			const bool is_selected = (index == n);
			if (ImGui::Selectable(items.at(n).c_str(), is_selected))index = n;

			if (is_selected)ImGui::SetItemDefaultFocus();// Set the initial focus when opening the combo (scrolling + keyboard navigation focus)
		}
		ImGui::EndCombo();
	}
	ImGui::PopItemWidth();
}

bool ImGuiHelper::Button(ImFont *fontBtn, const char *label, ImVec2 size)
{
    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, scaleX(8.0f));
    ImGui::PushFont(fontBtn);
    bool ret = ImGui::Button(label, size);
    ImGui::PopFont();
    ImGui::PopStyleVar();
    return ret;
}

bool ImGuiHelper::BeginLogo(ImFont *fontBtn, ImFont* font, ImVec2 size, ImTextureID min_texture, ImTextureID user_texture_id, const char *title, bool show_close_button, ImGuiWindowFlags flags)
{
    ImGuiID id = ImGui::GetID(title);
    auto it = std::find_if(g_window_data.begin(), g_window_data.end(),[&](WindowData * data) {
                           return data->m_id == id;}
    );

    if (it == g_window_data.end())
    {
        g_window_data.push_back(new WindowData{id, false});
        it = g_window_data.end() - 1;
    }

    auto window_data = *it;
	GMyWindowData = *it;
	ImGui::SetNextWindowSize(ImVec2(window_data->m_collapsed ? 100 : size.x, window_data->m_collapsed ? 83 : size.y));
    bool ret = ImGui::Begin(window_data->m_collapsed ? "" : title , nullptr, window_data->m_collapsed ? 
    ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_AlwaysAutoResize| ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar : ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_AlwaysAutoResize| ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);
    if (ret)
    {
		ImGuiIO & io = ImGui::GetIO();
        ImGuiStyle & style = ImGui::GetStyle();
        ImVec2 pos = ImGui::GetCursorScreenPos();
		
		if (!window_data->m_collapsed)
		{
            ImGui::PushFont(font);
            ImGui::Text(title);
            ImGui::PopFont();
            ImGui::SameLine();
            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + ImGui::GetColumnWidth() - ImGui::CalcTextSize("M").x * (show_close_button ? 3.15f : 1.15f) - ImGui::GetScrollX() - 2 * ImGui::GetStyle().ItemSpacing.x);
            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0.0f, 0.0f));
		}
		
        if (window_data->m_collapsed)
        {
            ImGui::PushStyleColor(ImGuiCol_Button, {0,0,0,0});
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, {0,0,0,0});
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, {0,0,0,0});
            if (ImGui::ImageButton(user_texture_id, {70, 70}))
            {
                io.ConfigWindowsMoveFromTitleBarOnly = false;
                window_data->m_collapsed = false;
            }
            ImGui::PopStyleColor(3);
        }
        else
        {
            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, scaleX(8.0f));
            ImGui::PushStyleColor(ImGuiCol_Button, {0,0,0,0});
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, {0,0,0,0});
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, {0,0,0,0});
            auto ret = ImGui::ImageButton(min_texture, {25, 25});
            if (ret)
            //if (Button(fontBtn, ICON_FA_EXPAND, ImVec2(25, 25)))
            {
                io.ConfigWindowsMoveFromTitleBarOnly = false;
                window_data->m_collapsed = true;
            }
            ImGui::PopStyleVar();
            ImGui::PopStyleColor(3);
        }
		if (!window_data->m_collapsed)
            ImGui::PopStyleVar();
    }

    if (window_data->m_collapsed)
    {
        return -2;
    }
    return ret;
}

bool ImGuiHelper::Checkbox_(const char* label, bool* v) {
	if (STYLE == 0) return Checkbox2(label, v);
}

bool ImGuiHelper::SliderFloat_(const char* label, float* v, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) {
	if (STYLE == 0) return SliderFloat_2(label, v, v_min, v_max, format, flags);
}

bool ImGuiHelper::SliderInt_(const char* label, int* v, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) {
	if (STYLE == 0) return SliderInt_2(label, v, v_min, v_max, format, flags);
	//if (STYLE == 1) return SliderInt_2(label, v, v_min, v_max, format, flags);
}

bool ImGuiHelper::Checkbox2(const char* label, bool* v) {
	ImGuiWindow* window = GetCurrentWindow();
	if (window->SkipItems) return false;

	ImGuiContext& g = *GImGui;
	const ImGuiStyle& style = g.Style;
	const ImGuiID id = window->GetID(label);
	const ImVec2 label_size = CalcTextSize(label, NULL, true);

	const float square_sz = GetFrameHeight();
	const ImVec2 pos = window->DC.CursorPos;
	const ImRect total_bb(pos, pos + ImVec2(square_sz + (label_size.x > 0.0f ? style.ItemInnerSpacing.x + label_size.x : 0.0f), label_size.y + style.FramePadding.y * 2.0f));
	ItemSize(total_bb, style.FramePadding.y);
	if (!ItemAdd(total_bb, id))
	{
		IMGUI_TEST_ENGINE_ITEM_INFO(id, label, g.LastItemData.StatusFlags | ImGuiItemStatusFlags_Checkable | (*v ? ImGuiItemStatusFlags_Checked : 0));
		return false;
	}

	bool hovered, held;
	bool pressed = ButtonBehavior(total_bb, id, &hovered, &held);
	if (pressed)
	{
		*v = !(*v);
		MarkItemEdited(id);
	}

	const ImRect check_bb(pos, pos + ImVec2(square_sz, square_sz));
	RenderNavHighlight(total_bb, id);
	RenderFrame(check_bb.Min, check_bb.Max, GetColorU32((held && hovered) ? ImGuiCol_FrameBgActive : hovered ? ImGuiCol_FrameBgHovered : ImGuiCol_FrameBg), true, style.FrameRounding);
	ImU32 check_col = GetColorU32(ImGuiCol_CheckMark);
	bool mixed_value = (g.LastItemData.InFlags & ImGuiItemFlags_MixedValue) != 0;
	if (mixed_value)
	{
		// Undocumented tristate/mixed/indeterminate checkbox (#2644)
		// This may seem awkwardly designed because the aim is to make ImGuiItemFlags_MixedValue supported by all widgets (not just checkbox)
		ImVec2 pad(ImMax(1.0f, IM_FLOOR(square_sz / 3.6f)), ImMax(1.0f, IM_FLOOR(square_sz / 3.6f)));
		window->DrawList->AddRectFilled(check_bb.Min + pad, check_bb.Max - pad, check_col, style.FrameRounding);
	}
	else if (*v)
	{
		const float pad = ImMax(1.0f, IM_FLOOR(square_sz / 6.0f));
		RenderCheckMark(window->DrawList, check_bb.Min + ImVec2(pad, pad), check_col, square_sz - pad * 2.0f);
	}

	ImVec2 label_pos = ImVec2(check_bb.Max.x + style.ItemInnerSpacing.x, check_bb.Min.y + style.FramePadding.y);
	if (g.LogEnabled)
		LogRenderedText(&label_pos, mixed_value ? "[~]" : *v ? "[x]" : "[ ]");
	if (label_size.x > 0.0f)
		RenderText(label_pos, label);

	IMGUI_TEST_ENGINE_ITEM_INFO(id, label, g.LastItemData.StatusFlags | ImGuiItemStatusFlags_Checkable | (*v ? ImGuiItemStatusFlags_Checked : 0));
	return pressed;
}

void ImGuiHelper::LoadingIndicatorCircle(const char *label, const char *overlay, float fraction, const float indicator_radius, const ImVec4 & main_color, const ImVec4 & backdrop_color, const int circle_count, const float speed)
{
    ImGuiWindow *window = GetCurrentWindow();
    if (window->SkipItems)
    {
        return;
    }
    ImGuiContext & g = *GImGui;
    ImGuiStyle & style = g.Style;
    const ImGuiID id = window->GetID(label);

    const ImVec2 pos = window->DC.CursorPos;
    const float circle_radius = indicator_radius / 10.0f;
    const ImRect bb(pos, ImVec2(pos.x + indicator_radius * 2.0f, pos.y + indicator_radius * 2.0f));
    ItemSize(bb, style.FramePadding.y);
    if (!ItemAdd(bb, id))
    {
        return;
    }
    ImVec2 cen = ImGui::GetMainViewport()->GetCenter();
    const ImVec2 center = ImVec2(pos.x + indicator_radius, pos.y + indicator_radius + style.FramePadding.y);
    char overlay_buf[32];
    if (!overlay)
    {
        ImFormatString(overlay_buf, IM_ARRAYSIZE(overlay_buf), "%.0f%%", fraction * 100 + 0.01f);
        overlay = overlay_buf;
    }

    static bool test = false;
    ImVec2 overlay_size = CalcTextSize(overlay, NULL);
    if (overlay_size.x > 0.0f)
    {
        ImGui::SetCursorPosY(100);
        ImGui::PushStyleVar(ImGuiStyleVar_SelectableTextAlign, ImVec2(0.5f + 0.05, 0.0f));
        ImGui::Selectable(overlay, &test);
        ImGui::PopStyleVar();
    }

    const float t = g.Time;
    const auto degree_offset = 2.0f * IM_PI / circle_count;
    for (int i = 0; i < circle_count; ++i)
    {
        const auto x = indicator_radius * std::sin(degree_offset * i);
        const auto y = indicator_radius * std::cos(degree_offset * i);
        const auto growth = std::max(0.0f, std::sin(t * speed - i * degree_offset));
        ImVec4 color;
        color.x = main_color.x * growth + backdrop_color.x * (1.0f - growth);
        color.y = main_color.y * growth + backdrop_color.y * (1.0f - growth);
        color.z = main_color.z * growth + backdrop_color.z * (1.0f - growth);
        color.w = 1.0f;
        window->DrawList->AddCircleFilled(ImVec2(center.x + indicator_radius + x, center.y + indicator_radius - y), circle_radius + growth * circle_radius, GetColorU32(color));
    }
}

void ImGuiHelper::Progress(bool* out)
{
    auto MyStyle = &ImGui::GetStyle();
    ImVec2 center = ImGui::GetMainViewport()->GetCenter();
    ImGui::SetNextWindowPos(center, ImGuiCond_Always, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowSize({200, 200});
    ImGuiWindowFlags window_flags = 0;
    window_flags |= ImGuiWindowFlags_NoBackground;
    window_flags |= ImGuiWindowFlags_NoTitleBar;
    window_flags |= ImGuiWindowFlags_NoMove;
    window_flags |= ImGuiWindowFlags_NoResize;
    window_flags |= ImGuiWindowFlags_NoCollapse;
    window_flags |= ImGuiWindowFlags_NoScrollbar;
    
    ImGui::Begin("Progress Indicators", NULL, window_flags);
    
    ImU32 col = ImGui::GetColorU32(ImGuiCol_ButtonHovered);
    ImU32 bg = ImGui::GetColorU32(ImGuiCol_Button);

    static float progress = 0.0f, progress_dir = 0.50f;
    static bool animate = true;
    if (animate)
    {
        progress += progress_dir * 0.4f * ImGui::GetIO().DeltaTime;
        if (progress >= +1.1f)
        {
            progress = +1.1f;
        }
    }
    float progress_saturated = IM_CLAMP(progress, 0.0f, 1.0f);
    char buf[32];
    sprintf(buf, "%d%s", (int)(progress_saturated * 100), "%");
    
    if ((int)(progress_saturated * 100) != 100)
    {
        LoadingIndicatorCircle("Loading", buf, progress, 50.f, MyStyle->Colors[ImGuiCol_ButtonHovered], MyStyle->Colors[ImGuiCol_Button], 14, 4.5f);
    }
    else
    {
        *out = true;
        /*static bool test = false;
        static float progress2 = 0.0f, progress_dir2 = 0.50f;
        progress2 += progress_dir2 * 0.4f * ImGui::GetIO().DeltaTime;
        if (progress2 >= +1.1f)
        {
            progress2 = +1.1f;
        }
        float progress_saturated_2 = IM_CLAMP(progress2, 0.0f, 1.0f);
        if ((int)(progress_saturated_2 * 40) == 40)
        {
            // True
            *out = true;
        }
        else
        {
            // false
            *out = false;
        }*/
    }
    ImGui::End();
}

bool ImGuiHelper::SliderFloat_3(const char* label, float* v, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) {
	return SliderScalar(label, ImGuiDataType_Float, v, &v_min, &v_max, format, flags);
}

bool ImGuiHelper::SliderFloat_2(const char* label, float* v, float v_min, float v_max, const char* format, ImGuiSliderFlags flags) {
	return SliderScalar(label, ImGuiDataType_Float, v, &v_min, &v_max, format, flags);
}

bool ImGuiHelper::SliderInt_2(const char* label, int* v, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) {
	return SliderScalar(label, ImGuiDataType_S32, v, &v_min, &v_max, format, flags);
}

bool ImGuiHelper::SliderInt_3(const char* label, int* v, int v_min, int v_max, const char* format, ImGuiSliderFlags flags) {
	return SliderScalar(label, ImGuiDataType_S32, v, &v_min, &v_max, format, flags);
}

bool ImGuiTextFilter2::Draw2(const char* label, float width) {
	if (width != 0.0f)
		ImGui::SetNextItemWidth(width);

	std::string id = std::string("##Input_") += label;
	bool value_changed = ImGui::InputTextWithHint(id.c_str(), label, InputBuf, IM_ARRAYSIZE(InputBuf));
	if (value_changed)
		Build();
	return value_changed;
}

void ImGuiHelper::chromaText(std::string text, float sat, float value, float alpha, float offset, float speed, float range) {
	for (int i = 0; i < text.length(); i++) {
		char c = text.c_str()[i];
		std::string s(1, text.at(i));
		ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(-0.5, 4)); // not the best way, calculating string width will be slightly inaccurate
		//float r, g, b;
		//ColorH::HSVtoRGB(ColorH::getTimeHue(i * range, speed, offset), sat, value, r, g, b);
		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255, 255, 255, 255));
		Text(s.c_str());
		ImGui::PopStyleColor();

		if (i != text.length() - 1) ImGui::SameLine();
		ImGui::PopStyleVar();
	}
}


void ImGuiHelper::CircleImageFilled(ImTextureID TextureId, const ImVec2& CentrePos, float fRadius, ImColor Color, int iNumSegments) {

    ImGuiWindow* Window = ImGui::GetCurrentWindow();

    if (Window->SkipItems) {
        return;
    }

    Window->DrawList->PathClear();

    if ((Color & IM_COL32_A_MASK) == 0 || iNumSegments <= 2) {
        return;
    }

    const bool PushTextureId = Window->DrawList->_TextureIdStack.empty() || TextureId != Window->DrawList->_TextureIdStack.back();

    if (PushTextureId) {

        Window->DrawList->PushTextureID(TextureId);
    }

    int VertsStartBufferSize = Window->DrawList->VtxBuffer.Size;
    const float ArcMax = IM_PI * 2.0f * (static_cast<float>(iNumSegments) - 1.0f) / static_cast<float>(iNumSegments);
    Window->DrawList->PathArcTo(CentrePos, fRadius, 0.0f, ArcMax, iNumSegments - 1);
    Window->DrawList->PathFillConvex(Color);
    int VertsEndBufferSize = Window->DrawList->VtxBuffer.Size;

    ImGui::ShadeVertsLinearUV(Window->DrawList, VertsStartBufferSize, VertsEndBufferSize,
        ImVec2{ CentrePos.x - fRadius, CentrePos.y - fRadius }, ImVec2{ CentrePos.x + fRadius,CentrePos.y + fRadius },
        ImVec2{ 0.0f, 0.0f }, ImVec2{ 1.0f, 1.0f }, true);

    if (PushTextureId) {

        Window->DrawList->PopTextureID();
    }
}

void ImGuiHelper::ToggleButton(ImFont* font, const char* label, const char* str_id, bool* v)
{
    ImGui::Text(label);
    ImGui::SameLine();
    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + ImGui::GetColumnWidth() - ImGui::CalcTextSize("M").x * 1.15f - ImGui::GetScrollX() - 5 * ImGui::GetStyle().ItemSpacing.x);
    ImVec4* colors = ImGui::GetStyle().Colors;
    ImVec2 p = ImGui::GetCursorScreenPos();
    ImDrawList* draw_list = ImGui::GetWindowDrawList();

    float height = ImGui::GetFrameHeight();
    height = (height -5);
    float width = height * 1.55f;
    float radius = height * 0.50f;

    ImGui::InvisibleButton(str_id, ImVec2(width, height));
    if (ImGui::IsItemClicked()) *v = !*v;
    ImGuiContext& gg = *GImGui;
    float ANIM_SPEED = 1.085f;
    if (gg.LastActiveId == gg.CurrentWindow->GetID(str_id))// && gg.LastActiveIdTimer < ANIM_SPEED)
        float t_anim = ImSaturate(gg.LastActiveIdTimer / ANIM_SPEED);
    if (ImGui::IsItemHovered()){
        draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), ImGui::GetColorU32(*v ? ImGuiHelper::hexToVec4(0xFF1E90FF) : ImVec4(1.000f, 1.000f, 1.000f, 0.156f)), height * 0.5f);
    } else {
        draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), ImGui::GetColorU32(*v ? ImGuiHelper::hexToVec4(0xFF1E90FF) : ImVec4(1.000f, 1.000f, 1.000f, 0.156f)), height * 0.50f);
    }
    ImVec2 TextSize = font->CalcTextSizeA(12.0f, FLT_MAX, 0.0f, ICON_FA_CIRCLE_CHECK);
    draw_list->AddText(font, 12.0f, ImVec2(p.x + radius + (*v ? 1 : 0) * (width - radius * 2.0f) - TextSize.x / 2.0f, p.y + radius - 5), IM_COL32(255, 255, 255, 255), *v ? ICON_FA_CIRCLE_CHECK : ICON_FA_CIRCLE_XMARK);
}
bool ImGuiHelper::Toggle( const char* label, bool* v )
{
    using namespace ImGui;
    ImGuiWindow* window = GetCurrentWindow( );
    if ( window->SkipItems )
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID( label );
    const ImVec2 label_size = CalcTextSize( label, NULL, true );

    float height = ImGui::GetFrameHeight( );
    const ImVec2 pos = window->DC.CursorPos;

    float width = height * 2.f;
    float radius = height * 0.50f;

    const ImRect total_bb( pos, pos + ImVec2( width + ( label_size.x > 0.0f ? style.ItemInnerSpacing.x + label_size.x : 0.0f ), label_size.y + style.FramePadding.y * 2.0f ) );

    ItemSize( total_bb, style.FramePadding.y );
    if ( !ItemAdd( total_bb, id ) )
        return false;

    float last_active_id_timer = g.LastActiveIdTimer;

    bool hovered, held;
    bool pressed = ButtonBehavior( total_bb, id, &hovered, &held );
    if ( pressed )
    {
        *v = !( *v );
        MarkItemEdited( id );
        g.LastActiveIdTimer = 0.f;
    }

    if ( g.LastActiveIdTimer == 0.f && g.LastActiveId == id && !pressed )
        g.LastActiveIdTimer = last_active_id_timer;

    float t = *v ? 1.0f : 0.0f;

    if ( g.LastActiveId == id )
    {
        float t_anim = ImSaturate( g.LastActiveIdTimer / 0.16f );
        t = *v ? ( t_anim ) : ( 1.0f - t_anim );
    }

    ImU32 col_bg = GetColorU32( ( held && hovered ) ? ImGuiCol_FrameBgActive : hovered ? ImGuiCol_FrameBgHovered : ImGuiCol_FrameBg );

    const ImRect frame_bb( pos, pos + ImVec2( width, height ) );

    RenderFrame( frame_bb.Min, frame_bb.Max, col_bg, true, height * 0.5f );
    RenderNavHighlight( total_bb, id );

    ImVec2 label_pos = ImVec2( frame_bb.Max.x + style.ItemInnerSpacing.x, frame_bb.Min.y + style.FramePadding.y );
    RenderText( label_pos, label );
    window->DrawList->AddCircleFilled( ImVec2( pos.x + radius + t * ( width - radius * 2.0f ), pos.y + radius ), radius - 1.5f, ImGui::GetColorU32( ImGuiCol_CheckMark ), 36 );

    return pressed;
}

/*
 * Get X, Y positions and ID's for all pointers
 */

