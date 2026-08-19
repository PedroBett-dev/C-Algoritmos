#include<stdio.h>

//4)Faça um programa em linguagem C que calcule o pagamento de comissão de vendedores,
//  levando-se em consideração que sua comissão será de 5% do total da venda, o usuário

//Fiz deixando a comissão a escolha do usuario

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
