#include<stdio.h>

int main(void)
{
    //Podemos receber caracteres também, alem do scanf podemos usar a função getchar()
    char car;
    printf("Digite um caracter : ");
    car = getchar();
    printf("%c",car);

    return 0;
}