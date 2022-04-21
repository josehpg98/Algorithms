#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    char texto[100];
    char *ptexto;
    ptexto = texto;

    cout << "Informe um texto qualquer: ";
    gets(texto);
    fflush(stdin);


    while(*ptexto)
    {
        cout << *ptexto << ", ";
        ptexto++;
    }

    ptexto = ptexto - strlen(texto);
    cout << "\n\n";
    while(*ptexto)
    {
        cout << *ptexto << ", ";
        ptexto++;
    }

}
