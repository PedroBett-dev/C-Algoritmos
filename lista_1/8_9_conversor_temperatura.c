#include<stdio.h>
#include <stdlib.h>

//8)Faça um programa que converta a temperatura de graus Celsius para graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
//  onde F é a temperatura em Fahrenheit e C é a temperatura em Celsius.

//9)Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula de conversão é: C = (F – 32) * (5 / 9),
//  onde F é a temperatura em Fahrenheit e C é a temperatura em Celsius.

int escolha_conversao() {

    int choice;

    printf("[1] Conversao de Fahrenheit para Celcius\n");
    printf("[2] Conversao de Celcius para Fahrenheit\n");
    printf("[3] Sair do programa\n");

    scanf("%1i", &choice);

    return choice;

}

float calcula_fahrenheit_de_celcius(float temperatura_celcius) {
    return (9 * temperatura_celcius + 160) / 5;
}

void converte_Fahrenheit_Celcius() {

    float temperatura_celcius;

    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &temperatura_celcius);

    printf("A temperatura em Fahrenheit Ã©: %.2f\n", calcula_fahrenheit_de_celcius(temperatura_celcius));

}

float calcula_celcius_de_fahrenheit(float temperatura_fahrenheit) {
    return (temperatura_fahrenheit - 32) * (5 / 9);
}

void converte_Celcius_Fahrenheit() {

    float temperatura_fahrenheit;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_fahrenheit);

    printf("A temperatura em Celcius Ã©: %.2f\n", calcula_celcius_de_fahrenheit(temperatura_fahrenheit));

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
                exit(0);
        }

    }


}

