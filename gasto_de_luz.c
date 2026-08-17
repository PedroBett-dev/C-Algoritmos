#include<stdio.h>

void main() {
    float gasto_total_conta_agua;

    printf("Quanto voce gastou com agua esse mes:");
    scanf("%f", &gasto_total_conta_agua);

    if(gasto_total_conta_agua>=50.00){
        printf("Voce esta gastando muito, da uma manerada ai pai");
    } else {
        printf("Ta tudo certo meu rapaz, %.2f ainda esta suave", gasto_total_conta_agua);
    }

}