// Função: Tela do menu principal do programa

#include<stdio.h>
#include"..\headers\menu_principal.h"

int escreve_menu_principal() {

    printf("+---- Cadastro de Produtos ----+ \n");
    printf("|                              | \n");
    printf("|       1 - Cadastrar          | \n");
    printf("|       2 - Alterar            | \n");
    printf("|       3 - Excluir            | \n");
    printf("|       0 - Sair               | \n");
    printf("|                              | \n");
    printf("+------------------------------+ \n");

    return 0;

}

int menu_principal(int *opcao_selecionada){
    
    *opcao_selecionada = 0;
    
    escreve_menu_principal();   
    scanf("%i",opcao_selecionada);

    return 0;

}