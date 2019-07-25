#include<stdio.h>

int main(void)
{
    //Geranciar média de uma turma de 4 alunos
    float nota1[4];
    float nota2[4];
    float media[4];
    float mtot, sm;

    for(int i = 0; i < 4; i++) {
        printf("Digite a primeira nota do aluno %d : ",i + 1);
        scanf("%f",&nota1[i]);
        fflush(stdin);
        printf("Digite a segunda nota do aluno %d : ",i + 1);
        scanf("%f",&nota2[i]);
        fflush(stdin);
        media[i] = (nota1[i] + nota2[i]) / 2;
        sm += media[i];
    }

    mtot = sm / 4;

    printf("\n--------------------\n");
    printf("       Alunos         \n");
    printf("--------------------\n");
    for(int i = 0; i < 4; i++) {
        printf("Aluno %d : %.2f \n",i + 1, media[i]);
    }
    printf("\nA media da turma foi %.2f \n",mtot);
    return 0;
}
