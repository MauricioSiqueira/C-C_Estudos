#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //para usar acentos 
    setlocale(LC_ALL,"");
    // crie um algoritmo que leia 3 notas e calcule a media entre elas 
    // se o valor for maior q 7  informe que o aluno passou, senao reprovou 
    float n1, n2, n3, media;
    printf(" -------Escola Madalena Sofia------- \n");

    printf("Primeira nota: ");
    scanf("%f", &n1);

    printf("Segunda nota: ");
    scanf("%f", &n2);

    printf("Terceira nota: ");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;
    if (media >= 7)// se a media das notas do aluno for MAIOR OU IGUAL  a 7, irá printar que ele foi aprovado 
    {
        printf("O aluno foi aprovado com uma media de %.2f", media);
        printf("\nParabens");
    }
    else if(media < 7 && media >= 5 )// se a media do aluno ficar entre 5 e 7 ele sao será aprovado mas poderá fazer recuperação 
    {
        printf("O aluno não foi aprovado, mas obteve uma media de %.2f e poderá fazer recuperação", media);
    }
    else// se a media do aluno for menor que 5 ele sera reprovado automaticamente e nao pode fazer recuperação
    {
        printf("O aluno foi reprovado com uma media de %.2f e não tem chance de fazer recupeção", media);
    }
}