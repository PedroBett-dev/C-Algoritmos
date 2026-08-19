#include<stdio.h>

main() {
    
    float total_da_venda;
    float comissao;
    float porcentagem_comissao;

    printf("Digite a porcentagem da comissao: ");
    scanf("%f", &comissao);

    printf("Digite o total da venda para calcular a comissao: ");
    scanf("%f", &total_da_venda);
    
    porcentagem_comissao = comissao/100;

    printf("O total da comissao sera de: %f", total_da_venda*porcentagem_comissao );

}
