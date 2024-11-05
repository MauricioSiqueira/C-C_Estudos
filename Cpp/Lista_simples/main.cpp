#include <iostream>
#include <string>
#include <new>
#include <stdlib.h>
#include <vector>

using namespace std;
using std:: vector;

struct pessoa
{
    double Cpf;
    string Nome;
};

void add_node_N( pessoa *&pontSequencial ,string name, double cpf, int *tamList, int posicao){
    pessoa *NewList = new pessoa[*tamList+1];

    for(int i=0; i < posicao; i++){
        NewList[i].Nome = pontSequencial[i].Nome;
        NewList[i].Cpf = pontSequencial[i].Cpf;
    }

    NewList[posicao].Nome = name;
    NewList[posicao].Cpf = cpf;

    for(int i=posicao; i < *tamList; i++){
        NewList[i].Nome = pontSequencial[i].Nome;
        NewList[i].Cpf = pontSequencial[i].Cpf; 
    }
    pontSequencial = NewList;
    *tamList =*tamList+1;
}

void add_node_inicial( pessoa *&pontSequencial ,string name, double cpf, int *tamList){

    if(*tamList == 0){
        pessoa *NewList = new pessoa[1];
        NewList[0].Nome = name;
        NewList[0].Cpf = cpf;

        pontSequencial = NewList;// atualiza a lista principal da func main
    }else{
        // caso já haja uma lista com membros 
        pessoa *NewList = new pessoa[*tamList +1];

        NewList[0].Nome = name;
        NewList[0].Cpf = cpf;

        for (int cont=0; cont < *tamList; cont++)// preenche a nova lista com o nome e o rg recebidos pela func
        {
            NewList[cont +1].Nome = pontSequencial[cont].Nome;
            NewList[cont +1].Cpf = pontSequencial[cont].Cpf;
        }

        pontSequencial = NewList;// atualiza a lista principal da func main
    }
    *tamList = *tamList +1;// atualiza o tamanho da lista por referencia, para que o novo tamanho va para a func main
    
}

void add_node_final( pessoa *&pontSequencial ,string name, double cpf, int *tamList){

    pessoa *NewList = new pessoa[*tamList +1];
    for (int i = 0; i <= *tamList -1; i++)
    {
        NewList[i].Nome = pontSequencial[i].Nome;
        NewList[i].Cpf = pontSequencial[i].Cpf;
    }
    NewList[*tamList].Nome = name;
    NewList[*tamList].Cpf = cpf;
    pontSequencial = NewList;
    *tamList = *tamList +1;

}

void delete_node_inicial(pessoa *&pontSequencial, int *tamList){
    pessoa *NewList = new pessoa[*tamList -1];

    for(int i=0; i <= *tamList; i++){
        NewList[i].Nome = pontSequencial[i+1].Nome;
        NewList[i].Cpf = pontSequencial[i+1].Cpf;
    }
    pontSequencial = NewList;
    *tamList = *tamList - 1;
}

void delete_node_final(pessoa *&pontSequencial, int *tamList){
    pessoa *NewList = new pessoa[*tamList -1];

    for (int i = 0; i < *tamList -1; i++)
    {
        NewList[i].Nome = pontSequencial[i].Nome;
        NewList[i].Cpf = pontSequencial[i].Cpf;
    }
    pontSequencial = NewList;
    *tamList = *tamList -1;
}

void delete_node_N(pessoa *&pontSequencial, int *tamList, int posicao){
    pessoa *NewList = new pessoa[*tamList -1];

    for(int i=0; i < *tamList; i++){
        if(i < posicao){
            NewList[i].Nome = pontSequencial[i].Nome;
            NewList[i].Cpf = pontSequencial[i].Cpf;
        }else{
            NewList[i].Nome = pontSequencial[i+1].Nome;
            NewList[i].Cpf = pontSequencial[i+1].Cpf;
        }
    }
    pontSequencial = NewList;
    *tamList = *tamList - 1;
}

string busca_rg(pessoa *&pontSequencial, int *tamList, double cpf){

    string nome = "RG invalido!";
    for(int i=0; i < *tamList; i++){
        if(pontSequencial[i].Cpf == cpf){
            nome = pontSequencial[i].Nome;
        }
    }
    return nome;
}

