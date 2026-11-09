#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

/*- Declaração de variaveis publicas ---------------------*/

struct produto {
    int   id;
    char  descricao[50];
    float preco;
    int   estoque;
};

struct produto produtos[100];
int tamanho_produtos = 0;

/*- Funcoes variadas (util) ------------------------------*/
void limpa_tela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void logger(char mensagem[]){

    int c;
    while ((c = getchar()) != '\n' && c != EOF); 

    limpa_tela();

    printf("+");
    for(int i=1; i<=strlen(mensagem)+10;i++){
        printf("-");
    };
    printf("+\n");

    printf("|         ");
    printf(mensagem);
    printf("         |\n");

    printf("+");
    for(int i=1; i<=strlen(mensagem)+10;i++){
        printf(" ");
    };
    printf("+\n");

    printf("+");
    for(int i=1; i<=strlen(mensagem)+10;i++){
        printf("-");
    };
    printf("+\n");

    printf("\nTECLE QUALUQER TECLA PARA CONTINUAR...");
    
    getchar();
    
    limpa_tela();
}

/*- Funcoes de banco de dados ----------------------------*/
int produto_ja_cadastrado(int id){

    for(int i=0; i<=tamanho_produtos; i++){
        if(id == produtos[i].id){
            return 1;
        }
    }
    return 0;
    
}

/*- Funcoes do menu principal ----------------------------*/
void apresenta_menu_principal() {
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

/*- Funcoes de cadastro ----------------------------------*/
int Cadastrar(){
    
    while(1){
        char mensagem_erro[50];

        limpa_tela();
        struct produto produto;

        printf("Digite o codigo do produto\n");
        scanf("%i", &produto.id);

        if(produto.id<=0){
            logger("O ID do produto deve ser maior do que 0!");
        };

        if(1/*produto_ja_cadastrado(produto.id)*/){
            snprintf(mensagem_erro, sizeof(mensagem_erro), "Produto com ID %i ja cadastrado!", produto.id);
            logger(mensagem_erro);
        };

        if(sizeof(produto.id)>6){
            logger("O ID produto nao deve ser maior que 6 digitos!");
        };

        printf("Digite a descricao do produto\n");
        fgets(produto.descricao, sizeof(produto.descricao), stdin); 

        if(sizeof(produto.descricao)==0){
            logger("A descricao do produto nao pode ser vazia");
        };

        printf("Digite o preco do produto\n");
        scanf("%f", &produto.preco);

        if(produto.preco<=0){
            logger("O preco do produto deve ser maior que 0!");
        };

        printf("Digite o estoque do produto\n");
        scanf("%i", &produto.estoque);

        if(produto.estoque<0){
            logger("O estoque do produto deve ser maior que 0!");
        };

        tamanho_produtos++;
        return 0;
        
    }
}

int Consultar(){
    return 0;
}

int Listar(){
    return 0;
}

int Remover(){
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
        default:
            return 0;
    }
    return 1;

}

/*- Inicia execução --------------------------------------*/
int main() {

    int OpcaoSelecionada;

    do{ 

        OpcaoSelecionada = 0;
        apresenta_menu_principal();   
        scanf("%i",&OpcaoSelecionada);

    } while(

        executa_funcao_do_menu(OpcaoSelecionada)

    );

    limpa_tela();
    return 0;
}