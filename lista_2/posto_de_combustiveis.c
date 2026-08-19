#include<stdio.h>
#include <stdlib.h>

#define PRECO_ATUAL_GASOLINA 6.50
#define PRECO_ATUAL_DISEL    6.50
#define PRECO_ATUAL_ALCOOL   6.50

int seleciona_conversao() {
    int selecao;

    printf("[1] Abastecer usado Gasolina\n"         );
    printf("[2] Abastecer usado Disel\n"            );
    printf("[3] Abastecer usado Alcool\n"           );
    printf("[4] Obrigado, nao vou abastecer hoje\n" );

    scanf("%1i", &selecao);

    return selecao;
}

void abastece_gasolina(){
    int quantidade_gasolina;

    printf("Digite a quantidade em litros a ser abastecida de gasolina: ");
    scanf("%i", &quantidade_gasolina);
    printf("O total do abastecimento deu %f" , quantidade_gasolina*PRECO_ATUAL_GASOLINA);
}

void abastece_disel(){
    int quantidade_disel;

    printf("Digite a quantidade em litros a ser abastecida de disel: ");
    scanf("%i", &quantidade_disel);
    printf("O total do abastecimento deu %f" , quantidade_disel*PRECO_ATUAL_DISEL);
}

void abastece_alcool(){
    int quantidade_alcool;

    printf("Digite a quantidade em litros a ser abastecida de alcool: ");
    scanf("%i", &quantidade_alcool);
    printf("O total do abastecimento deu %f" , quantidade_alcool*PRECO_ATUAL_ALCOOL);
}


int main(){

    int selecao;

    while(1) {
        selecao = seleciona_conversao();

        switch (selecao)
        {
            case 1:
                abastece_gasolina();
                break;

            case 2:
                abastece_disel();
                break;

            case 3:
                abastece_alcool();
                break;

            default:
                exit(0);

        }

    }
}