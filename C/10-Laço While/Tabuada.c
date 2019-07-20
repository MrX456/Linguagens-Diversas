#include<stdio.h>

int main(void)
{
    //Tabuada com laço while
    int fator;
    int contador = 0;
    int produto;

    printf("Tabuada \n");
    printf("Digite um numero : ");
    scanf("%d",&fator);

    printf("=-=-=-=-=-=-=-=-=-=-=-=\n");

    while(contador <= 10) {
        produto = fator * contador;
        printf("%d x %d = %d \n",fator, contador, produto);
        contador++;
    }
    return 0;
}
