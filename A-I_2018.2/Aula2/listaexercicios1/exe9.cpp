#include <iostream>
#include <locale.h>
using namespace std;
main( )
{
    setlocale(LC_ALL,"Portuguese");
    float valor, pag, va, vtp;

    cout<<"informe o valor total de presta��es do cons�rcio: ";
    cin>> valor;

    cout<<"informe a quantidade de presta��es pagas: ";
    cin>> pag;

    cout<<"informe o valor atual da presta��o: ";
    cin>> va;

    vtp = valor / pag;

    cout<<"o total pago �: " << vtp;
}
