#include<iostream>
#include<locale.h>
using namespace std;
main()
{

     setlocale(LC_ALL,"Portuguese");
    int mes;
    cout<<"informe o mes de 1 a 12: ";
    cin>> mes;

    switch(mes)
    {
    case 1:
        cout<<" é janeiro ";
        break;
    case 2:
        cout<<" é fevereiro ";
        break;
    case 3:
        cout<<" é março ";
        break;
    case 4:
        cout<<" é abril ";
        break;
    case 5:
        cout<<" é maio ";
        break;
    case 6:
        cout<<" é junho ";
        break;
    case 7:
        cout<<" é julho ";
        break;
    case 8:
        cout<<" é agosto ";
        break;
    case 9:
        cout<<" é setembro ";
        break;
    case 10:
        cout<<" é outubro ";
        break;
    case 11:
        cout<<" é novembro ";
        break;
    case 12:
        cout<<" é dezembro ";
        break;
    default:
        cout<<"opção invalida";
    }
}
