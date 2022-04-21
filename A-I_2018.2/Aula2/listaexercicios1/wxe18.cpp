#include<iostream>
using namespace std;
main()
{
    int vc;
    float c, f;
    cout<<"informe o valor total da conta do bar: ";
    cin>> c;

    vc = c / 3;
    f = c - (vc*2);

    cout<<"carlos e andre pagarao R$" << vc << " e felipe pagara R$" << f;
}
