#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b, c, d, e;
    cout<<"informe o primeiro valor: ";
    cin>> a;
    cout<<"informe o segundo valor: ";
    cin>> b;
    cout<<"informe o terceiro valor: ";
    cin>> c;
    cout<<"informe o quarto valor: ";
    cin>> d;
    cout<<"informe o quinto e último valor: ";
    cin>> e;

    if(a >= b && a >= c && a >= d && a >> e)
        cout<<" o maior número é " << a;

}
