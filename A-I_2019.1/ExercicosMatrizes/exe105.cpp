#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
main( )
{
    srand(time(NULL));
    int M[3][3], N[3][3],P[3][3];
    int l,c,l1,c1,L2,C2,aux = 0;
    cout<<" matriz A" << endl;
    for(l=0; l<3; l++)
    {
        for(c=0; c<3; c++)
        {
            // cin>> M[l][c];
            M[l][c] = rand()%50;
            cout << M[l][c] << "\t";
            //Sleep(1111);
        }
        cout<<"\n\n";
    }
    cout<<"\n\n";

    cout<<"\n matriz B " << endl;
    for(l1=0; l1<3; l1++)
    {
        for(c1=0; c1<3; c1++)
        {
             N[l1][c1] = rand()%50;
            cout << N[l1][c1] << "\t";
        }
        cout<<"\n\n";
    }
    cout<<"\n matriz pRODUTO " << endl;
    for(L2=0; L2<3; L2++)
    {
        for(C2=0; C2<3; C2++)
        {
            P[0][0] = M[0][0] + N[0][0];
            P[0][1] = M[0][1] + N[0][1];
            P[0][2] = M[0][2] + N[0][2];
            P[1][0] = M[1][0] + N[1][0];
            P[1][1] = M[1][1] + N[1][1];
            P[1][2] = M[1][2] + N[1][2];
            P[2][0] = M[2][0] + N[2][0];
            P[2][1] = M[2][1] + N[2][1];
            P[2][2] = M[2][2] + N[2][2];
            cout << P[L2][C2] << "\t";
        }
        cout<<"\n\n";
    }
}


