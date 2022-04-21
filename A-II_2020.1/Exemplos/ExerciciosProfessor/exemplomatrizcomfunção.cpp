#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;
void leitura(int mat[][5]);
void mostramatriz(int mat[][5]);
main()
{
    int a[5][5];
    leitura(a);
    mostramatriz(a);
}
void leitura(int mat[][5])
{
    int i, x;
    srand(time(NULL));
    for(i = 0; i < 5; i++)//linha
    {
        for(x = 0; x < 5; x++)//coluna
        {
            mat[i][x] = rand() % 100;
        }
    }
}
void mostramatriz(int mat[][5]){
     int i, x;
    srand(time(NULL));
    for(i = 0; i < 5; i++)//linha
    {
        for(x = 0; x < 5; x++)//coluna
        {
           cout<< mat[x][i] <<"\t";

        }
        cout<<endl;
    }
}
