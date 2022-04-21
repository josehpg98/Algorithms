#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
main( )
{
    srand(time(NULL));
    int M[3][4];
    int l,c,aux = 0;
    for(l=0; l<3; l++)
    {
        for(c=0; c<4; c++)
        {
            // cin>> M[l][c];
            M[l][c] = rand()%50;
            cout << M[l][c] << "\t";
            //Sleep(1111);
        }
        cout<<"\n\n";
    }
    cout<<"\n\n";

    cout<<"\n a nova matriz com os valores trocados mostrada abaixo " << endl;
    for(l=0; l<3; l++)
    {
        for(c=0; c<4; c++)
        {

            aux = M[0][c];
            M[0][c] = M[2][c];
            M[2][c] = aux;
            cout << M[l][c] << "\t";

        }
        cout<<"\n\n";
    }
}

