#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
    int   id;
    char  descricao[50];
    float preco;
    int   estoque;
};

struct produto produtos[100];
int tamanho_produtos = 0;

void limpa_tela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void espera_enter(){

    char lixo[100];

    printf("\nTECLE ENTER PARA CONTINUAR...");

    fgets(lixo, sizeof(lixo), stdin);
    fgets(lixo, sizeof(lixo), stdin);

    // Professor, Confesso que isso para esperar a tecla do usuario eu pesquisei da internet para ficar legal a execução!!!
    // Valeuuu
}

void apresenta_mensagem_na_tela(char mensagem[]){

    limpa_tela();

    printf("%s", mensagem);
    printf("\n");
    printf("\n");

    espera_enter();

    limpa_tela();
}

int busca_indice_produto(int id){

    for(int i=0; i<tamanho_produtos; i++){
        if(id == produtos[i].id){
            return i;
        }
    }
    return -1;

}

void imprime_produto(struct produto p){
    printf("Codigo....: %i\n", p.id);
    printf("Descricao.: %s\n", p.descricao);
    printf("Preco.....: R$ %.2f\n", p.preco);
    printf("Estoque...: %i\n", p.estoque);
}

int le_codigo_e_busca(){

    int id = 0;

    printf("Digite o codigo do produto\n");
    scanf("%i", &id);

    int indice = busca_indice_produto(id);
    if(indice == -1){
        apresenta_mensagem_na_tela("Produto nao encontrado!");
    }
    return indice;
}

void apresenta_menu_principal() {

    limpa_tela();

    printf("+---- Cadastro de Produtos ----+ \n");
    printf("|                              | \n");
    printf("|       1 - Cadastrar          | \n");
    printf("|       2 - Consultar          | \n");
    printf("|       3 - Listar             | \n");
    printf("|       4 - Remover            | \n");
    printf("|       0 - Sair               | \n");
    printf("|                              | \n");
    printf("+------------------------------+ \n");
}

int Cadastrar(){

    if(tamanho_produtos >= 100){
        apresenta_mensagem_na_tela("Limite de 100 produtos atingido!");
        return 0;
    }

    limpa_tela();
    struct produto produto = {0};

    printf("Digite o codigo do produto\n");
    scanf("%i", &produto.id);
    getchar();

    printf("Digite a descricao do produto\n");
    fgets(produto.descricao, sizeof(produto.descricao), stdin);

    int tamanho = strlen(produto.descricao);
    if(tamanho > 0 && produto.descricao[tamanho-1] == '\n'){
        produto.descricao[tamanho-1] = '\0';
    }

    printf("Digite o preco do produto\n");
    scanf("%f", &produto.preco);

    printf("Digite o estoque do produto\n");
    scanf("%i", &produto.estoque);

    produtos[tamanho_produtos] = produto;
    tamanho_produtos++;
    apresenta_mensagem_na_tela("Produto cadastrado com sucesso!");
    return 0;
}

int Consultar(){

    limpa_tela();

    if(tamanho_produtos == 0){
        apresenta_mensagem_na_tela("Nenhum produto cadastrado!");
        return 0;
    }

    int indice = le_codigo_e_busca();
    if(indice == -1){
        return 0;
    }

    limpa_tela();
    printf("+------ Consulta de Produto ------+\n\n");
    imprime_produto(produtos[indice]);
    espera_enter();

    return 0;
}

int Listar(){

    limpa_tela();

    if(tamanho_produtos == 0){
        apresenta_mensagem_na_tela("Nenhum produto cadastrado!");
        return 0;
    }

    printf("%-8s %-50s %12s %8s\n", "CODIGO", "DESCRICAO", "PRECO", "ESTOQUE");
    printf("-------------------------------------------------------------------------------------\n");
    for(int i=0; i<tamanho_produtos; i++){
        printf("%-8i ", produtos[i].id);
        printf("%-50s ", produtos[i].descricao);
        printf("%12.2f ", produtos[i].preco);
        printf("%8i\n", produtos[i].estoque);
    }
    printf("-------------------------------------------------------------------------------------\n");
    printf("Total de produtos: %i\n", tamanho_produtos);

    espera_enter();

    return 0;
}

int Remover(){

    limpa_tela();

    if(tamanho_produtos == 0){
        apresenta_mensagem_na_tela("Nenhum produto cadastrado!");
        return 0;
    }

    int indice = le_codigo_e_busca();
    if(indice == -1){
        return 0;
    }

    limpa_tela();
    imprime_produto(produtos[indice]);
    printf("\nConfirma a remocao deste produto? (s/n)\n");

    char resposta = 'n';
    scanf(" %c", &resposta);

    if(resposta != 's' && resposta != 'S'){
        apresenta_mensagem_na_tela("Remocao cancelada.");
        return 0;
    }

    for(int i=indice; i<tamanho_produtos-1; i++){
        produtos[i] = produtos[i+1];
    }
    tamanho_produtos--;

    apresenta_mensagem_na_tela("Produto removido com sucesso!");
    return 0;
}

int executa_funcao_do_menu(int OpcaoSelecionada){

    switch(OpcaoSelecionada)
    {
        case 1:
            Cadastrar();
            break;
        case 2:
            Consultar();
            break;
        case 3:
            Listar();
            break;
        case 4:
            Remover();
            break;
        case 0:
            return 0;
        default:
            apresenta_mensagem_na_tela("Opcao invalida!");
            break;
    }
    return 1;

}

int main() {

    int OpcaoSelecionada;

    do{

        OpcaoSelecionada = -1;
        apresenta_menu_principal();
        scanf("%i",&OpcaoSelecionada);

    } while(

        executa_funcao_do_menu(OpcaoSelecionada)

    );

    limpa_tela();
    return 0;
}