#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m;
    cout<<"\n informe um m�s atrav�s do correspondente n�mero: ";
    cin>>m;
    switch(m)
    {
    case 1:
        cout<<"\n o m�s � janeiro!";
        break;
    case 2:
        cout<<"\n o m�s � fevereiro!";
        break;
    case 3:
        cout<<"\n o m�s � mar�o!";
        break;
    case 4:
        cout<<"\n o m�s � abril!";
        break;
    case 5:
        cout<<"\n o m�s � maio!";
        break;
    case 6:
        cout<<"\n o m�s � junho!";
        break;
    case 7:
        cout<<"\n o m�s � julho!";
        break;
    case 8:
        cout<<"\n o m�s � agosto!";
        break;
    case 9:
        cout<<"\n o m�s � setembro!";
        break;
    case 10:
        cout<<"\n o m�s � outubro!";
        break;
    case 11:
        cout<<"\n o m�s � novembro!";
        break;
    case 12:
        cout<<"\n o m�s � dezembro!";
        break;
    default:
        cout<<"\n mes n�o encontrado!"<< m;
    }
}
