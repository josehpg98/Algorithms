#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int vr, vm, rm,rmd;
    cout<<"informe a velocidade permitida na via: ";
    cin>> vr;
    cout<<"informe a velocidade do motorista de determinado veiculo: ";
    cin>> vm;
    rm = (vm * 20)/ 100;
    rmd = rm - vr;
    if()
}
