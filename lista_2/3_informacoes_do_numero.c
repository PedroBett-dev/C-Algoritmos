#include<stdio.h>

//3) Leia um número inteiro e mostre uma mensagem indicando se este número
//   é positivo ou negativo, e em seguida se o mesmo número é par ou ímpar
//   (utilize o operador MOD %).

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