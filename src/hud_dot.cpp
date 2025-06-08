#include "hud_dot.h"
#include <spdlog/spdlog.h>
#include <imgui.h>

void render_dot_imgui(const struct overlay_params& params)
{
    auto it = params.options.find("dot");
    if (it == params.options.end() || it->second != "1")
        return;

    // Example: Red dot at top-left
    ImVec2 pos = ImVec2(200.0f, 200.0f); // Safe center-ish position
    float radius = 40.0f;
    ImU32 color = IM_COL32(255, 0, 0, 255);  // Opaque red
    ImDrawList* draw_list = ImGui::GetForegroundDrawList();
    draw_list->AddCircleFilled(pos, radius, color);

}

