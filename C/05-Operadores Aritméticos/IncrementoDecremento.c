#include<stdio.h>

int main(void)
{
    //Temos os operadores de incremento ++ e decremento -- que acrescentam ou
    //diminuem em 1 o valor da variavel
    int i = 0;
    int j = 2;
    //O pre-incremento e decremento é feito antes
    ++i;
    --j;
    printf("%d \n",i);
    printf("%d \n",j);
    //Já o pós-incremento e decremento é feito depois
    i--;
    j++;
    printf("%d \n",i);
    printf("%d \n",j);
    return 0;
}