// Função: Iniciar programa de cadastro de produtos

#include<stdio.h>
#include"headers/menu_principal.h"
#include"structs/produto.c"

produto Banco[100];

int main(){

    int opcao_selecionada;

    do{ menu_principal(&opcao_selecionada); } while ( executa_opcao_do_menu(opcao_selecionada) );
    return 0;

}