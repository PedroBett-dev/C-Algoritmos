#include<stdio.h>

void main(){
    int numero;
    
    printf("Digite um numero:");
    scanf("%i", &numero);

    printf("O numero %i ", numero);

    if(numero<0){
        printf("eh negativo ");
    } else {
        printf("eh positivo ");
    }

    if(numero%2==0){
        printf("e par");
    } else {
        printf("e impar");
    }
}