#include <iostream>
#include <locale.h>
using namespace std;
main( )
{
    setlocale(LC_ALL,"Portuguese");
    float valor, pag, va, vtp;

    cout<<"informe o valor total de prestações do consórcio: ";
    cin>> valor;

    cout<<"informe a quantidade de prestações pagas: ";
    cin>> pag;

    cout<<"informe o valor atual da prestação: ";
    cin>> va;

    vtp = valor / pag;

    cout<<"o total pago é: " << vtp;
}
