#include<iostream>
using namespace std;
main()
{
    int s, v, c, ns;
    cout<<"informe seu sal�rio fixo: ";
    cin>> s;
    cout<<"informe o valor de suas vendas: ";
    cin>> v;

    c = (v * 4)/ 100;
    ns = c + s;
    cout<<"seu sal�rio, mais a comiss�o ser�: " << ns;
}
