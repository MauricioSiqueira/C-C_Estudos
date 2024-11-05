#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    // Para usar acentos 
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 valores e informe se eles sao iguais entre si para formarem um triangulo equilatero
    // Um triângulo é equilátero quando possui todos os lados congruentes, ou seja, todos os lados têm as mesmas medidas, e cada lado mede 60º.
    float lado_A, lado_B, lado_C;
    printf("Lado A do triangulo: ");
    scanf("%f", &lado_A);

    printf("Lado B do triangulo: ");
    scanf("%f", &lado_B);

    printf("Lado C do triangulo: ");
    scanf("%f", &lado_C);

    if (lado_A == lado_B && lado_A == lado_C && lado_B == lado_C)// usa de comparacao AND e OR para verificar se o triangulo é equilatero 
    {
        printf("Aqui temos um triangulo equilatero, pois todos seus lados tem medidas iguais");
        printf("\nmedida dos lados ABC,respectivamente.: %.1f %.1f %.1f", lado_A, lado_B, lado_C);
    }
    else if (lado_A == lado_B && lado_C != lado_B || lado_A == lado_C && lado_C != lado_B || lado_C == lado_B && lado_B != lado_A)// usa de comparacao AND e DIFERENT para verificar se o triangulo é isosceles 
    {
        printf("Aqui temos um triangulo isosceles, pois se tem dois lados de medidas iguais e um lado de medida diferente");
        printf("\nmedida dos lados ABC,respectivamente.: %.1f %.1f %.1f", lado_A, lado_B, lado_C);
    }
    else if(lado_A != lado_B && lado_A != lado_C && lado_B != lado_C)// usa de comparacao AND e DIFERENT para verificar se o triangulo é escaleno 
    {
        printf("Aqui temos um triangulo escaleno , pois todos os lados sao de medidas diferentes");
        printf("\nmedida dos lados ABC,respectivamente.: %.1f %.1f %.1f", lado_A, lado_B, lado_C);
    }
}
