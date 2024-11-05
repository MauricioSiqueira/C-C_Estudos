#include <iostream>
#include <new>
#include <string>
#include <vector>

using namespace std;
using std:: vector;

struct pessoa{
    int RG;
    string Name;
    struct pessoa *proximo;
};

void limpatela(){
    system("CLS");
}

void add_node_inicial(pessoa *&pontEncadeada, string name, int rg){
    pessoa *pont1 = new pessoa;
    pont1->Name = name;
    pont1->RG = rg;
    pont1->proximo = pontEncadeada;
    
    if (pontEncadeada ->Name == "")
        pont1 ->proximo = NULL;
    else
        pont1 ->proximo = pontEncadeada;

    pontEncadeada = pont1;
}

int retorna_tamanho(pessoa *pontEncadeada){
    if(pontEncadeada->Name == ""){
        return 0;
    }
    
    int cont, Tam = 0;
    pessoa *p = pontEncadeada;

    while(p != NULL){
        p = p->proximo;
        Tam++;
    }
    return Tam;
}

void imprime_nodes(pessoa *pontEncadeada){
    pessoa *p = pontEncadeada;
    while (p != NULL)
    {
        cout << "Nome: " << p->Name <<", RG: "<< "-"<<p->RG;
        p ->proximo;
    }
    
}

void add_node_final(pessoa *pontEncadeada, string name, int rg){
    pessoa *pont1 = new pessoa;
    pont1->Name = name;
    pont1->RG = rg;
    pont1->proximo = NULL;

    pessoa *p = pontEncadeada;
    while (p != NULL)
    {
        if(p->proximo == NULL){
            p->proximo = pont1;
            return;
        }
            
        
        p = p->proximo;

    }
    
    
}

//void add_node_N(pessoa *&pontEncadeada, string name, int rg, int posicao)

int main(void){
    int funcDesejada = 1;
    pessoa *pontEncadeada = new pessoa;
    pontEncadeada ->Name = "";
    pontEncadeada ->RG = 0;
    pontEncadeada ->proximo = NULL;

    while(funcDesejada < 9 && funcDesejada > 0)
    {
        cout << " Tamanho atual :"<< retorna_tamanho(pontEncadeada) << endl;
        cout << "Operacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "\nEscolha um numero e pressione ENTER: \n";
    
        cin >> funcDesejada;

        //temp variables
        int rg, posicao;
        string name;

        switch (funcDesejada)
        {
        case 1:// insercao no inicio da lista
            cout << "Digite o Nome: ";
            cin >> name;
            cout <<"Digite o RG: ";
            cin >> rg;
            add_node_inicial(pontEncadeada, name, rg);
            break;
        case 2:// insercao no finn da lista
            cout << "Digite o Nome: ";
            cin >> name;
            cout <<"Digite o RG: ";
            cin >> rg;
            if(pontEncadeada->Name == "")
                add_node_inicial(pontEncadeada, name, rg);

            add_node_final(pontEncadeada, name, rg);
            break;
        case 3:// adicionar na posicao qualquer 
            cout << "Digite o Nome: ";
            cin >> name;
            cout <<"Digite o RG: ";
            cin >> rg;
            cout << "Digite a posicao :";
            cin >> posicao;

            if (posicao == 0){
                add_node_inicial(pontEncadeada, name, rg);
            }else if(posicao == retorna_tamanho(pontEncadeada)){
                add_node_final(pontEncadeada, name, rg);
            }else  
                //add_node_N(pontEncadeada, name, rg, posicao);
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            if(retorna_tamanho(pontEncadeada) == 0)
                cout << "Lista Vazia!";
            else
                imprime_nodes(pontEncadeada);
            break;
        default:
            break;
        }
    }
    return 0;
}