void imprime_pessoa(pessoa *pontSequencial, int tamList){
    int cont;
    for(cont= 0;cont<tamList; cont++ )
    {
        cout << cont << "-" << pontSequencial[cont].Nome << "," << pontSequencial[cont].Cpf << "\n";
    }
}

void limpa_tela(void){
    system("CLS");
}

int main(void)
{
    int op = 1;
    pessoa *pontSequencial;
    int tamList = 0;

    while (op < 9 && op > 0)
    {
        cout << "Opcoes  Disponiveis\n";
        cout << "[1] - Inserir um novo nome no incio da lista\n";
        cout << "[2] - Insercao de um nome no fim da lista\n";
        cout << "[3] - Insercao de um nome na posicao desejada\n";
        cout << "[4] - Retirar um nome do inicio da lista\n";
        cout << "[5] - Retirar um nome no fim da lista\n";
        cout << "[6] - Retirar um nome na posicao N\n";
        cout << "[7] - Procurar um nome pelo RG\n";
        cout << "[8] - Imprimir a Lista.\n";
        cout << "[9] - Sair do sistema.\n";
        cout << "\nEscolha uma das opcoes e pressione ENTER: \n";

        cin >> op;
        //limpa_tela(); -  este metodo nao esta funcionando pois meu SO n é windowns 

        // variaveis usadas para rg e nome
        int posicao;
        string name;
        double cpf;

        switch (op)
        {
            case 1:// opcao add no incio da lista
                cout << "Digite seu Nome :";
                cin >> name ;
                cout << "Digite seu Rg :";
                cin >> cpf;

                add_node_inicial(pontSequencial, name, cpf, &tamList);
                break;
            case 2:// add no final da lista
                cout << "Digite seu Nome :";
                cin >> name ;
                cout << "Digite seu Rg :";
                cin >> cpf;

                if(tamList == 0){
                    add_node_inicial(pontSequencial, name, cpf, &tamList);
                }else
                    add_node_final(pontSequencial, name, cpf, &tamList);
                break;
            case 3:// add na posicao escolhida na lista
                cout << "Digite seu Nome :";
                cin >> name ;
                cout << "Digite seu Rg :";
                cin >> cpf;
                cout << "Digite a posicao que deseja inserir o node";
                cin >> posicao;

                if(posicao == 0)
                {
                    add_node_inicial(pontSequencial, name, cpf, &tamList);
                }
                else if (posicao == tamList)
                {
                    add_node_final(pontSequencial, name, cpf, &tamList);
                }
                else
                {
                    add_node_N(pontSequencial, name, cpf, &tamList, posicao);
                }
                break;
            case 4:// excluir valor inicial da lista
                if(tamList == 0){
                    cout <<" A lista já está vazia!";
                }else{
                    delete_node_inicial(pontSequencial, &tamList);
                }
                break;
            case 5:// excluir valor final da lista
                if(tamList == 0){
                    cout << "A lista já está vazia!";
                }else{
                    delete_node_final(pontSequencial, &tamList);
                }
                break;
            case 6:// excluir um valor N da lista
                if(tamList == 0){
                    cout << "Lista já está vazia!";
                }else{
                    cout <<"Qual posicao você deseja excluir ?";
                    cin >> posicao;
                    if(posicao == 0)
                    {
                        delete_node_inicial(pontSequencial, &tamList);
                    }
                    else if(posicao == tamList -1)
                    {
                        delete_node_final(pontSequencial, &tamList);
                    }
                    else
                        delete_node_N(pontSequencial, &tamList, posicao);
                }
                break;
            case 7:// buscar pelo rg, um nome
                if(tamList == 0){
                    cout << "Lista vazia!";
                }else{
                    cout << "Digite o RG procurado :";
                    cin >> cpf;

                    cout << "Nome :" <<  busca_rg(pontSequencial, &tamList, cpf);
                }
                break;
            case 8:
                imprime_pessoa(pontSequencial, tamList);
                if(tamList == 0)
                    cout << "Lista vazia!";
                break;
            default:
                cout << " Programa Encerrado!";
                break;
        }
    }
    return 0;
}
