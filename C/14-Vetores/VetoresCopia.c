#include<stdio.h>
#define dim 5

//Copiar elementos de um vetor
void recebe(int original[])
{
    for(int i = 0; i < dim; i++) {
        printf("Entre com o elemento %d : ",i);
        scanf("%d",&original[i]);
        fflush(stdin);
    }
}

//Copiar vetor
void copiar(int copiado[], int original[])
{
    for(int i = 0; i < dim; i++) {
        copiado[i] = original[i];
    }
}

//Dobrar vetor
void dobrar(int dobrado[], int original[])
{
     for(int i = 0; i < dim; i++) {
        dobrado[i] = 2 * original[i];
     }
}

//Exibir vetores
void exibir(int vet[])
{
     for(int i = 0; i < dim; i++) {
        printf("%3d ",vet[i]);
     }
}

int main(void)
{
    int original[dim];
    int copia[dim];
    int dobrado[dim];

    //Vamos usar funções criadas
    recebe(original);
    copiar(copia, original);
    dobrar(dobrado, original);

    //Exibir vetores
    printf("\nVetor original \n");
    exibir(original);
    printf("\nVetor copiado \n");
    exibir(copia);
    printf("\nVetor dobrado \n");
    exibir(dobrado);
    return 0;
}
