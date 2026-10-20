#include<stdio.h>
#include<stdlib.h>
#include "lib7.h"

// 7) Ler quatro valores referentes a quatro notas escolares de um aluno e
//    imprimir uma mensagem dizendo que o aluno foi aprovado, se o valor da
//    média for maior ou igual a 6. Se o aluno não foi aprovado, indicar uma
//    mensagem informando esta condição. Imprimir sempre junto com a
//    mensagem, a média do aluno.

float notas_1_bim[QUANTIDADE_DE_POSICOES_ARRAY];
float notas_2_bim[QUANTIDADE_DE_POSICOES_ARRAY];
float notas_3_bim[QUANTIDADE_DE_POSICOES_ARRAY];
float notas_4_bim[QUANTIDADE_DE_POSICOES_ARRAY];

int seleciona(int bimestre){

    int selecao;

    printf("[1] Inserir nota para o bimestre %i\n", bimestre);
    printf("[2] Sair do programa\n"                         );

    scanf("%1i", &selecao);

    return selecao;

}

int main() {

    for (int bimestre = 1; bimestre <= 4; bimestre++) {

        int escolha = seleciona(bimestre);

        switch(escolha)
        {
            case 1:
                insercao_de_notas(bimestre);

            default:
                return 0;
        }

    }

    return 0;
}

