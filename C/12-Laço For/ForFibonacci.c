#include<stdio.h>

//Sequencia de Fibonacci
int main(void)
{
    int a, b, aux;

    a = 0;
    b = 1;

    printf("Sequencia de Fibonacci ate 10 \n");

    //gerando a sequencia até 10
    for(int i = 0; i < 10; i++) {
        aux = a + b;
        a = b;
        b = aux;

        printf("%d ",aux);
    }
    return 0;
}
