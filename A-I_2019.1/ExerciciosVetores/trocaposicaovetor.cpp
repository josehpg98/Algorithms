#include<iostream>
#include<clocale>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
    int V[4], aux, i=0, j=3;
    cout<<"Digite um conjunto de valores:\n";
    for(i=0;i<4;i++)
    {
        cin>>V[i];
    }
    //system("cls");
    for(i=0;i<2;i++)
    {
            aux = V[i];
            V[i] = V[j];
            V[j] = aux;
            j--;

    }
    cout<<"\n Vetor trocado:\n";
    for(i=0;i<4;i++)
    {
        cout<<V[i] << endl;
    }
}
