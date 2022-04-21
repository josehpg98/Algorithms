#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;
void contapalavra(char *text);
void mudapalavra(char *text);
void inverter(char *tt);
main ()
{
    setlocale(LC_ALL,"Portuguese");
    char *txt = new char[100];
    cout<<"Digite um texto qualquer: " << endl;
    gets(txt);
    contapalavra(txt);
}
void contapalavra(char *text)
{
    int *ctma = new int(0);
    int *ctmi = new int(0);
    for (int i=0; i < strlen(text); i++)
    {
        if(islower(text[i]))
        {
            (*ctmi)++;
        }
        else if(isupper(text[i]))
        {
            (*ctma)++;
        }
    }
    cout<<"O total de caracteres maiúsculos é : " << *ctma << endl;
    cout<<"O total de caracteres minúsculos é :  " << *ctmi << endl;
    cout<<endl;
    mudapalavra(text);
}
void mudapalavra(char *text)
{
    cout<<"Texto original digitado: " << endl;
        for (int i=0; i < strlen(text); i++)
    {
        cout<<text[i];
    }
    cout<<endl;
    cout<<"O texto em minúsculo: " << endl;
    for (int i=0; i < strlen(text); i++)
    {
        text[i] = tolower(text[i]);
        cout<<text[i];
    }
    cout<<endl;
    inverter(text);
}
void inverter(char *tt)
{
    cout<<"O texto invertido é : " << endl;
      for (int i=strlen(tt); i >= 0; i--)
    {
        cout<<tt[i];
    }
}

