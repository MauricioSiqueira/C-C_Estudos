#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");// uso de acentos do pt-br
    
    // algoritmo que informe se o valor é um numero primo 
    int i, valor, aux = 0;
    printf(" Digite um valor.: ");scanf("%d", &valor);

    for(i= 1; i<= valor; i++){

        if(valor%i == 0){
            aux++;
        }
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
    }
    if(aux == 2){
        printf("O numero e primo! e tem %d divisores", aux);
    }else{
        printf("O numero %d nao e primo! Pois ele tem %d divisores", valor, aux);
    }

}   