#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;
void leitura(int *pv);
void mostra(int **p);
main()
{
    int valor;
    leitura(&valor);
    cout << "\nValor no main: " <<
         valor;
}
void leitura(int *pv)
{
    cout << "Informe um valor: ";
    cin >> *pv;
    fflush(stdin);
    mostra(&pv);
}
void mostra(int **p)
{
    cout << "Valor digitado: " <<
         **p;
    **p += 3;
}
