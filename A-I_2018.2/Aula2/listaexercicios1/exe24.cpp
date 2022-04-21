#include<iostream>
using namespace std;
main()
{
    int d, ano, mes, dia ;
    cout<<"informe sua idade em dias: ";
    cin>> d;

    ano = d / 365;
    mes = (d % 365) / 30;
    dia = (d % 365) % 30;

    cout<<  ano << " ano ";
    cout<< mes << " mes ";
    cout<< dia << " dias";

}
