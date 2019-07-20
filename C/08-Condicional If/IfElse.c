#include<stdio.h>

int main(void)
{
    //Tambem temos o condicional composto if else. If executa se teste for
    //verdadeiro e else executa se for falso(um dos dois será executado)
    int x;
    int y;
    int opc;
    int operacao;

    printf("Digite um numero : \n");
    scanf("%d",&x);

    fflush(stdin);

    printf("Digite outro numero : \n");
    scanf("%d",&y);

    fflush(stdin);

    printf("Digite 1 para somar \n");
    printf("Digite qualquer tecla para subtrair \n");
    scanf("%d",&opc);

    //Se condição for verdadeira
    if(opc == 1) {
        operacao = x + y;
        printf("A soma dos valores e %d",operacao);
    }
    //Se condição for falsa
    else {
        operacao = x - y;
        printf("A subtracao dos valores e %d",operacao);
    }
    //Obrigatóriamente um e somente um dos blocos acima será executado

    return 0;
}
