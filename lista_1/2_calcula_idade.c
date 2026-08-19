#include<stdio.h>

//2) Faça um programa em linguagem C que calcule a idade de uma pessoa,
//   lendo o ano atual e o ano de nascimento, apresentar a idade da pessoa calculada.

main(){
    int ano_nascimento;
    int ano_atual;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Voce atualmente tem %i anos.", ano_atual - ano_nascimento);
}
