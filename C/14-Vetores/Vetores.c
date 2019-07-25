#include<stdio.h>

int main(void)
{
    //Vetores são variaveis compostas unidimensionais, em uma unica variavel podemos armazenar
    //diversos dados mas estes dados devem ser do mesmo tipo
    //Para declarar um vetor usamos

    int num[4]; //este vetor tem 4 elementos

    //para atribuir valores manualmente(vetores começam com indice 0)
    num[0] = 2;
    num[1] = 4;
    num[2] = 5;
    num[3] = 8; //este é o ultimo elemento

    //Só podemos mostrar um elemento por vez
    printf("%d ",num[0]);
    printf("%d ",num[1]);
    printf("%d ",num[2]);
    printf("%d \n",num[3]);

    printf("Estrutura de controle \n");

    //Para percorrer estes valores de forma mais simples podemos usar uma estrututa de controle
    for(int i = 0; i < 4; i++) { //o indice começa em 0 e vai até 3 neste vetor
        printf("%d ",num[i]);
    }

    printf("\nEncerando...");

    return 0;
}
