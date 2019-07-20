#include<stdio.h>

int main(void)
{
    //Para testar mutliplas condições tambem podemos usar o switch case
    int x;

    printf("Digite um numero de 1 a 5 : ");
    scanf("%d",&x);

    //Vamos verificar o valor da variavel x e dependendo do valor será executado
    //apenas um destes blocos
    switch (x) {
        //se x for = 1
        case 1 :
            printf("um");
            //este break sai desta estrutura se esta condição for verdadeira
            break;
        //se x for = 2
        case 2 :
            printf("dois");
            break;
        case 3 :
            printf("tres");
            break;
        case 4 :
            printf("quatro");
            break;
        case 5 :
            printf("cinco");
            break;
        //caso nenhuma das condições acima seja satisfeita executa este default
        default :
            printf("Voce digitou um valor invalido");
            break;
    }
//Obs este condicional não funciona com ponto flutuante ou operadores(<>&&||...), apenas um valor constante
    return 0;
}
