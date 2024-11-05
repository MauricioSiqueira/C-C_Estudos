#include <stdio.h>
#include <stdlib.h>

// alocação dimanica de uma matriz
int main(void){
    int nl, nc, i, j;
    int **ma;

    printf("Digite quantas Linhas voce deseja: ");
    scanf("%d", &nl);
    printf("Digite quantas colunas voce deseja: ");
    scanf("%d", &nc);
    ma = (int**) malloc(nl * sizeof(int*));

    for(i=0; i < nl; i++){
        ma[i] = (int*) malloc(nc * sizeof(int));
    }

    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            ma[i][j] = i;
            printf("%d ",ma[i][j]);
        }
        printf("\n");
    }

    free(ma); 
    return 0;
}