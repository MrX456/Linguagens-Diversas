#include<stdio.h>

int main(void)
{
    //Calculadora
    int x;
    int y;

    printf("Digite um valor : \n");
    scanf("%d",&x);

    fflush(stdin);

    printf("Digite outro valor : \n");
    scanf("%d",&y);

    printf("%d + %d = %d \n",x, y, x + y);
    printf("%d - %d = %d \n",x, y, x - y);
    printf("%d x %d = %d \n",x, y, x * y);
    printf("%d / %d = %.3f \n",x, y, (float)x / y);

    return 0;
}
