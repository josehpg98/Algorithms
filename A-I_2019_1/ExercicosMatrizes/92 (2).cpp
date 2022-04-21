#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
main()
{

    /*Faça  um  algoritmo  que  leia  uma  matriz  3x4  de  inteiros  e  em
    seguida  troque  a primeira linha com a última linha.
    Ao final a matriz alterada deve ser exibida.*/

    setlocale(LC_ALL,"Portuguese");
    int m[3][4],aux;

    int l,c;
    srand(time(NULL));

    for (l=0; l < 3; l++) //gera matriz
    {
        for (c=0; c < 4; c++)
        {
            m[l][c] = rand () % 10;
            cout << m[l][c] << "\t";
        }
        cout << endl;
    }




    cout <<"Troca Primeira linha por última linha: " << endl;
    for (l=0; l < 3; l++)
    {
        for (c=0; c < 4; c++)
        {
            aux = m[0][c];
            m[0][c] = m[2][c];
            m[2][c] = aux;
        }
        cout << endl;
    }


    for (l=0; l < 3; l++)
    {
        for (c=0; c < 4; c++)
        {
            cout << m[l][c] << "\t";

        }
        cout << endl;
    }









}
