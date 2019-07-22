#include<stdio.h>

int main(void)
{
    //Laços são estruturas de repetição que ficam repetindo um bloco de instruções
    //enquanto uma determinada condição for verdadeira

    int contador = 0;

    //Vamos fazer uma contagem de 0 a 10 usando um laço while
    //O while primeiro executa um teste lógico e enaquanto o
    //teste for verdadeiro o laço seguirá executando

    while(contador <= 10){
        printf("%d ",contador);
        //A cada repetição contador será incrementado
        contador++;
    }

    //Quando contador atingir valor limite estipulado na condição laço será encerrado
    return 0;
}
