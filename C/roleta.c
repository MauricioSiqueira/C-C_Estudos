#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
// roleta russa  onde vc escolhe quantas bala serão  disparadas
// onde vc escolhe sua aposta e quanto mais balas disparadas, maior e a multiplicação da grana 
// se perder imprimir na tela que perdeu e toda grana sera resetada 

int giro(int bala, float vap){
    int agulha;
    srand((unsigned) time(NULL));
    if(bala == 1)
    {
        agulha = (rand() %6)+1;//* gerando valores aleatórios entre 1 e 6 */
        if(agulha == 6)
        {
        printf("Voce perdeu Todo Dinheiro! :(");
        vap*0;
        }
        else
        {
        printf("Deu Sorte!");
        vap +=(vap*0.1);
        }
    }
    return vap;
}
/*int roleta(int bala, float vap){
    
    switch (balas)
    {
    case 1:
        vap +=(vap*0.1);
        break;
    case 2:
        vap +=(vap*0.5);
        break;
    case 3:
        vap +=(vap*1);
        break;
    case 4:
        vap +=(vap*1.25);
        break;
    case 5:
        vap +=(vap*10);
        break;
    default:
        printf("Maximo de 5 balas!");
        exit(0);
        break;
    }
    return vap;
}*/

int main(void) {

    setlocale(LC_ALL, "");
    char name[100], op;// guarda o nome do usuario e a opcao q ele vai escolher 
    int age, numbala;// guarda a idade do caboco e quantas balas ele colocou na aposta 
    float spot, resultado;// guarda o valor da aposta e o valor resultado da funcao giro

    printf("------Roleta Blaze------\n");
    printf("Idade : ");scanf("%d", &age);
    if(age <= 17)
    {
        printf("Deve ser maior de idade para jogar este jogo!!");
        exit(0);
    }

    fflush(stdin);
    printf("Nome e sobrenome : ");gets(name);
    printf("%s, Voce quer jogar Roleta? [S/N] : ", name);scanf("%c", &op);
    if (op == 'N' || op == 'n')
    {
        printf("Sábia escolha garoto ");
        exit(0);
    }
    else if(op == 'S' || op == 's')
    {
        printf("Valor da aposta : ");scanf("%f", &spot);
        printf("Numero de Balas que vai colocar na aposta : ");scanf("%d", &numbala);
        resultado = giro(numbala, spot);// manda o numero de balas e o valor da aposta para a funcao da roleta 
        printf("\n%.2f De montante ate o atual momento", resultado);
    }
    else
    {
        printf("opcao invalida");
        exit(0);
    }
}  