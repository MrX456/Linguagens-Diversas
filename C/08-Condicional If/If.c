#include<stdio.h>

int main(void)
{
    //O condicional if faz um teste lógico em uma condição e
    //se for verdadeira executa o bloco(qualquer operador pode ser utilizado)
    int num;

    printf("1 2 ou 3. Escolha um numero : ");
    scanf("%d",&num);

    //Se e somente se o usuario digitar 1 este bloco será executado
    if(num == 1) {
        printf("Parabens voce ganhou um carro \n");
    }

    //Qualquer outra coisa digitada pelo usuario não passara pelo
    //bloco acima e vai direto para este comando
    printf("Encerrando programa...");
    return 0;
}
