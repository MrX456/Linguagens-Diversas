#include <stdio.h>
#include <math.h>

int main()
{
    //Este programa recebe o raio de um circulo e calcula sua área,
    //circunferência e diãmetro
    const double pi = 3.14159;
    int raio;
    
    printf("Digite o valor do raio do circulo : ");
    scanf("%d", &raio);
    
    //Calculando
    printf("Diametro : %d \n", raio * 2);
    printf("Circunferencia : %lf \n", 2 * pi * raio);
    printf("Area : %lf \n", pi * pow(raio, 2));
    
    //Para usar o metodo pow() precisamos incluir o cabeçalho math.h

    return 0;
}