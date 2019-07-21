#include<stdio.h>

int main(void)
{
    //Este algoritmo retorna todos os numeros impares até onde o usuario digitar
    int limite;

    printf("Digite um numero : ");
    scanf("%d",&limite);

    printf("Os numeros impares de 0 a %d sao: \n",limite);

    for(int i = 0; i <= limite; i++) {
        if(i % 2 == 1) {
            printf("%d \n",i);
        }
    }
    return 0;
}
