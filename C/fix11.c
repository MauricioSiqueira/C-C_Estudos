#include <stdio.h>
#include <stdlib.h>

void main(){
    //Preencha uma matriz 2x2  lendo valores do usuario e
    //depois troque os valores entre a primeira e a segunda linha 

    int l,c,i,count,aux1;

    printf("Digite quantas linhas sua matriz vai ter.: ");
    scanf("%d", &l);
    printf("Digite quantas colunas sua matriz vai ter.: ");
    scanf("%d", &c);

    int ma[l][c];

    for(i=0; i < l;i++){// preenche  a matriz de l linhas e count colunas  
        for(count=0; count<c;count++){
            scanf("%d", &ma[i][count]);
        }
    }
    for(i=0;i<l;i++){// printa a matriz original como ela é 
        for(count=0; count<c;count++){
            printf(" %d ", ma[i][count]);
        }
        printf("\n");
    }
    printf("linha Trocada\n");

    for(count=0; count<c;count++){// trocando as linhas 
        aux1 = ma[0][count];
        ma[0][count] = ma[1][count];
        ma[1][count]= aux1;
    }
    //apresenta linha trocada    
    for(i=0;i<l;i++){
        for(count=0;count<c;count++){
        printf(" %d ",ma[i][count]); 
        }
        printf("\n");
        } 

    
}