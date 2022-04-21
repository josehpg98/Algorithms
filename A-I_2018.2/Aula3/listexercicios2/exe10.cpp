#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int id;

    cout<<"informe  a sua idade: ";
    cin>> id;

    if(id <= 10)
        cout<<" você irá pagar R$30,00";
    else if(id > 10 && id <= 29)
        cout<<"você irá pagar R$60,00";
     else if(id > 29 && id <= 45)
        cout <<"você irá pagar R$120,00";
     else if(id > 45 && id <= 59)
        cout <<"você irá pagar R$150,00";
     else if(id > 59 && id <= 65)
        cout<<"você irá pagar R$250,00";
    else if(id > 65)
        cout<<"você irá pagar R$400";
}
