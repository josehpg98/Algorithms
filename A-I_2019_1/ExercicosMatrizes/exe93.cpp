#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
main( )
{
    srand(time(NULL));
    int M[5][5];
    int l,c,s1,s2,s3,s4,s5;
    for(l=0; l<5; l++)
    {
        for(c=0; c<5; c++)
        {
            // cin>> M[l][c];
            M[l][c] = rand()%50;
            cout << M[l][c] << "\t";
            //Sleep(1111);
        }
        cout<<"\n\n";
    }
    cout<<"\n\n";
    s1 =  M[3][0] +  M[3][1] +  M[3][2] +  M[3][3] +  M[3][4];
    s2 = M[0][1] +  M[1][1] +  M[2][1] +  M[3][1] +  M[4][1];
    s3 = M[0][0] +  M[1][1] +  M[2][2] +  M[3][3] +  M[4][4];
    s4 = M[0][4] + M[1][3] + M[2][2] + M[3][1] + M[4][0];
    s5 = M[0][0] + M[0][1] + M[0][2] + M[0][3] + M[0][4] + M[1][0] + M[1][1] + M[1][2] + M[1][3] + M[1][4] + M[2][0] + M[2][1] + M[2][2] + M[2][3] + M[2][4] + M[3][0] + M[3][1] + M[3][2] + M[3][3] + M[3][4] + M[4][0] + M[4][1] + M[4][2] + M[4][3] + M[4][4];
    cout<<"\n a soma dos valores da linha 4, corresponde a " <<  s1 << endl;
    cout<<"\n a soma dos valores da coluna 2 , corresponde a " <<  s2 << endl;
    cout<<"\n a soma dos valores da diagonal principal , corresponde a " <<  s3 << endl;
    cout<<"\n a soma dos valores da diagonal secundária , corresponde a " <<  s4 << endl;
    cout<<"\n a soma dos valores todos da matriz , corresponde a " <<  s5 << endl;
}
