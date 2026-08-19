#include<stdio.h>
//2) Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o
//   número lido como sendo um valor positivo, ou seja, o programa deverá
//   apresentar o módulo de um número fornecido (se o número fornecido é
//   menor que zero, multiplique-o por -1).

void main(){

    int numero_a_converter;
    int modulo;

    printf("Digite um numero: ");
    scanf("%i", &numero_a_converter);

    modulo = numero_a_converter;

    if(numero_a_converter<0){
        modulo = modulo * -1;
    }

    printf("O modulo de %i eh: %i", numero_a_converter, modulo);
}