#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";
    for(i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}

void merge(int vetor[TAM], int inicio, int meio, int fim){
    int i, j, k = inicio;
    int n1 = meio - inicio + 1; //Tamaho do primeiro vetor auxiliar
    int n2 = fim - meio;        //Tamaho do segundo vetor auxiliar

    int vetorEsquerdo[n1], vetorDireito[n2];

    for(i = 0; i < n1; i++)
        vetorEsquerdo[i] = vetor[inicio + i];

    for(j = 0; j < n2; j++)
        vetorDireito[j] = vetor[meio + 1 + j];
    
    i = 0;
    j = 0;
    while(i < n1 && j < n2){

        //Caso o valor na esquerda seja menor
        if(vetorEsquerdo[i] <= vetorDireito[j]){
            //Passa para o meu vetor principal o valor menor
            vetor[k] = vetorEsquerdo[i];

            //Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
            i++;
        } else{

            //Passa para o meu vetor principal o valor menor
            vetor[k] = vetorDireito[j];

            //Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
            j++;
        }

        //Aumenta o índice de posicionamento do vetor
        k++;
    }

    //Se faltarem alguns elemntos do array ESQUERDO passa eles para o array principal
    while(i < n1){
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }

    //Se faltarem alguns elemntos do array DIREITO passa eles para o array principal
    while(j < n2){
        vetor[k] = vetorDireito[j];
        i++;
        k++;
    }
}
void merge_sort(int vetor[TAM], int inicio, int fim){
    if (inicio < fim){
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(vetor, inicio, meio);
        merge_sort(vetor, meio+1, fim); 
        merge(vetor, inicio, meio, fim);
    }
}

int main(){

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprimeVetor(vetor);
    merge_sort(vetor, 0, TAM -1);
    imprimeVetor(vetor);
    return 0;
}