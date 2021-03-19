#include <stdio.h>
#define dim 5

void insertionSort(int *vetor)
{
    int i,
        j,
        atual;
        
    for(i = 1; i < dim; i++)
    {
        atual = vetor[i];
        j = i;
        
        while((j > 0) && (vetor[j - 1] > atual))
        {
            vetor[j] = vetor[j - 1];
            j = j - 1;
        }
        
        vetor[j] = atual;
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

    printf("\nPos InsertionSort \n");
    
    //Este método vai alterar os valores no endereço da variavel(referência)
    insertionSort(vet);
    
    for(int i = 0; i < dim; i++)
    {
        printf("%d ", vet[i]);
    }
    
    return 0;
}