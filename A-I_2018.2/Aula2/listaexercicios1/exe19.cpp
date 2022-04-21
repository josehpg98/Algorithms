#include<iostream>
using namespace std;
main()
{
    int ur, uc, c, d, v, ci, tot;
    cout<<"informe a quantidade de moedas de 1 centavo: ";
    cin>> uc;
    cout<<"imforme a quantidade de moedas de 5 centavos: ";
    cin>> c;
    cout<<"informe a quantidade de moedas de 10 centavos: ";
    cin>> d;
    cout<<"informe a quantidade moedas de 25 centavos: ";
    cin>> v;
    cout<<"informe a quantidade moedas de 50 centavos: ";
    cin>> ci;
    cout<<"informe a quantidade de moedas de 1 real: ";
    cin>> ur;

    tot = uc + c + d + v + ci + ur;
    cout<<"o total de moedas no cofrinho é: " << tot;

}
