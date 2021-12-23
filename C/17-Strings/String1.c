#include <stdio.h>
#define size 100 //Tamanho do vetor de caracteres

int main()
{
    //O C não possui um tipo string, para usarmos cadeias de caracteres devemos usar um vetor de char

    //Vamos usar um vetor de char para a string
    char string[size] = "Aqui temos uma cadeia de caracteres";
    //Também vale 
    char *nome = "Luiz da Silva"; //Sem necessidade de declarar o tamanho
    
    //Agora vamos exibir as duas strings(use %s)
    printf("String : %s\n", string);
    printf("String nome : %s\n", nome);

    return 0;
}
