#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");

   float vd,tx,vr;

    cout<<"\n informe o valor do deposito: ";
    cin>>vd;
    cout<<"\n informe o valor da taxa de juros:";
    cin>>tx;
    vr =( (vd * tx) / 100) + vd;
    cout<<"\n a o valor há render é: " << vd;
    cout<<"\n a o valor rendido é: " << vr;

}
