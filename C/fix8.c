#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");// uso de acentos do pt-br
    int i = 10;
    //numeros entre 10 a 20 usando while, do while e for 
    while (i <= 20){
        if(i%2 == 0)
        {
            printf("\n%d", i);
        }
        i++;
    }

    i = 10;
    do{
        if(i%2 == 0)
        {
            printf("\n%d", i);
        }
        i++;
    }while (i <=20);

    for (i = 10; i <=20; i++){
        if(i%2 == 0){
            printf("\n%d", i);
        }
        i++;
    }
}   