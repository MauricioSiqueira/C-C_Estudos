#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor(int vector[TAM])
{
    //auxiliar contador
    int cont;

    for(cont=0; cont <TAM; cont++)
    {
        cout << vector[cont] << "-";
    }
}

void insersion( int vector[TAM]){
    int i, j, atual;

    for (i =1; i < TAM; i++){
        atual = vector[i];
        j = i -1;

        while (j >=0 && (atual < vector[j]))
        {
            vector[j+1] = vector[j];
            j--;
        }

        vector[j+1] = atual;
        imprime_vetor(vector);
        cout << "\n";
    }
}

int main(void){
    int vector[TAM] = {10,9,8,7,6,5,4,3,2,1};
    insersion(vector);
    return 0;
}