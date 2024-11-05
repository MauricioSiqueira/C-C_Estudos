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
void bubble_sort(int vector[TAM])
{
    int x, y, aux;

    for (x = 0; x < TAM; x++)
    {
        for (y = x +1; y < TAM; y++)
        {
            if (vector[x] > vector[y])
            {
                aux = vector[x];
                vector[x] = vector[y];
                vector[y] = aux;
            }
        }
        
    }
}
int main(void)
{
    int vector[TAM] = {10,9,8,7,6,5,4,3,2,1};
    bubble_sort(vector);
    imprime_vetor(vector);

    return 0;
}