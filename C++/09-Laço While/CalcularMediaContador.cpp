#include <iostream>

using namespace std;

int main()
{
    //Calcular media de uma turma de 10 alunos com 
    //repetição controlada por contador
    int total, gradeCounter, grade, average;

    //Fase de inicialização(soma e contador)
    total = 0;
    gradeCounter = 1;

    //Fase de processamento
    while(gradeCounter <= 10)
    {
        cout << "Forneca a nota do aluno " << gradeCounter << endl;
        cin >> grade;
        total = total + grade;
        //Se contador não for incrementado teremos um loop infinito
        gradeCounter = gradeCounter + 1;
    }

    //Fase de termino
    average = total / 10;
    cout << "A media da turma e " << average << endl;

    return 0;
}
