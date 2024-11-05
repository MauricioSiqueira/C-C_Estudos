#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAM 3
// crie um programa que leia nome, peso e idade de 3 pessoas e salve todos em uma lista usando structs
// primeiro leia o nome
// depois a idade
// depois o peso da pessoa

struct Pessoa{
    float Peso;
    int idade;
    char nome[100];
};

typedef struct Pessoa Pessoas;

int main(){

    struct Pessoa lista[TAM];
    int i;
    
    for(i=0;i<TAM;i++){
        printf("Numero do cliente(%d)\n ", i+1);
        puts("Nome :");
        scanf("%[^\n]s", lista[i].nome);
        //strcpy(lista[i].nome, "mauricio");
        fflush(stdin);

        puts("Idade : ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso :");
        scanf("%f", &lista[i].Peso);
        fflush(stdin);
    }

    for(i=0;i<TAM;i++){
        printf("\n------------- Pessoa %d -------------\n", i+1);
        printf("Nome : %s\n", lista[i].nome);
        printf("Idade : %d\n", lista[i].idade);
        printf("Peso : %.2f", lista[i].Peso);
    }

    return 0;
}