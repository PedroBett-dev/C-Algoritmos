#include<stdio.h>

//10)Ler dois valores para as variáveis A e B, efetuar a troca dos valores de forma que a variável A passe a possuir
//   o valor da variável B e que a variável B passe a possuir o valor da variável A. Apresentar no final os valores trocados.

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