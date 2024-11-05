#include <stdio.h>
#include <stdlib.h>

int fatorial(int x){//Funcao recursiva que calcula o fatorial de um valor digitado 
    // Definindo variaveis 
    int result;

    if(x==0){// Fatorial de 0 E 1
        result = 1;// se o X receber o valor 0 o fatorial sera 1 
    }else{
        result = x * fatorial(x-1);// Valor exemplo, X recebe 3
                //3 * fatorial (3-1= 2) ele vai chamar  novamente a funcao fatorial sendo que com o valor parametro de x= 2
                // ele vai executar novamente a funcao com x recebendo o valor 2, ela passa direto pelo primeiro if pois x nao E 0 e vai direto pro else 
                // no else 2 * fatorial(2 -1 = 1) ele vai chamar  novamente a funcao fatorial sendo que com o valor parametro de x= 1
                // ele vai executar novamente a funcao com x recebendo o valor 1, ela passa direto pelo primeiro if pois x nao E 0 e vai direto pro else 
                // no else 1 * fatorial(1 -1 = 0) ele vai chamar  novamente a funcao fatorial, como o parametro E 0, ele vai no primeiro if e coloca o resultado igual a 1
        // neste momento a recursao foi empilhada da seguinte forma :1 * fatorial(1 -1 = 0) ->  else 2 * fatorial(2 -1 = 1) -> fatorial (3-1= 2)
        // apos o fatorial chegar no 0 e parar de chamar a funcao ele encerra a chamada recursiva, desempilha e executa a proxima linha de codigo 
        //1 * fatorial(1 -1 = 0) = 1 este valor fica no lugar de fatorial(2 -1 = 1)
        //2 * fatorial(2 -1 = 1) = 2 este valor fica no lugar de fatorial(3- 1 = 2)
        //3 * fatorial(3- 1 = 2) = 6 este o valor final de fatorial de 3 e sai dos condicionais e vai para o return
        
        
        // o valor X * o fatorial do valor anteriror ao X, se for 5, o anterior E 5-1 = 4
    }// uma chamada recursiva funciona como uma pilha, onde o programa vai executando e empilhando a recursao 
    // e ao chegar ao fim, ele desempilha e executa o comando seguinte. Ele so executa a proxima linha de comando se, e somente se  a recursao chegar ao fim
    // se a recursao nao chegar ao fim, ela entra em loop infinito.
    return result;
}


int main(void){
    //Este arquivo serve para estudo de recursividade e fucao recursiva 
    // fatorial, de n ate 0 e 0 ate n


    //Primeiro faremos um exemplo de fatorial usando recursao

    //Definindo variaveis 
    int fat, result;

    printf("Digite o valor do fatorial : ");// pede o valor o qual deseja saber o fatorial e guarda ele na var fat
    scanf("%d", &fat);

    result = fatorial(fat);// guarda o retorno da funcao fatorial dentro da variavel resultado 
    printf("%d", result);
    return 0;

}

