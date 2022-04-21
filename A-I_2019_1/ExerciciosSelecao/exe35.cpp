#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    string n;
    cout<<"\n informe o seu nome:";
    cin>>n;
    cout<<"\n informe a sua idade:";
    cin>>i;
    if(i <= 10)
    {
        cout<< n << " irá pagar R$30,00 pelo seu plano!";
    }
    else if(i > 10 && i <= 29)
    {
        cout<< n << " irá pagar R$60,00 pelo seu plano!";
    }
    else if(i > 29 && i <= 45)
    {
        cout<< n << " irá pagar R$120,00 pelo seu plano!";
    }
    else if(i > 45 && i <= 59)
    {
        cout<< n << " irá pagar R$150,00 pelo seu plano!";
    }
    else if(i > 59 && i <= 65)
    {
        cout<< n << " irá pagar R$250,00 pelo seu plano!";
    }
    else
    {
        cout<< n << " irá pagar R$400,00 pelo seu plano!";
    }
}
