#include <string>
#include <new>
#include <iostream>
#include <stdlib.h>
#define TAM 11

using namespace std;

void imprime_vetor(int vector[TAM]){
    //auxiliar contador
    int cont;

    for(cont=0; cont <TAM; cont++){
            cout << vector[cont] << "-";
        }
}

int busca_bi(int valorProcurado, int vector[TAM], int *posicao){

    //definindo os limites laterais e o cursor 
    int left = 0;
    int right = TAM -1; 
    int cursor;

    while(left <= right){

        cursor = (left + right)/2;
        // verifica se o valor procurado é o valor do meio da lista
        if(vector[cursor] == valorProcurado){
            *posicao = cursor;
            return 1;
        }

        if(vector[cursor] < valorProcurado){
            left = cursor +1;
        }else{
            right = cursor -1;
        }
    }
    return -1;
}

int main(void){

    int vector[TAM] = {10,20,30,40,50,60,70,80,90,100,110};
    int vProcurado, posicaoEncontrada;

    imprime_vetor(vector);

    cout << "\nDigite o valor que deseja encontrar: ";
    cin >> vProcurado;
    //scanf("%d", &vProcurado)

    if (busca_bi(vProcurado, vector, &posicaoEncontrada) == 1)
    {
        cout << "\nO valor "<< vProcurado<<" foi encontrado na posicao: "<<posicaoEncontrada;
    }else{
        cout <<"Valor "<<vProcurado<< " nao foi encontrado";
    }

    return 0;
}