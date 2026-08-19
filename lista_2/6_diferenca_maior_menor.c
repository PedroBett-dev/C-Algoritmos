#include<stdio.h>

//6) Ler dois valores numéricos e apresentar a diferença do maior para o menor.

int main() {

   int num1;
   int num2;

   printf("Digite o primeiro numero: ");
   scanf("%i", &num1);

   printf("Digite o segundo numero: ");
   scanf("%i", &num2);

   if(num1 > num2){
      printf("A diferenca de %i e %i eh %i\n", num1, num2, num1-num2);
   } else {
      printf("A diferenca de %i e %i eh %i\n", num2, num1, num2-num1);
   }

   return 0;
}