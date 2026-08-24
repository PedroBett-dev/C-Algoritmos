#include<stdio.h>
#include"lib7.h"

int precisa_de_recuperacao(float *a){
    float media_antiga = (a[POSICAO_1_PROVA] + a[POSICAO_2_PROVA])/2;

    return media_antiga<MEDIA_ESPERADA;
}
