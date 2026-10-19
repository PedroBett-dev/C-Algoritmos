// 1) Escreva um programa que leia 10 números inteiros e conte quantos deles são
// múltiplos de 3.

#include<stdio.h>

int main() {

    int quantidade_de_numeros_multiplos_de_tres = 0;
    int numero_autal;
    int i;

    for(i=1;i<=10;i++){

        numero_autal = 0;
        printf("Digite o %i numero \n", i);
        scanf("%i", &numero_autal);

        if(numero_autal % 3 == 0){
            quantidade_de_numeros_multiplos_de_tres++;
        }

    }

    printf("A quantidade de numeros multiplos de 3 digitada eh %i", quantidade_de_numeros_multiplos_de_tres);

    return 0;
}