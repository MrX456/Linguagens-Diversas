#include<stdio.h>

int main(void)
{
    //Operadores bit a bit fazem operações com cada bit das variaveis
    int x = 2; //10
    int y = 3; //11
    int z = 0;

    printf("Operador & \n");//e
    //1 & 1 = 1
    //0 & 1 = 0
    //1 & 0 = 0
    //0 & 0 = 0
    printf("bit a bit de %d & %d = %d \n",x, y, x & y);

    printf("Operador | \n");//ou
    //1 | 1 = 1
    //0 | 1 = 1
    //1 | 0 = 1
    //0 | 0 = 0
    printf("bit a bit de %d | %d = %d \n",x, y, x | y);

    printf("Operador ^ \n");//ou exclusivo
    //1 ^ 1 = 0
    //0 ^ 1 = 1
    //1 ^ 0 = 1
    //0 ^ 0 = 0
    printf("bit a bit de %d ^ %d = %d \n",x, y, x ^ y);

    printf("Operador ~ \n");//não(inverte cada bit)
    printf("~ %d = %d",z, ~z);
    return 0;
}
