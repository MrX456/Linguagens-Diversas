#include<stdio.h>

//Função Fibonacci
void fibonacci(int a, int b, int lim)
{
    int aux;

    for(int i = 0; i < lim; i++) {
        aux = a + b;
        a = b;
        b = aux;
        printf("%d ",aux);
    }

}

int main(void)
{
    const int x = 0;
    const int y = 1;
    int limite;

    printf("Sequencia de Fibonacci \n");
    printf("Digite o termo final da sequencia desejado \n");
    scanf("%d",&limite);

    fibonacci(x, y, limite);

    return 0;
}
