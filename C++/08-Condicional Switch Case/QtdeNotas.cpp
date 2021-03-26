#include <iostream>

using namespace std;

int main()
{
   /*Este programa recebe as notas de uma turma representada por letras e depois
    *mostra a quantidade de cada nota
    */
    
    char grade;
    int aCount = 0,
        bCount = 0,
        cCount = 0,
        dCount = 0,
        fCount = 0;
    
    cout << "Forneca as notas representada por letras [a,b,c,d,f]" 
         << "Digite q para terminar a entrada dos dados." << endl;
         
    while(grade != 'q')
    {
        cout << "Forneca a nota [Digite 'q' para encerrar] : ";
        cin >> grade;
        
        switch (grade)
        {
            case 'q':
                break;
                
            case 'A':
            case 'a':
                aCount++;
                break;
                
            case 'B':
            case 'b':
                bCount++;
                break;
                
            case 'C':
            case 'c':
                cCount++;
                break;
                
            case 'D':
            case 'd':
                dCount++;
                break;
                
            case 'F':
            case 'f':
                fCount++;
                break;
                
            default:
                cout << "Letra invalida." << endl;
                break;
  
        }
    }
    
    cout << "Os totais de cada nota sao : " << endl;
    cout << "A: "<< aCount << endl;
    cout << "B: "<< bCount << endl;
    cout << "C: "<< cCount << endl;
    cout << "D: "<< dCount << endl;
    cout << "F: "<< fCount << endl;

    return 0;
}