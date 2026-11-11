#include"stdio.h"
#include"../structs/produto.c"

int opcao_cadastrar_produto() {

   produto produto;

   printf("Digite o nome do produto");
   fgets(produto.nome, sizeof(produto.nome), stdin);

   printf("Digite o preco do produto");
   scanf("%f", &produto.preco);

   AdicionaProdutoNoBanco(&produto);

}