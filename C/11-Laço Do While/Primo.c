#include<stdio.h>

int main(void)
{
    //Algoritmo verifica se numero digitado é primo
    int c, n, numDiv;

    c = 1;//divisor
    numDiv = 0; //numero de divisores do numero

    printf("Digite um numero para verificar se e primo : ");
    scanf("%d",&n);

    do {
        c++;
        if(n % c == 0) {
            numDiv++;
        }
    } while(c < n);

    if(numDiv > 2) {
        printf("O numero %d nao e primo",n);
    }
    else {
        printf("O numero %d e primo",n);
    }
    return 0;
}
