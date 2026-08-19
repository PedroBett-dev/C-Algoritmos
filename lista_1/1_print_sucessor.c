#include<stdio.h>

//1) Leia um numero e exiba seu sucessor

main(){
	int num = 0;

	printf("Digite um numero: ");
	scanf("%i", &num);

	printf("Seu sucessor eh: %i", ++num);
}
