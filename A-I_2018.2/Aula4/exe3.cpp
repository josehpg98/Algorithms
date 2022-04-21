#include<iostream>
#include<locale.h>
using namespace std;
main()
{

     setlocale(LC_ALL,"Portuguese");
    int c;
    cout<<"informe o código de origem: ";
    cin>> c;

    switch(c)
    {
    case 1:
        cout<<" é região sul ";
        break;
    case 2:
        cout<<" é região norte ";
        break;
    case 3:
        cout<<" é região leste ";
        break;
    case 4:
        cout<<" é região oeste";
        break;
    case 5:
    case 6:
        cout<<" é região nordeste ";
        break;
    case 7:
    case 8:
    case 9:
        cout<<" é região sudeste ";
        break;
    case 10 ... 20:
        cout<<"é região centro oeste";
        break;
    case 21 ... 30:
        cout<<" é região noroeste";
        break;
    default:
        cout<<"opção invalida";
    }
}
