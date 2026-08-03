#import<stdio.h>

main(){
	int num = 0;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	printf("Seu sucessor eh: %i", ++num);
}
