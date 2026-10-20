// Função: Exportar as funções públicas para outras rotinas

#ifndef MENU_PRINCIPAL
#define MENU_PRINCIPAL

        int menu_principal(int *opcao_selecionada);        // Executa o menu, mostra a tela, e pega a opção selecionada
        int executa_opcao_do_menu(int opcao_selecionada);  // Executa a regra de negócio do menu. Chama as funções das opções do menu

#endif