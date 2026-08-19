#include<stdio.h>

//1)Faça um programa que leia o valor de uma conta de luz e, caso o valor seja
//  maior que R$ 50,00 apresente a mensagem: “Você está gastando muito”.
//  Caso contrário exiba a mensagem: “Seu gasto foi normal”.

#define GASTO_MAXIMO_CONTA_DE_LUZ 50.00

void main() {
    float gasto_total_conta_agua;

    printf("Quanto voce gastou com agua esse mes:");
    scanf("%f", &gasto_total_conta_agua);

    if(gasto_total_conta_agua>=GASTO_MAXIMO_CONTA_DE_LUZ){
        printf("Voce esta gastando muito, da uma manerada ai pai");
    } else {
        printf("Ta tudo certo meu rapaz, %.2f ainda esta suave", gasto_total_conta_agua);
    }

}