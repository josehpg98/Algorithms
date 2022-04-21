#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
main( )
{
    srand(time(NULL));
    int M[3][6];
    int l,c,v;
    for(l=0; l<3; l++)
    {
        for(c=0; c<6; c++)
        {
         // cin>> M[l][c];
            M[l][c] = rand()%150;
            cout << M[l][c] << "\t";
            Sleep(1111);
        }
        cout<<"\n\n";
    }
    cout<<"\n\n";
    cout<<"\n informe um número para multiplicar os valores da matriz: ";
    cin>>v;
    cout<<"\n a nova matriz com os valores multiplicados mostrada abaixo " << endl();
     for(l=0; l<3; l++)
    {
        for(c=0; c<6; c++)
        {

            M[l][c] =   M[l][c] * v;;
            cout << M[l][c] << "\t";

        }
        cout<<"\n\n";
    }
}
