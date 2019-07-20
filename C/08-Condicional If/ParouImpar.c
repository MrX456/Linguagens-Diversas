#include<stdio.h>

int main(void)
{
    int x;

    printf("Digite um numero para verificar se e par ou impar : ");
    scanf("%d",&x);

    //Aqui o operador ! inverte o teste, portanto se o numero passado NÃO
    //possui resto de divisão por 2 igual a 0 este bloco será executado
    if(!(x % 2 == 0)) {
        printf("O numero %d e impar",x);
    }
    //Se possui este bloc sera executado
    else {
        printf("O numero %d e par",x);
    }
    return 0;
}
