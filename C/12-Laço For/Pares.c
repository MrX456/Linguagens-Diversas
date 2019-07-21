#include<stdio.h>

int main(void)
{
    //Este algoritmo retorna todos os numeros pares até onde o usuario digitar
    int limite;

    printf("Digite um numero : ");
    scanf("%d",&limite);

    printf("Os numeros pares de 0 a %d sao: \n",limite);

    for(int i = 0; i <= limite; i+= 2) {
        printf("%d \n",i);
    }

    return 0;
}
