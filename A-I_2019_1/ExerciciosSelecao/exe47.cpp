#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;


main()
{
    setlocale(LC_ALL,"Portuguese");
    int c;
    float vc;
    cout<<"\n informe o consumo em kwh: ";
    cin>>c;

    if(c >= 0 && c <= 70)
    {
        vc = (c * 0.09);
        cout<<"\n o valor a ser pago é: " << vc;
    }
    else if(c >= 71  && c <= 150)
    {
         vc = (c * 0.20);
         cout<<"\n o valor a ser pago é: " << vc;
    }
    else if(c >= 151  && c <= 200)
    {
         vc = (c * 0.23);
         cout<<"\n o valor a ser pago é: " << vc;
    }
    else if(c > 200)
    {
         vc = (c * 0.26);
         cout<<"\n o valor a ser pago é: " << vc;
    }
    else
    {
        cout<<"\n opção inválida! inválida!";
    }








}
