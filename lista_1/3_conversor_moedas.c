#include<stdio.h>

//3) Faça um programa em linguagem C que realize a conversão de um valor em dólares para real.
//   O programa recebe o valor em dólares e a cotação, depois calcula o valor em reais

main() {
    int cotacao_atual;
    int moedas_para_conversao;

    printf("Digite a cotacao atual da moeda: ");
    scanf("%d", &cotacao_atual);
    printf("Digite a quantidade de moedas que deseja fazer a conversao: ");
    scanf("%d", &moedas_para_conversao);

    printf("A conversao de %i moedas na cotacao de %i ficara: %i", moedas_para_conversao, cotacao_atual, moedas_para_conversao*cotacao_atual );
}