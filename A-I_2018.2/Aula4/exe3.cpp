#include<iostream>
#include<locale.h>
using namespace std;
main()
{

     setlocale(LC_ALL,"Portuguese");
    int c;
    cout<<"informe o c�digo de origem: ";
    cin>> c;

    switch(c)
    {
    case 1:
        cout<<" � regi�o sul ";
        break;
    case 2:
        cout<<" � regi�o norte ";
        break;
    case 3:
        cout<<" � regi�o leste ";
        break;
    case 4:
        cout<<" � regi�o oeste";
        break;
    case 5:
    case 6:
        cout<<" � regi�o nordeste ";
        break;
    case 7:
    case 8:
    case 9:
        cout<<" � regi�o sudeste ";
        break;
    case 10 ... 20:
        cout<<"� regi�o centro oeste";
        break;
    case 21 ... 30:
        cout<<" � regi�o noroeste";
        break;
    default:
        cout<<"op��o invalida";
    }
}
