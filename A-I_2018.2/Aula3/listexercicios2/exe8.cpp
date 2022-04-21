#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;
    cout<<"informe o primero valor: ";
    cin>> a;
    cout<<"informe o segundo valor: ";
    cin>> b;
    cout<<"informe o terceiro e ultimo valor:";
    cin>> c;

    if(a >= b && a > c)
    cout<<" o resultado é: "<< a << " maior que " << b <<" maior que " << c;
    else if(b >= a && b > c)
    cout<<" o resultado é: "<< b << " maior que " << a <<" maior que " << c;
    else
    cout<<" o resultado é: "<< c << " maior que " << b << " maior que " << a;
}
