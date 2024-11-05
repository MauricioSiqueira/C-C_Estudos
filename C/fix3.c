#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");// Coloca o codigo na linguagem do pc

    //crie um algoritmo que leia 3 valores em uma so linha 
    // coloque o resultado da multiplicacao em variavel propria 
    // exiba o valor da variavel da multiplicacao 

    int v1, v2, v3, multi;// guarda os valores das variaveis no tipo primitivo inteiro
    printf("Digite 3 valores que voce deseja multiplicar:");
    scanf("%d %d %d", &v1, &v2, &v3);// le tres valores de uma vez em um so scan 
    multi = v1*v2*v3;
    printf("O valor da multiplicacao de %d, %d por %d e igual a: %d", v1, v2, v3, multi);
    
}