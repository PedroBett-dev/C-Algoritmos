// 3) Crie um programa que peça um número inteiro positivo ao usuário e calcule o
// seu fatorial (ex: (5! = 5 x 4 x 3 x 2 x 1)).

#include<stdio.h>

int main() {

    int fatorial = 1;
    int numero;
    int i;

    printf("Digite um numero\n");
    scanf("%i",&numero);

    for(i=numero;i>=1;i--) {
        fatorial = fatorial*i;
    }

    printf("%i! = %i", numero, fatorial);

    return 0;
}
