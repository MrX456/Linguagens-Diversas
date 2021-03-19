#include <iostream>

using namespace std;

//Estruturas aninhadas

int main()
{
    //Contar total de alunos aprovados e reprovados
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int result;

    //Processar 10 estudantes
    while(studentCounter <= 10)
    {
        cout << "Forneca o resultado (1=aprovado 2=reprovado) : ";
        cin >> result;

        if(result == 1)
        {
            passes = passes + 1;
        }
        else
        {
            failures = failures + 1;
        }

        studentCounter = studentCounter + 1;
    }

    //Fase de término
    cout << "aprovados " << passes << endl;
    cout << "reprovados " << failures << endl;

    if(passes > 8)
    {
        cout << "Aumente o preco do curso" << endl;
    }

    return 0;
}
