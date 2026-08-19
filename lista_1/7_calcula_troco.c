#include<stdio.h>
#include<stdlib.h>

//7)Faça um programa que deve calcular o total da compra de um produto recebendo como informações, o
//   valor e a quantidade deste produto. Em seguida, será informado o valor pago e o sistema deve calcular e mostrar o troco.

void main() {

    int quantidade_produto;
    float preco_produto;
    float pagamento_cliente;
    float total_troco;

    printf("Digite a quantidade do produto que voce deseja comprar: ");
    scanf("%i", &quantidade_produto);

    printf("Digte o preco do produto: ");
    scanf("%f", &preco_produto);

    while(1){

        printf("Digte o valor pago pelo cliente: ");
        scanf("%f", &pagamento_cliente);

        total_troco = pagamento_cliente - ( quantidade_produto * preco_produto );

        if (total_troco < 0){
            printf("Nao Ã© possivel fazer fiado, ainda falta %.2f para dar o valor da compra total\n", (total_troco*-1));
        } else {
            printf("Pagamento bem sucedido, seu troco Ã© de %.2f\n", total_troco);
            break;
        };

        system("clear");

    }



}