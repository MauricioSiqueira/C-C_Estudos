#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    // para colocar a linguagem do codigo em pt-br
    setlocale(LC_ALL,"");

    // crie um algoritmo que leia 2 notas e mostre o valor absoluto da diff entre elas
    int n1, n2, result;// guarda os valores da nota e da diferenca, com um tipo de variavel inteira 
    printf("Primeira nota: ");
    scanf("%d",&n1);
    printf("Segunda nota: ");
    scanf("%d",&n2);
    result = n1 - n2;
    printf("A diferenca entre %d e %d eh igual a: %d", n1, n2, abs(result));// abs serve para obtermos o valor absoluto(modulo)
}