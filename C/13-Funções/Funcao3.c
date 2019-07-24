#include<stdio.h>

//esta função subtrai valores digitados pelo usuario porém é void e não pode retornar nada
void subtracao(int x, int y)
{
    //Como a função não tem retorno só podemos imprimir esta subtração com um printf
    //para ver sendo feita(não será possivel armazenar em uma variavel depois)
    printf("%d",x - y);
}
int main(void)
{
    int a, b;

    printf("Digite um numero : \n");
    scanf("%d",&a);

    fflush(stdin);

    printf("Digite outro numero : \n");
    scanf("%d",&b);

    printf("Subtracao dos valores \n");
    subtracao(a, b);

    return 0;
}
