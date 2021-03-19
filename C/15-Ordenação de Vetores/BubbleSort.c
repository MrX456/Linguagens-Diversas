#include <stdio.h>
#define dim 5

void bubbleSort(int *vetor)
{
    int tamanho = dim;
    int comparacao = 0;
    int trocas = 0;
    
    for(int i = tamanho - 1; i >= 1; i--)
    {
        for(int j = 0; j < i; j++)
        {
            comparacao++;
            
            if(vetor[j] > vetor[j + 1])
            {   
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                trocas++;
            }
        }
    }
    
}

int main()
{
    //inicializando vetor
    int vet[] = {3, 7, 1, 4, 5};
    
    printf("Vetor original \n");
    
    for(int i = 0; i < dim; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\nPos BubbleSort \n");

    //Este m�todo vai alterar os valores no endere�o da variavel(refer�ncia)
    bubbleSort(vet);
    
    for(int i = 0; i < dim; i++)
    {
        printf("%d ", vet[i]);
    }
    
    return 0;
}