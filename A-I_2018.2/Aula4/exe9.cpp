#include<iostream>
#include<locale.h>
using namespace std;
main()
{

     setlocale(LC_ALL,"Portuguese");
     int v1, v2, r, op;
    cout<<"digite um valor qualquer: ";
    cin>> v1;
    cout<<"digite outro valor qualquer: ";
    cin>> v2;
    cout<<"agora, selecione a opera��o que deseja efetuar com os valores: 1=adi��o, 2=subtra��o, 3= multiplica��o e 4=divis�o ";
    cin>> op;

    switch(op)
    {
    case 1:
        r = (v1 + v2);
        cout<<"a soma de " << v1 << " por " << v2 << " �: " << r;
        break;
    case 2:
        r = (v1 - v2);
        cout<<"a subtra��o de " << v1 << " por " << v2 << " �: " << r;
        break;
    case 3:
        r = (v1 * v2);
        cout<<"a multiplica��o de " << v1 << " por " << v2 << " �: " << r;
        break;
      case 4:
        r = (v1 / v2);
        cout<<"a divis�o de " << v1 << " por " << v2 << " �: " << r;
        break;
    default:
        cout<<"op��o inv�lida!";
    }
}


