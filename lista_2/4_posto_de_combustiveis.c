#include<stdio.h>
#include <stdlib.h>

//4) Construa um programa que determine quanto será gasto para encher o
//   tanque de um carro, sabendo-se que o preço da gasolina é de R$ 6,50 e o
//   preço do álcool é de R$ 4,50. O usuário fornecerá os seguintes dados: Tipo
//   de carro (G – gasolina ou A – álcool) e a capacidade do tanque em litros.

#define PRECO_ATUAL_GASOLINA 6.50
#define PRECO_ATUAL_DISEL    5.80
#define PRECO_ATUAL_ALCOOL   4.50

char seleciona_conversao() {
    char selecao;

    printf("[G] Abastecer usado Gasolina\n"         );
    printf("[D] Abastecer usado Disel\n"            );
    printf("[A] Abastecer usado Alcool\n"           );
    printf("[ ] Obrigado, nao vou abastecer hoje\n" );

    scanf("%c", &selecao);

    return selecao;
}

int abastece_gasolina(){
    int quantidade_gasolina;

    printf("Digite a quantidade em litros a ser abastecida de gasolina: ");
    scanf("%i", &quantidade_gasolina);
    printf("O total do abastecimento deu %f" , quantidade_gasolina*PRECO_ATUAL_GASOLINA);

    return 0;
}

int abastece_disel(){
    int quantidade_disel;

    printf("Digite a quantidade em litros a ser abastecida de disel: ");
    scanf("%i", &quantidade_disel);
    printf("O total do abastecimento deu %f" , quantidade_disel*PRECO_ATUAL_DISEL);

    return 0;
}

int abastece_alcool(){
    int quantidade_alcool;

    printf("Digite a quantidade em litros a ser abastecida de alcool: ");
    scanf("%i", &quantidade_alcool);
    printf("O total do abastecimento deu %f" , quantidade_alcool*PRECO_ATUAL_ALCOOL);

    return 0;
}


int main(){

    while(1) {

        char escolha = seleciona_conversao();

        switch(escolha)
        {
            case 'G':
            case 'g':
                abastece_gasolina();
                break;

            case 'D':
            case 'd':
                abastece_disel();
                break;

            case 'A':
            case 'a':
                abastece_alcool();
                break;

            default:
                exit(0);

        }

    }
}