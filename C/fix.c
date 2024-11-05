#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main (){

    // usa-se para fazer o codigo rodar em portugues brasil com acentos 
    setlocale(LC_ALL, "");

    // Crie um algoritmo que leia 2 notas e mostre a media entre elas

    float n1, n2, resultado;// guarda as variaveis do tipo float que vao ser usadas para calcular a media de dois valores 
    printf(" -------Escola Madalena Sofia------- \n");
    printf("Primeira nota: ");
    scanf("%f", &n1);// entrada de uma variavel do tipo float (%f) e guarda ela no endereco de memoria de n1(&n1, significa que o valor recebido vai ser guardado no endereco do valor n1)

    //lendo o segundo valor 
    printf("Segunda  nota: ");
    scanf("%f", &n2);

    resultado = (n1+n2)/2;// resolve a expressao da media entre dois valores seguindo as regras de ordem matematica 
    printf("A media entre as notas %f e %f eh: %f",n1, n2, resultado);

}   