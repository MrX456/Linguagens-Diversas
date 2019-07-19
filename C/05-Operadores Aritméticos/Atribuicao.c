#include<stdio.h>

int main(void)
{
    int x = 1;
    int y = 6;
    int w = 4;
    int z = 22;
    //Se quisermos fazer incrementações maiores que 1 podemos usar atribuição
    //Incrementar em 2(podemos incrementar em qualquer valor)+= valor desejado
    x += 2;

    //Decrementar em qualquer valor desejado
    y -= 4;

    //Atribuição com multiplicação
    w *= 4;

    //Atribução com divisão
    z /= 2;

    printf("%d \n",x);
    printf("%d \n",y);
    printf("%d \n",w);
    printf("%d \n",z);

    return 0;
}
