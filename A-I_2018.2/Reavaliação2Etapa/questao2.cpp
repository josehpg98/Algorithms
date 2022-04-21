#include<iostream>
#include<locale.h>
#include <stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m [6][6];
    int sdp=0,mr;
    cout<<"matriz"<<endl;
    for(int i = 0; i<6; i++)
    {
        cout<<endl;
        for(int j = 0; j<6; j++)
        {
            m[i][j]=rand() % 150;
            cout<<m[i][j]<<" ";

        }
    }
    for(int i = 0; i<6; i++)
    {
        sdp += m[i][i];

    }
    //ganbiarra hahahahahha :)
    mr = m[2][4];

    cout<<endl;
    cout<<"\n ----------------------------";
    cout<<"\n soma da diagonal principal :"<<sdp;
    cout<<"\n o maior elemneto  é  :"<<mr;
}
