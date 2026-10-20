#include<stdio.h>


int printa_referencia(int valor){
   valor = 2;
   return 0;
}

int main() {
   int valor = 1;

   printa_referencia(&valor);

   printf("%i\n",valor);

   return 0;
}