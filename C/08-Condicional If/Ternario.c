#include<stdio.h>

int main(void)
{
    //Em C para testar condições de forma simples temos o operador ternário
    //condição ? verdadeiro : falso
    int num;

    printf("Digite um numero : ");
    scanf("%d",&num);

    //Numero positivo incrementa(v) e negativo decrementa(f)
    num >= 0 ? num++ : num-- ;

    printf("O valor do numero e %d", num);
    return 0;
}
