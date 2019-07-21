#include<stdio.h>

int main(void)
{
    //Este algoritmo retorna todos os numeros multiplos de 3 até onde o usuario digitar
    int val;

    printf("Digite um numero : ");
    scanf("%d",&val);

    printf("Os multiplos de 3 de 0 a %d sao: \n",val);

    for(int i = 1; i <= val; i++) {
        if(i % 3 == 0) {
            printf("%d \n",i);
        }
    }
    return 0;
}
