#include<iostream>
#include <cstdlib>// necessário p/ as funções rand() e srand
#include<time.h>//necessário p/ função time
using namespace std;
void leitura(int mat[][5]);
void mostra(int mat[][5]);
main()
{
    int a[5][5], menu = -1, flag = 0,esc;
    leitura(a);
    mostra(a);

    do
    {
        system("cls");//limpa a tela
        cout<<"###--Menu de Opções!--###" << endl;
        cout<<" 0 -sair" << endl;
        cout<<" 1 - gerar matriz" << endl;
        cout<<" 2 - mostrar matriz " << endl;
        cout<<" 3 - elementos da diogonal principal" << endl;
        cout<<" 4 - elementos da diagonal segundária" << endl;
        cout<<"---------------------------------------" << endl;
        cout<<"sua escolha: " << endl;
        cin>>esc;
    }
    while();

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
    int i,x;
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            cout<< mat[i][x] << "\t";
        }
        cout<<"\n";
    }
}
