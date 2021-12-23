#include <stdio.h>
#define size 100

int main()
{
    //A função puts() ja considera uma quebra de linha"\n" apos seu termino
    //ou seja puts("ola") = printf("ola\n")
    char string[size] = "Hello world";
    puts(string);
    puts("Hello world!");
    return 0;
}
