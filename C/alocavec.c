#include <stdio.h>
#include <stdlib.h>

// alocação dimanica de um vetor
int* alocaVetor(int x){// funcao que reporta um ponteiro 
    int *aux;

    aux = (int*) malloc(x * sizeof(int));// int* é o casting q forca a o retorno da posição da memoria 
    // malloc recebe o x que é o tamanho do vetor vezes o sizeof(int), que é o tamanho de bits de um inteiro na memoria do pc


    return aux;
}


int  main(void){
int *vector, tam, i;

printf("Qual vai o tamanho do seu vetor: ");
scanf("%d", &tam);
vector = alocaVetor(tam);

vector[0] = 1;
vector[1] = 2;
vector[2] = 3;
vector[3] = 4;

for(i =0; i <tam; i++){
    printf("%d\n", vector[i]);
}

free( vector );// libera a memoria que o vetor estava consumindo
return 0;
}
