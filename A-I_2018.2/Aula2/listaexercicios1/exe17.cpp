#include <iostream>
#include <locale.h>
using namespace std;
main( )
{
    setlocale(LC_ALL,"Portuguese");
    float a, b, c;

    cout<<"\n informe um valor para a: ";
    cin>> a;

    cout<<"\in informe um valor para b: ";
    cin>> b;

    c = a;
    a = b;
    b = c;


    cout<<"os valores trocados de a é:" << a <<" e b " << b ;

}
