#include<stdio.h>

int main(void)
{
    //Verifcar um fatorial de um numero passado pelo usuario
    long c, n, f;
    char resp;

    do {
        printf("Digite um numero para verificar o fatorial : ");
        scanf("%d",&n);

        fflush(stdin);

        c = n;
        f = 1;

        //Vamos encadear outro do while
        do {
            printf("%d x ", c);
            f *= c;
            c -= 1;
        } while(c >= 1);

        printf("\nO fatorial de %d e %d \n",n, f);
        printf("Deseja fazer outra operacao? [s/n] \n");
        scanf("%c",&resp);

        fflush(stdin);
    } while(resp != 'n');



    return 0;
}
