#include<stdio.h>

//esta função retorna um fatorial de um numero
int fatorial(int x)
{
    int r;
    r = 1;
    for(int c = 1; c <= x; c++) {
        r = r * c;
    }
    return r;
}
int main(void)
{
    int n, f;

    printf("Digite um numero: \n");
    scanf("%d",&n);

    f = fatorial(n);

    printf("O valor de %d! e %d \n",n, f);

    return 0;
}
