#include<stdio.h>
#include<stdlib.h>
#include"lib7.h"

void limpa_tela(){
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

}

int atribui_valores_array_notas(float *a, float prova_1, float prova_2, float faltas_1, float faltas_2)
{
    a[POSICAO_1_PROVA] = prova_1;
    a[POSICAO_2_PROVA] = prova_2;
    a[POSICAO_1_FALTA] = faltas_1;
    a[POSICAO_2_FALTA] = faltas_2;

    return 0;
}

float* retorna_array_respectivo_bimestre(int bimestre){
    
    switch(bimestre);
    {
        case 1:
            return notas_1_bim;

        case 2:
            return notas_2_bim;

        case 3:
            return notas_3_bim;

        default:
            return notas_4_bim;

    }

}