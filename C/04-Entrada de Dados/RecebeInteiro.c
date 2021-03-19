#include <stdio.h>

int main()
{
    //Recebendo numero como entrada e exibindo
    int x;
    
    printf("Digite um numero inteiro : ");
    scanf("%d",&x); //Lembrando que para inteiro o argumento deve ser %d
    
    printf("------------------\n");
    
    printf("Voce digitou o numero %d",x);

    return 0;
}