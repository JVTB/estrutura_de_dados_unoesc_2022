#include <stdio.h>
#include "Calculos.h"

void soma()
{
    float a = 0;
    float b = 0;
    float soma = 0;


    printf("Digite A \n");
    scanf_s("%d", &a);
    printf("Digite B: \n");
    scanf_s("%d", &b);

    soma = a + b;

    printf("A soma é %2.f\n", soma);
    
}

void subtracao()
{
    float a = 0;
    float b = 0;
    float subtracao = 0;


    printf("Digite A \n");
    scanf_s("%f", &a);
    printf("Digite B: \n");
    scanf_s("%f", &b);

    subtracao = (float)a - (float)b;

    printf("A subtração é %.2f \n", subtracao);

}

void conversao()
{
    float b = 0;
    //char texto unico digito exemplo: "a"//
    //bool or boolean verdadeiro ou false//
    float conversao = 0;


    printf("Digite a temperatura em Fahrenheit: ");
        scanf_s("%f", &b);
    
        conversao = (b - 32) * 5 / 9;

    printf("A temperatura em Graus Celsius é %.2f\n", conversao);
}