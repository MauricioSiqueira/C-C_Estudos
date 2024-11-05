#include <stdio.h>
#include <stdlib.h>

void main(){

    int vetor[3], cont;// declarando um vetor de 3 espaços 
    // um vetor como funciona como  uma lista, onde o index inicial é sempre 0
    vetor[0]= 1;// atribuindo valores a cada espaco de um vetor 
    vetor[1]= 2;
    vetor[2]= 3;

    //printf("%d", vetor[1]);

    // imprimindo um vetor em um laco de repetiçao 
    for(cont=0; cont <3; cont++){
        printf("%d",vetor[cont]);
    }
}