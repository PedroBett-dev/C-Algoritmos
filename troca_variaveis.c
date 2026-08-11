#include<stdio.h>

int main() {

    int var_a;
    int var_b;
    int var_transicao;

    printf("digite o valor da variavel A: ");
    scanf("%i", &var_a);

    printf("digite o valor da variavel B: ");
    scanf("%i", &var_b);

    var_transicao = var_a;
    var_a = var_b;
    var_b = var_transicao;

    printf("A agora vale %i, e B agora vale %i\n", var_a, var_b);

}