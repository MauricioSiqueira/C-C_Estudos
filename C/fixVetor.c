#include <stdio.h>
#include <stdlib.h>
#define TAM 3
void main(){
    //crie um algoritmo que leia 3 valores  para um vetor de 3 posições 
    //e depois calcule a media dos valores acessando o vetor
    int vetor[3], cont, med;
    for(cont = 0; cont < 3; cont++){
        printf("Digite o valor do indice %d .:", cont);
        scanf("%d", &vetor[cont]);
    }
    printf("%d",vetor[0]);
    printf("%d",vetor[1]);
    printf("%d",vetor[2]);
    med = (vetor[0]+ vetor[1]+ vetor[2])/3;
    printf("%d", med);

    for(cont = 0; cont < TAM; cont++){
        printf("\nPosicao %d : %d", cont, vetor[cont] );
    }
    //Lendo 3 valores para o vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }
    //Imprimindo vetor em um laço de repetição
    for(cont = 0; cont < TAM; cont++){
        printf("\nPosicao %d : %d", cont, vetor[cont] );
    }
}