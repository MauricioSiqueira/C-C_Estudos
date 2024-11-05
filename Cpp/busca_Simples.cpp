#include <string>
#include <new>
#include <iostream>
#include <stdlib.h>
#define TAM 10

using namespace std;
void imprime_vetor(int vector[TAM]){
    //auxiliar contador
    int cont;

    for(cont=0; cont <TAM; cont++){
            cout << vector[cont] << "-";
        }
}

int busca_simples(int valorProcurado, int vector[TAM], int *posicao){
    int cont;
    bool valorEncontrado;

    //busca simples 
    for(cont=0; cont <TAM; cont++){
        if(vector[cont] == valorProcurado){
            valorEncontrado = true;
            *posicao= cont;
        } 
    }
    if(valorEncontrado){
        return 1;
    }else{
        return -1;
    }
}

int main(void){

    int vector[TAM] = {1,2,3,4,5,6,7,8,9,10};
    int vProcurado, posicaoEncontrada;

    imprime_vetor(vector);

    cout << "\nDigite o valor que deseja encontrar: ";
    cin >> vProcurado;
    //scanf("%d", &vProcurado)

    if (busca_simples(vProcurado, vector, &posicaoEncontrada))
    {
        cout << "\nO valor "<< vProcurado<<" foi encontrado na posicao: "<<posicaoEncontrada;
    }else{
        cout <<"Valor "<<vProcurado<< " nao foi encontrado";
    }

    return 0;
}