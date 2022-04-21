#include<iostream>
#include<locale.h>
using namespace std;
main()
{

     setlocale(LC_ALL,"Portuguese");
    int d;
    cout<<"informe o seu DDD: ";
    cin>> d;

    switch(d)
    {
    case 61:
        cout<<" é brasília ";
        break;
    case 71:
        cout<<" é salvador ";
        break;
    case 11:
        cout<<" é são paulo ";
        break;
    case 21:
        cout<<" é rio de janeiro ";
        break;
    case 32:
        cout<<" é juiz de fora";
        break;
    case 19:
        cout<<" é campinas ";
        break;
    case 27:
        cout<<" é vitória ";
        break;
    case 31:
        cout<<" é belo horizonte ";
        break;
    default:
        cout<<"opção invalida";
    }
}
