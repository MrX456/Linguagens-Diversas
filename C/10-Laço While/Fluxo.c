#include<stdio.h>

int main(void)
{
    //podemos alterar o fluxo de um laço com alguns comandos
    int cont = 0;

    while(cont < 10) {
        cont++;
        //Variavel vai incrementar em 1 a cada iteração

        if(cont == 4 || cont == 7) {
        //Este comando volta imediatamente para o teste ignorando instruções abaixo dele
            continue;
        }
        //4 e 7 não serão impressos pois continue impedira programa de chegar nesta instrução
        //voltando ao inicio do while imediatamente
        printf("%d ", cont);
    }
    printf("\nContagem finalizada \n");

    //Tambem temos o break que encerra imedatamente o laço se for acionado
    while(cont > 0) { //contador deve ir até 0
        cont--;

        //break sera acionado quando cont valer 5 interrompendo este laço imediatamente
        if(cont == 5) { //5 não será impresso pois impressão está abaixo do break
            break;
        }
        printf("%d \n",cont);
    }
    printf("Contagem interrompida");
    return 0;
}
