#include<stdio.h>

int main(void)
{
    int x = 5;
    int y = 2;

    //Os operadores aritméticos em C são
    int soma = x + y;
    int subtracao = x - y;
    int multiplicacao = x * y;
    //Para divisão vamos converter com o cast
    float divisao = (float)x / y;
    //Resto de divisão(modulo)
    int modulo = x % y;

    //Exibindoa valores
    printf("%d + %d = %d \n",x, y, soma);
    printf("%d - %d = %d \n",x, y, subtracao);
    printf("%d x %d = %d \n",x, y, multiplicacao);
    printf("%d / %d = %.2f \n",x, y, divisao);
    printf("%d resto da divisao por %d = %d \n",x, y, modulo);
    return 0;
}