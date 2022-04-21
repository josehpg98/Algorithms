#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;


void leitura(int mat[][5]);
void mostra(int mat[][5]);
void acima_dp(int mat[][5]);
void abaixo_dp(int mat[][5]);

main()
{
    int a[5][5];
    leitura(a);
    mostra(a);
    cout << "\nElementos Acima da DP: " << endl;
    acima_dp(a);
    cout << "\nElementos Abaixo da DP: " << endl;
    abaixo_dp(a);
}

void leitura(int mat[][5])
{
    int i, x;
    srand(time(NULL));
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            mat[i][x] = rand() % 100;
        }
    }
}

void mostra(int mat[][5])
{
    int i, x;
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            cout << mat[i][x] << "\t";
        }
        cout << "\n";
    }
}

void acima_dp(int mat[][5])
{
    int i, x;
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            if(i < x)
                //cout << mat[i][x] << "\t";
                mat[i][x] = 0;
        }
    }
}

void abaixo_dp(int mat[][5])
{
    int i, x;
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            if(i > x)
                cout << mat[i][x] << "\t";
        }
    }
}

