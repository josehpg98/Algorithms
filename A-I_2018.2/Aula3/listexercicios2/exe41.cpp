#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m;
    cout<<"informe o m�s do ano na faixa de 1 a 12: ";
    cin>> m;

    if(m == 1)
           cout<<"o m�s � janeiro! ";
    else if(m == 2)
        cout<<"o m�s � fevereiro! ";
    else if(m == 3)
        cout<<"o m�s � mar�o! ";
    else if(m == 4)
        cout<<"o m�s � abril! ";
    else if(m == 5)
        cout<<"o m�s � maio! ";
    else if(m == 6)
        cout<<"o m�s � junho! ";
    else if(m == 7)
        cout<<"o m�s � julho! ";
    else if(m == 8)
        cout<<"o m�s � agosto! ";
    else if(m == 9)
        cout<<"o m�s � setembro! ";
    else if(m == 10)
        cout<<"o m�s � outubro! ";
    else if(m == 11)
        cout<<"o m�s � novembro! ";
    else if(m == 12)
        cout<<"o m�s � dezembro! ";
    else
        cout<<"op��o invalida! ";

}
