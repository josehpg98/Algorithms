#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void leitura(int *p1, int *p2);
int soma(int *ps1, int *ps2);

main()
{
    int *pv1 = new int(0);
    int *pv2 = new int(0);

    leitura(pv1, pv2);

    system("cls");
    cout << "Valor 1: " << *pv1 << endl;
    cout << "Valor 2: " << *pv2 << endl;
    cout << "Soma: " << soma(pv1, pv2);
}

void leitura(int *p1, int *p2)
{
    cout << "Informe o valor 1: ";
    cin >> *p1;
    fflush(stdin);

    cout << "Informe o valor 2: ";
    cin >> *p2;
    fflush(stdin);
}

int soma(int *ps1, int *ps2)
{
    return *ps1 + *ps2;
}
