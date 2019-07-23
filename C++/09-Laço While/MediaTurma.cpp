#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Este algoritmo calcula a média de uma turma mediante o numero de alunos
    int total;
    int cont = 1;
    float nota;
    float soma = 0;

    cout << "Quantos alunos a turma possui ?" << endl;
    cin >> total;

    //Receber as notas ate contador chegar ao numero de alunos passados
    while(cont <= total) {
        cout << "Nota do aluno " << cont << " : ";
        cin >> nota;

        soma += nota;

        cont++;
    }
    cout.precision(2);
    cout << "A media da turma e " << (float)soma / total << endl;
    system("pause");
    return 0;
}
