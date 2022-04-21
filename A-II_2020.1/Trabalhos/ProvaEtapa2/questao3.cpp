#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
    char texto[10];
    char *ptexto;
    ptexto = texto;
    cout<<"informe um texto ";
    gets(texto);
    fflush(stdin);
    cout<<"testo lido: \n ";
    while(*+ptexto){
        cout<<*ptexto;
        ptexto++;
    }
     cout<<"testo invertido: \n ";
    while(*ptexto){
        ptexto--;
        cout<<*ptexto;
    }
}
