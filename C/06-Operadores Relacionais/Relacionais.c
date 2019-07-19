#include<stdio.h>

int main(void)
{
    //Operadores relacionais testam uma relação entre variaveis(se são verdadeiras ou falsas)
    //Se for verdadeira retorna 1 se for falsa retorna 0.
    int s = 2;
    int t = 3;
    int v = 2;

    //Os operadores relacionais em c são >(maior) >=(maior ou igual) <(menor) <=(menor ou igual)
    //==(igual) !=(diferente)

    printf("1 = Verdadeiro / 0 = Falso \n");
    printf("%d > (maior) %d ? %d \n", s, t, s > t);//falso
    printf("%d < (menor) %d ? %d \n", s, t, s < t);//verdadeiro
    printf("%d >= (maior ou igual) %d ? %d \n", s, v, s >= v);//verdadeiro
    printf("%d <= (menor ou igual) %d ? %d \n", t, s, t <= s);//falso
    printf("%d == (igual) %d ? %d \n", s, v, s == v);//verdadeiro
    printf("%d != (diferente) %d ? %d \n", s, t, s != t);//verdadeiro
    return 0;
}
