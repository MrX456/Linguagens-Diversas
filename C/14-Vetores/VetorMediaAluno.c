#include<stdio.h>

int main(void)
{
    //Calcular a média de um aluno inserindo 5 notas

    float notas[5];
    float media;

    printf("Calcular media do aluno \n");

    for(int i = 0; i < 5; i++) {
        printf("Entre com a nota %d : ",i + 1);
        scanf("%f",&notas[i]);
        fflush(stdin);
    }

    media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;

    printf("\nA media do aluno foi %.2f",media);
    return 0;
}
