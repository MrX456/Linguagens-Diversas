#include <iostream>
#include <iomanip> //necessario para uso do setprecision e setiosflags

using namespace std;

//Calculo de média com repetição controlada por sentinela

int main()
{
    //Variaveis
    int total, gradeCounter, grade;
    double average;

    //Fase de inicialização
    total = 0;
    gradeCounter = 0;

    //Fase de processamento
    cout << "Forneca nota ou -1 para finalizar : ";
    //O valor -1 é o sentinela, foi escolhido por ser um valor inválido para as notas
    //se digitado encerrara a repetição imediatamente
    cin >> grade;

    while(grade != -1)
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;
        cout << "Forneca nota ou -1 para finalizar : ";
        cin >> grade;
    }

    //Fase de termino
    if(gradeCounter != 0)
    {
        average = static_cast<double> (total) / gradeCounter;
        cout << "A media da turma e " << setprecision(2)
             << setiosflags (ios::fixed | ios::showpoint) << average << endl;
    }
    else
    {
        cout << "Nenhuma nota fornecida" << endl;
    }

    return 0;
}
