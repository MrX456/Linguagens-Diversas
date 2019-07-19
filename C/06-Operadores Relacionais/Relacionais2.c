#include<stdio.h>

int main(void)
{
    //Podemos testar relações com qualquer tipo de dado
    int a = 1;
    float b = 1.0;
    char c = '1';

    printf("1 = Verdadeiro / 0 = Falso \n");
    printf("%d == (igual) %f ? %d \n", a, b, a == b);//verdadeiro tipos diferentes mas numeros
    printf("%d == (igual) %c (char)? %d \n", a, c, a == c);//falso porque c não é um numero mas um caractere
    printf("%d != (diferente) %c (char)? %d \n", a, c, a != c);//verdadeiro
    return 0;
}