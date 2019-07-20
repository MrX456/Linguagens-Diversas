#include<stdio.h>

int main(void)
{
    //Tambem podemos encadear estruturas condicionais colocando uma dentro
    //da outra para testar multiplas condições
    int x;
    int y;

    printf("Digite um numero : \n");
    scanf("%d",&x);

    fflush(stdin);

    printf("Digite outro numero : \n");
    scanf("%d",&y);

    //Vamos encadear condicionais para testar mais de duas condições
    if(x == y) {
        printf("Numeros iguais");
    }
    else {
        //Este if else esta aninhado
        if(x > y) {
            printf("Maior numero e %d",x);
        }
        //Ultimo caso possivel
        else {
             printf("Maior numero e %d",y);
        }
    }
    //Podemos aninhar quantas estruturas quisermos para testar multiplas condições, pelo menos
    //um dos blocos será executado
    return 0;
}
