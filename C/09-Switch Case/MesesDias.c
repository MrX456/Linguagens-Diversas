#include<stdio.h>

int main(void)
{
    //Aqui vamos verifcar quantos dias tem cada mes
    int mes;
    int dia = 31;

    printf("Digite o numero do mes [1 a 12] : \n");
    scanf("%d",&mes);

    //Validar o numero digitado
    if((mes < 1) || (mes > 12)) {
        printf("Mes invalido");
    }
    else {
        //Agora vamos verificar quantos dias
        switch (mes) {
            //fevereiro tem 28(não considerar bissexto)
            case 2 :
                dia -= 3;
                break;
            //estes possuem 30, podemos usar varios cases em uma linha porem cada uma com um valor constante
            case 4: case 6 : case 9: case 11:
                dia -= 1;
                break;
        }
        //os demais meses ja estão com 31 dias
        printf("O mes %d possui %d dias", mes, dia);
    }

    return 0;
}
