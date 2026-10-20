#include<stdio.h>
#include "lib7.h"

int pega_dados_por_prova(float *prova, float *faltas){

    int faltas_int;

    printf("Digite a nota da prova: ");
    scanf("%f", prova);
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas_int);
    limpa_tela();

    *faltas = (float)faltas_int;

    return 0;

}

int faz_recuperacao(float *a){
    float nota_recuperacao;

    printf("Digite a nota da prova recuperacao: ");
    scanf("%f\n", &nota_recuperacao);

    if(nota_recuperacao>a[POSICAO_1_PROVA]){

        a[POSICAO_1_PROVA] = nota_recuperacao;

    } else if(nota_recuperacao>a[POSICAO_2_PROVA]){

        a[POSICAO_2_PROVA] = nota_recuperacao;

    }

    return 0;

}

int insercao_de_notas(int bimestre){

    float prova_1, faltas_1;
    float prova_2, faltas_2;

    float media_final, faltas_final;

    float *array_cobaia = retorna_array_respectivo_bimestre(bimestre);

    printf("--- NOTAS DO %i BIMESTRE ---\n", bimestre);

    pega_dados_por_prova(&prova_1, &faltas_1);
    pega_dados_por_prova(&prova_2, &faltas_2);

    atribui_valores_array_notas(array_cobaia, prova_1, prova_2, faltas_1, faltas_2);

    if(precisa_de_recuperacao(array_cobaia)){
        faz_recuperacao(array_cobaia);
    }

    return 0;

}