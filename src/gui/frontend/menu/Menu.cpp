#include "gui.h"
#include "../external/imgui/imgui.h"

void GUI::RenderMenu() {
    // Define o tamanho inicial da janela do menu
    ImGui::SetNextWindowSize(ImVec2(400, 300), ImGuiCond_FirstUseEver);

    // Cria a janela principal com o título
    ImGui::Begin("Meu Menu Personalizado", nullptr, ImGuiWindowFlags_NoCollapse);

    // Secção de Visualização (ESP)
    if (ImGui::CollapsingHeader("Opções de ESP", ImGuiTreeNodeFlags_DefaultOpen)) {
        // Exemplo de caixas de seleção (Checkboxes)
        // Substitua 'variables.espEnabled' pelas variáveis reais do seu projeto
        ImGui::Checkbox("Ativar Caixa (Box ESP)", &variables.espEnabled);
        ImGui::Checkbox("Mostrar Nome dos Jogadores", &variables.espPlayerName);
        ImGui::Checkbox("Mostrar Vida (HP)", &variables.espPlayerHealth);
    }

    // Informação de rodapé
    ImGui::Separator();
    ImGui::Text("Estado: Ativo | Pressione Insert para abrir/fechar");

    ImGui::End();
}
