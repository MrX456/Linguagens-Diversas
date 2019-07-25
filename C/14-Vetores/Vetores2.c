#include<stdio.h>

int main(void)
{
    //Tambem podemos declarar um vetor e atribuir valor desta maneira
    int vet[] = {2, 4, 7, 10, 15};
    //Aqui obtemos o tamanho do vetor de forma mais simples independente do tamanho
    int size = sizeof(vet) / sizeof(vet[0]);

    for(int i = 0; i < size; i++) {
        printf("%d ",vet[i]);
    }
    return 0;
}
