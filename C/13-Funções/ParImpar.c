#include<stdio.h>

//Verificar par ou impar com função sem retorno
void par_impar(int num)
{
    if(num % 2 == 0) {
        printf("O numero %d e par",num);
    }
    else {
        printf("O numero %d e impar",num);
    }
}

int main(void)
{
    int x;

    printf("Digite um numero: \n");
    scanf("%d", &x);

    //Chamando função
    par_impar(x);

    return 0;
}
