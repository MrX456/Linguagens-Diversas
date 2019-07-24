#include<stdio.h>

//esta função com 2 parametros retorna quem é o maior
float maior(float x, float y)
{
    if(x >= y) {
        return x;
    }
    else {
        return y;
    }
}

int main(void)
{
    int a, b;

    printf("Digite um numero : \n");
    scanf("%d",&a);

    fflush(stdin);

    printf("Digite outro numero : \n");
    scanf("%d",&b);

    printf("O maior valor e %.0f \n",maior(a, b));

    return 0;
}
