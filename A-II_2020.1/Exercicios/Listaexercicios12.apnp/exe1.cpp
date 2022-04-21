#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
void quantidade(char *pt)
{
    cout<<"Quanridade de letras maiúsculas e minùsculas! " << endl;
    int contmaiuscula = 0, contminuscula = 0;
    while(*pt)
    {
        if(isupper(*pt))
        {
            contmaiuscula += 1;
        }
        if(islower(*pt))
        {
            contminuscula += 1;
        }
        pt++;
    }
    cout<<"Total de Letra Maiúsculas: " << contmaiuscula <<endl;
    cout<<"Total de Letra Minúsculas: " << contminuscula <<endl;
    cout<<endl;
}
void transforma(char *pt){
     cout<<"Texto Transformado em Maiúsculo: " << endl;
    int *i=new int(0);
    while(*pt)
    {
        *pt=toupper(*pt);
        cout<<*pt;
        pt++;
        (i)++;
    }
    delete(i);
}
void inverte_texto(char *pt){
    cout<<"Texto invertido: " << endl;
      int *i=new int(0);
    *i = strlen(pt);
    pt=pt+(*i);
    while(*i>=0)
    {
        cout<<*pt;
        pt--;
        (*i)--;
    }
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    char texto[100];
    char *ptexto = texto;

    cout<<"Informe um texto qualquer: " << endl;
    gets(texto);
    fflush(stdin);
    quantidade(ptexto);
    transforma(ptexto);
    inverte_texto(ptexto);
}
