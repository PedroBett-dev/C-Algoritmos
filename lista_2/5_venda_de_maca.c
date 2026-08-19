#include<stdio.h>
#include <stdlib.h>

//5) As maçãs custam R$ 1,30 cada, se forem compradas menos de uma dúzia,
//   e R$ 1,00 cada, se forem compradas pelo menos 12. Escreva um programa
//   que leia o número de maçãs compradas, calcule e mostre o custo total da
//   compra.

#define PRECO_MACA_NORMAL   1.30
#define PRECO_MACA_PROMOCAO 1.00

#define QUANTIDADE_PARA_APLICAR_PROMOCAO 12

int main() {

   int quantidade_de_macas;

   printf("Quantas macas voce deseja comprar?");
   scanf("%i", &quantidade_de_macas);

   if(quantidade_de_macas >= QUANTIDADE_PARA_APLICAR_PROMOCAO){
      printf("Otimo!! %i macas tem um desconto aplicavel, por isso sua compra saiu por apenas %.2f\n", quantidade_de_macas, quantidade_de_macas*PRECO_MACA_PROMOCAO);
   } else {
      printf("Muito bom, sua compra saiu %.2f\n",quantidade_de_macas*PRECO_MACA_PROMOCAO);
   }

   return 0;
}