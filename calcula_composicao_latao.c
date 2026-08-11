#include<stdio.h>

#define PORCENTAGEM_COBRE 0.70
#define PORCENTAGEM_ZINCO 0.30

int main() {

    float latao;

    printf("Digite a quantidade (em gramas) de latao que deseja fazer:");
    scanf("%f", &latao);

    printf("A quantidade de cobre necessaria e:%.2f\n", latao*PORCENTAGEM_COBRE );
    printf("A quantidade de zinco necessaria e:%.2f"  , latao*PORCENTAGEM_ZINCO );
    
}