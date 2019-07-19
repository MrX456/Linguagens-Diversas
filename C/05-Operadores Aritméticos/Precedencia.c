#include<stdio.h>

int main(void)
{
    //A precedencia dos operadores aritméticos em C é
    //()
    //*/%
    //+-
    //Mesma precedencia é feito da esquerda para direita
    int x = 7;
    int y = 9;
    //parenteses tem maior precedência
    int media = (x + y) / 2;
    //multiplicação tem maior precedência que soma
    int valor = x + y * y;//7 + 81
    //mesma precedencia é resolvido da esquerda para direita
    int valor2 = x + y - x;

    printf("%d \n",media);
    printf("%d \n",valor);
    printf("%d \n",valor2);
    return 0;
}
