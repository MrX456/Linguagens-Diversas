#include<stdio.h>

int main(void)
{
   //Contador inteligente, incrementa ou decrementa dependendo dos valores passados
   //pelo usuario

    int x, y;

    printf("Digite um numero : ");
    scanf("%d",&x);

    fflush(stdin);

    printf("Digite outro numero : ");
    scanf("%d",&y);

    //Condição Incrementa
    if(x < y) {
        printf("Incrementando... \n");
        for(int i = x; i <= y; i++) {
            printf("%d \n",i);
        }
    }
    //Condição decrementa
    else {
        printf("Decrementando... \n");
        for(int i = x; i >= y; i--) {
            printf("%d \n",i);
        }
    }


    return 0;
}
