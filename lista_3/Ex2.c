// 2) Faça um programa que leia a idade de 5 pessoas e calcule a média aritmética
// dessas idades.

#include <stdio.h>

#define TOTAL_DE_PESSOAS 5

int main() {

    double media_idades;
    int total_idades = 0;
    int idade_pessoa_atual;
    int i;

    for(i = 1; i <= TOTAL_DE_PESSOAS; i++) {

        printf("Digite a idade da %i pessoa: ", i);
        scanf("%d", &idade_pessoa_atual);

        total_idades = total_idades + idade_pessoa_atual;           
    }

    media_idades = (double)total_idades / TOTAL_DE_PESSOAS;
 
    printf("\nA media de idades das %d pessoas eh: %.2f\n", TOTAL_DE_PESSOAS, media_idades);

    return 0;
}
