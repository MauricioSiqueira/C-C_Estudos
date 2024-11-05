#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");// uso de acentos do pt-br
    int i = 10, cont;
    //contagem regressiva
    while (i >= 0){
        printf("\n%d", i);
        i--;
    }

    i = 10;
    do{
        printf("\n%d", i);
        i--;
    }while (i >=0);

    for (cont = 10; cont >=0; cont--){
        printf("\n%d", cont);
    }
}   