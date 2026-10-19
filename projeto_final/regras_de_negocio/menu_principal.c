// Função: Regras de negocio atreladas à Tela do menu principal do programa
#include<stdio.h>
#include"..\headers\menu_principal.h"

int opcao_cadastrar_produto() {
    
}

int executa_opcao_do_menu(int opcao_selecionada) {

    if(opcao_selecionada == 0){
        return 0;
    }

    switch( opcao_selecionada ){
        case 1:
            opcao_cadastrar_produto();
            break;

        default:
            printf("%i", opcao_selecionada);
    }

    
    return 1;

}