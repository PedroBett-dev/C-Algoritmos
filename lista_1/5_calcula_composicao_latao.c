#include<stdio.h>

//5)Sabendo que um latão é constituído de 70% de cobre e 30% de zinco, indique a quantidade de
//  cada um desses componentes para se obter uma certa quantidade de latão informada pelo usuário.

#define PORCENTAGEM_COBRE 0.70
#define PORCENTAGEM_ZINCO 0.30

int main() {

    float latao;

    printf("Digite a quantidade (em gramas) de latao que deseja fazer:");
    scanf("%f", &latao);

    printf("A quantidade de cobre necessaria e:%.2f\n", latao*PORCENTAGEM_COBRE );
    printf("A quantidade de zinco necessaria e:%.2f"  , latao*PORCENTAGEM_ZINCO );

}