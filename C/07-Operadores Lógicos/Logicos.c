#include<stdio.h>

int main(void)
{
    //Operadores lógicos permitem testar multiplas relações entre variaveis
    //Os operadores lógicos em C são: e&& ou|| não!

    int x = 4;
    int y = 6;
    int z = 9;

    printf("Dados x=%d ; y=%d; z=%d \n",x, y, z);
    printf("1 = Verdadeiro / 0 = Falso \n");
    //operador && só retorna verdadeiro se duas condições testadas forem verdadeiras
    printf("operador &&(e) \n");
    printf("%d \n",(x < y) && (y < z)); //v e v = v(1)
    printf("%d \n",(x > y) && (y < z));//f e v = f(0)
    printf("%d \n",(x != y) && (y >= z));//v e f = f(0)
    printf("%d \n",(x == y) && (y >= z));// f e f = f(0)

    //operador || só retorna falso se duas condições testadas forem falsas
    printf("operador ||(ou) \n");
    printf("%d \n",(x < y) || (y < z)); //v ou v = v(1)
    printf("%d \n",(x > y) || (y < z));//f ou v = v(1)
    printf("%d \n",(x != y) || (y >= z));//v ou f = v(1)
    printf("%d \n",(x == y) || (y >= z));// f ou f = f(0)

    //operador ! inverte o resultado do teste lógico
    printf("operador ! (nao) \n");
    printf("%d \n",!((x < y) || (y < z))); //não v = f(0)
    printf("%d \n",!((x == y) && (y >= z)));// não f = v(1)
    return 0;
}