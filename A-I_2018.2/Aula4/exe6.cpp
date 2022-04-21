#include<iostream>
#include<locale.h>>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int p;
    cout<<"informe o ultimo número da placa do carro: ";
    cin>> p;
        switch(p)
    {
    case 1:
        cout<<" é janeiro ";
        break;
    case 2:
        cout<<" é fevereiro ";
        break;
    case 3:
        cout<<" é marзo ";
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
    case 0:
        cout<<" é outubro ";
        break;
    default:
        cout<<"placa invalida";
    }
}


