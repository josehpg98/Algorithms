#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
main( )
{
    srand(time(NULL));
    int M[5][5];
    int l,c;
    for(l=0; l<5; l++)
    {
        for(c=0; c<5; c++)
        {
// cin>> M[l][c];
            M[l][c] = rand()%100;
            cout << M[l][c] << "\t";
            Sleep(2222);
        }
        cout<<"\n\n";
    }
    cout<<"\n\n";
    cout<<"\n a matriz completada!";
}
