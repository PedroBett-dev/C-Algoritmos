#include<stdio.h>

//6)Efetuar a leitura de um número inteiro e apresentar o resultado do quadrado deste número.

int main() {

    int num;

    printf("Digite um numero para obter o seu quadrado:");
    scanf("%d", &num);

    printf("O quadrado de %d eh: %d\n", num, num*num);

}