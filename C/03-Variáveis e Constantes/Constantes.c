#include <stdio.h>

int main()
{
    //Constantes não podem ter seu valor alterado depois de declarado
    //é obrigatorio inicializar uma constante com o valor
    
    //Para usar uma constante usamos a palavra const
    const double pi = 3.14159;
    const int alunos = 15;
    const char sair = 'q';
    
    //Imprimindo constantes
    printf("%lf \n", pi);
    printf("%d \n", alunos);
    printf("%c \n", sair);

    return 0;
}