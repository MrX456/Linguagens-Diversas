#include <stdio.h>
#include <string.h>
#define size 100

void mostrarInfo(char *nome, int idade, double altura) {
    printf("Ola %s, voce tem %i anos e mede %.2f \n", nome, idade, altura);
}

void tamanhoNome(char *nome) {
    int tam = strlen(nome);
    printf("Seu nome possui %u caracteres \n", tam);
}

int main()
{
    char nome[size];
    char linguagemPreferida[size];
    int idade;
    double altura;
    
    puts("Digite seu nome : ");
    gets(nome);
    puts("Qual sua linguagem de programacao favorita? ");
    gets(linguagemPreferida);
    puts("Digite sua idade : ");
    scanf("%i", &idade);
    puts("Digite sua altura : ");
    scanf("%lf", &altura);

    mostrarInfo(nome, idade, altura);
    tamanhoNome(nome);
    printf("Linguagem favorita : %s \n", linguagemPreferida);

    return 0;
}
