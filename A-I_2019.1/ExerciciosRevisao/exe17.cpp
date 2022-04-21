#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int a,b,c;

    cout<<"\n informe o valor da variavel a: ";
    cin>>a;
    cout<<"\n informe o valor da variavel b:";
    cin>>b;
    c = a;
    a = b;
    b = c;


    cout<<"\n o valor trocado de a  é: " << a;
    cout<<"\n o valor trocado de b  é: " << b;

}
