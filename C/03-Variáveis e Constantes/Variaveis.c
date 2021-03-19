#include <stdio.h>

int main()
{
    //Variaveis de numeros inteiros declaradas
    int a = -1; //mais comum
    short b = 2;
    long c = 3;

    //Variaveis de numeros reais(com ponto flutuante) declaradas
    float d = 1.6;
    double e = 3.21;

    //Variavel que armazena apenas 1 caractere
    char letra = 'r';
    
    //Exibir variavel inteira. Precisa do argumento %d(int,short) %ld(long)
    printf("%d \n",a);
    printf("%d \n",b);
    printf("%ld \n",c);
    
    //Exibir variavel de ponto flutuante. Argumento %f(float) %lf(double)
    printf("%f \n",d);
    printf("%lf \n",e);
    
    //Exibir caracter. Argumento %c
    printf("%c \n",letra);
    

    return 0;
}