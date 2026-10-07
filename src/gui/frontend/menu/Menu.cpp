#include "Menu.hpp"
#include "../../../external/imgui/imgui.h"

void Menu::Render() {
    ImGui::SetNextWindowSize(ImVec2(400, 300), ImGuiCond_FirstUseEver);
    ImGui::Begin("Meu Menu Personalizado", nullptr, ImGuiWindowFlags_NoCollapse);

    if (ImGui::CollapsingHeader("Opções de ESP", ImGuiTreeNodeFlags_DefaultOpen)) {
        ImGui::Checkbox("Ativar Caixa (Box ESP)", &variables.espEnabled);
        ImGui::Checkbox("Mostrar Nome", &variables.espPlayerName);
        ImGui::Checkbox("Mostrar Vida", &variables.espPlayerHealth);
    }

    ImGui::Separator();
    ImGui::Text("Estado: Ativo | Pressione Insert");
    ImGui::End();
}
