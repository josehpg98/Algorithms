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
        cout<<" � bras�lia ";
        break;
    case 71:
        cout<<" � salvador ";
        break;
    case 11:
        cout<<" � s�o paulo ";
        break;
    case 21:
        cout<<" � rio de janeiro ";
        break;
    case 32:
        cout<<" � juiz de fora";
        break;
    case 19:
        cout<<" � campinas ";
        break;
    case 27:
        cout<<" � vit�ria ";
        break;
    case 31:
        cout<<" � belo horizonte ";
        break;
    default:
        cout<<"op��o invalida";
    }
}
