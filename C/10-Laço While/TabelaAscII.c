#include<stdio.h>

int main(void)
{
    //Este algoritmo mostra a tabela ASCII que contém todos os caracteres usados em um computador
    int caracter = 0;

    while(caracter <= 255) {
        printf("%d = %c \n", caracter, caracter);
        caracter++;
    }
    return 0;
}
