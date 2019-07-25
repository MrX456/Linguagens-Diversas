#include<stdio.h>

int main(void)
{
    //Vetores diversos

    int vet1[] = {4, 2, 1, 6};
    float vet2[] = {2.4, 3.2, 1.1, 4.6};
    char vet3[] = {'f', 'd', 'z', '|', '?'};

    int sizev1 = sizeof(vet1) / sizeof(vet1[0]);
    int sizev2 = sizeof(vet2) / sizeof(vet2[0]);
    int sizev3 = sizeof(vet3) / sizeof(vet3[0]);

    //Mostrando vetores
    printf("Vetores \n");

    for(int i = 0; i < sizev1; i++) {
        printf("%d ", vet1[i]);
    }

    printf("\n");

    for(int i = 0; i < sizev2; i++) {
        printf("%.1f ", vet2[i]);
    }

     printf("\n");

     for(int i = 0; i < sizev3; i++) {
        printf("%c ", vet3[i]);
    }

    return 0;
}
