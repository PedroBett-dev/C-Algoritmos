#include<stdio.h>
#include<stdlib.h>

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
            printf("Nao é possivel fazer fiado, ainda falta %.2f para dar o valor da compra total\n", (total_troco*-1));
        } else {
            printf("Pagamento bem sucedido, seu troco é de %.2f\n", total_troco);
            break;
        };

        system("clear");

    }

    

}