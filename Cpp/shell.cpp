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

void shell_sort(int vetor[TAM])
{
    int i, j, h =1;
    int atual;

    while (h < TAM)
    {
        h = h*3+1;
    }

    while ( h >1) 
    {
        h = h/3;
        for (i =h; i < TAM; i++)
        {
        atual = vetor[i];
        j = i -h;

        while (j >=0 && (atual < vetor[j]))
        {
            vetor[j+1] = vetor[j];
            j-=h;
        }

        vetor[j+h] = atual;
        imprimeVetor(vetor);
        cout << "\n";
    }
    }
    
    

}

int main(){

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprimeVetor(vetor);
    shell_sort(vetor);
    imprimeVetor(vetor);
    return 0;
}