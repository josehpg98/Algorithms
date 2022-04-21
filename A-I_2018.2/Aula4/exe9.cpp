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
    cout<<"agora, selecione a operação que deseja efetuar com os valores: 1=adição, 2=subtração, 3= multiplicação e 4=divisão ";
    cin>> op;

    switch(op)
    {
    case 1:
        r = (v1 + v2);
        cout<<"a soma de " << v1 << " por " << v2 << " é: " << r;
        break;
    case 2:
        r = (v1 - v2);
        cout<<"a subtração de " << v1 << " por " << v2 << " é: " << r;
        break;
    case 3:
        r = (v1 * v2);
        cout<<"a multiplicação de " << v1 << " por " << v2 << " é: " << r;
        break;
      case 4:
        r = (v1 / v2);
        cout<<"a divisão de " << v1 << " por " << v2 << " é: " << r;
        break;
    default:
        cout<<"opção inválida!";
    }
}


