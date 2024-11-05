#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM  10

using namespace std;

bool verifica_pilha_vazia(int topo){

    if(topo == -1){
        return true;
    }else{
        return false;
    }

}

void pula_linha(){// funcao para quebra de linhas 
    cout << "\n";
}

void imprime_vetor(int vector[TAM]){
    //auxiliar contador
    int cont;
    for(cont=0; cont <TAM; cont++) // funcao que imprime o vetor que guarda os valores da pilha 
    {
        cout << vector[cont] << "-";
    }
    cout <<"\n";
}

void pilha_push(int pilha[TAM], int valor, int *topo){
    // verifica se a pilha está cheia
    if(*topo == TAM -1)// se o topo for igual ao index maximo do vetor a pilha está lotada 
    {
        cout << "A pilha está cheia";
    }
    else
    {
        *topo +=1;// o topo vai sendo atualizado para mais um, exp no inicio topo = -1(pilha vazia) depois da execucao dessa funcao topo recebe -1 + 1, logo o topo é o index 0 e assim por diante 
        pilha[*topo] = valor;// guarda na pilha na posicao de valor topo o valor que a funcao recebeu 
    }

}

void pilha_pop(int pilha[TAM], int *topo){

    if(*topo == -1){// verifica se a pilha está vazia, index negativo, pilha n preenchida 
        cout << "A pilha está vazia!!";
    }else{
        cout << " Valor retirado: " << pilha[*topo];// retira o ultimo valor da pilha, pois pilha é uma FILO ou LIFO, que é o ultimo a entrar é o primeiro a sair SEMPRE
        pilha[*topo] = 0;// o ultimo valor vai sendo substituido por zero 
        *topo-=1;// o topo vai sendo decrementado até ele atingir o valor -1(pilha vazia)
    }
}

int main(void){

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;
    int cont;

    imprime_vetor(pilha);
    while (topo < TAM-1)
    {
        pilha_push(pilha, 5, &topo);
        imprime_vetor(pilha);
    }

    pula_linha();
    imprime_vetor(pilha);
    pula_linha();


    for (cont=0; cont <= TAM; cont++){
        pilha_pop(pilha, &topo);
        pula_linha();
        imprime_vetor(pilha);
    }

    return 0;
}