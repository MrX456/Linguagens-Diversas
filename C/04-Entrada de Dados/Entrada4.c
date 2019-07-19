#include<stdio.h>

int main(void)
{
    //Podemos utilizar varios scanf()
    int x;
    char car;

    printf("Digite um numero : ");
    scanf("%d",&x);

    //Precisamos limpar o buffer para receber outro comando
    fflush(stdin);

    printf("Digite um caracter : ");
    scanf("%c",&car);

    printf("%d \n",x);
    printf("%c",car);

    return 0;
}
