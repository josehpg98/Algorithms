#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;


main()
{
    setlocale(LC_ALL,"Portuguese");
    int c,ti;
    float vc;
    cout<<"\n informe o consumo em kwh: ";
    cin>>c;
    cout<<"\n informe o tipo de imovel: (1- residencia | 2- comercio | 3-industria)";
    cin>>ti;

    if(ti == 1)
    {
        vc = (c * 0.80);
        cout<<"\n o valor a ser pago é: " << vc;
    }
    else if(ti == 2)
    {
         vc = (c * 0.48);
         cout<<"\n o valor a ser pago é: " << vc;
    }
    else if(ti == 3)
    {
         vc = (c * 1.29);
         cout<<"\n o valor a ser pago é: " << vc;
    }
    else
    {
        cout<<"\n opção inválida! inválida!";
    }








}
