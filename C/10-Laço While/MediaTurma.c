#include<stdio.h>

int main(void)
{
    //Este algoritmo calcula a média de uma turma mediante o numero de alunos
    int total;
    int cont = 1;
    float nota;
    float soma = 0;

    printf("Quantos alunos possui a turma ? ");
    scanf("%d",&total);

    //Receber as notas ate contador chegar ao numero de alunos passadoa
    while(cont <= total) {
        printf("Nota do aluno %d \n",cont);
        scanf("%f",&nota);

        soma += nota;

        cont++;
    }

    printf("A media da turma foi: %.2f", soma / total);

    return 0;
}
