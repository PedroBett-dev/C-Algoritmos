#include<stdio.h>

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