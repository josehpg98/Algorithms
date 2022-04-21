#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float x;
    cout<<"informe o seu saldo: ";
    cin>> x;

    if(x<=200)
        cout<<"nenhum crédito! ";
    else if(x<=201)
        cout<<" o crédito recebido é "<<(x*20)/100<<"R$";
    else if(x<=401)
        cout<<" o crédito recebido é "<<(x*30)/100<<"R$";
    else
        cout<<" o crédito recebido é "<<(x*40)/100<<"R$";
}
