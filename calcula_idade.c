#include<stdio.h>

main(){
    int ano_nascimento;
    int ano_atual;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Voce atualmente tem %i anos.", ano_atual - ano_nascimento);
}
