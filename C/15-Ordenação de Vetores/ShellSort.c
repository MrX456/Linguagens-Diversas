#include <stdio.h>
#define dim 5

void shellSort(int *vetor)
{
   int h = 1;
   int n = dim;
   
   while(h < n)
   {
       h = h * 3 + 1;
   }
   
   h = h / 3;
   int c;
   int j;
   
   while( h > 0)
   {
       for(int i = h; i < n; i++)
       {
           c = vetor[i];
           j = i;
           
           while(j >= h && vetor[j - h] > c)
           {
               vetor[j] = vetor[j - h];
               j = j - h;
           }
           
           vetor[j] = c;
           
       }
       
       h = h / 2;
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

    printf("\nPos ShellSort \n");
    
    //Este método vai alterar os valores no endereço da variavel(referência)
    shellSort(vet);
    
    for(int i = 0; i < dim; i++)
    {
        printf("%d ", vet[i]);
    }
    
    return 0;
}