#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos 
    setlocale(LC_ALL, "");

    //crie um algoritmo que leia dois valores e depois 
    //crie um menu (usando switch case ) de 4 opcoes 
    // soma,diff, divisao e multiplicacoa 
    // depois que o usuario escolher a opcao mostre o
    // resultado da operacao escolhida com os dois valores lidos 
    float value1, value2, result;
    char opcao;
    printf(" -------Calculator 2k23 C ltd Edition------- \n");
    printf("Escolha abaixo  a operacao que deseja realizar\n");
    printf("[+] - Soma\n");
    printf("[-] - Subtracao\n");
    printf("[*] - Multiplicacao\n");
    printf("[/] - Divisao\n");
    printf("Qual operacaoo deseja realizar ? ");
    fflush(stdin);// limpador dos buffers de entrada de dados para o tipo char 
    scanf("%c", &opcao);

    printf("Digite o primeiro valor da operação: ");
    scanf("%f", &value1);

    printf("Digite o primeiro valor da operação: ");
    scanf("%f", &value2);
    switch(opcao){
        case '+':// caso o cliente digite o caractere '+' vira para esse case e somara os valores que ele digitou 
            result = value1+value2;
            printf("%.2f" , result);
            break;
        case '-':// caso o cliente digite o caractere '-' vira para esse case vai subtrair  os valores que ele digitou
            result = value1-value2;
            printf("%.2f" , result);
            break;
        case '*':// caso o cliente digite o caractere '*' vira para esse case e multiplicara os valores que ele digitou
            result = value1*value2;
            printf("%.2f" , result);
            break;
        case '/':// caso o cliente digite o caractere '/' vira para esse case e vai dividir os valores que ele digitou
            if(value2 != 0){
                result = value1/value2;
                printf("%.2f" , result);
                break;
            }
            else{
                printf("Divisoes por 0 não existem");
                break;
            }
        default:// default é uma saida caso nao seja digitado nenhum dos casos acimas, tipo o ultimo else de um if.
            printf("opcao invalida");
            break;
    }   
}