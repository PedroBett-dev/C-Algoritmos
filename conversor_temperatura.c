#include<stdio.h>

// TODO: Arrumar a compilaçao pois ainda nao esta compilando

int escolha_conversao() {

    int choice;

    printf("[1] Conversao de Fahrenheit para Celcius\n");
    printf("[2] Conversao de Celcius para Fahrenheit\n");
    printf("[3] Sair do programa\n");

    scanf("%i", &choice);

    return choice;

}

void converte_Fahrenheit_Celcius() {

    int temperatura_celcius;

    printf("Digite a temperatura em Celcius");
    scanf("%i", &temperatura_celcius);

    printf("A temperatura em Fahrenheit é: %f", calcula_fahrenheit_de_celcius(temperatura_celcius));

}

void converte_Celcius_Fahrenheit() {

    int temperatura_fahrenheit;

    printf("Digite a temperatura em Fahrenheit");
    scanf("%i", &temperatura_fahrenheit);

    printf("A temperatura em Celcius é: %f", calcula_celcius_de_fahrenheit(temperatura_fahrenheit));

}

float calcula_fahrenheit_de_celcius(temperatura_celcius) {
    return (9 * temperatura_celcius + 160) / 5;
}

float calcula_celcius_de_fahrenheit(temperatura_fahrenheit) {
    return (temperatura_fahrenheit - 32) * (5 / 9);
}

int main() {

    int choice;

    while(1){

        choice = escolha_conversao();

        switch (choice)
        {
            case 1:
                converte_Fahrenheit_Celcius();

            case 2:
                converte_Celcius_Fahrenheit();

            default:
                break;
        }

    }
    

}

