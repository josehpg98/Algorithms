#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
//Faça um algoritmo que leia a velocidade permitida em uma via, a velocidade
//praticada por um motorista, e informe se o mesmo receberá multa ou não, e o valor
//a pagar. Caso tenha excedido a velocidade em até 20% da permitida, o motorista
//receberá uma multa de R$ 102,00. Caso tenha excedido a velocidade acima de
//20% da permitida, o motorista receberá uma multa de R$ 500,00.

main()
{
    setlocale(LC_ALL,"Portuguese");

    double vr,vm,evr;

    cout<<"\n informe a velocidade da rodovia: " << endl;
    cin>>vr;
    cout<<"\n informe a velocidade do motorista: ";
    cin>>vm;
    evr = ((vr * 20) / 100) + vr;
    if(vm < vr)
    {
        cout<<"\n você não reberá multa!";
    }
   else if(vm <= evr)
    {
        cout<<"\n você receberá multa de R$102,00! ";
    }
    else
    {
       cout<<"\n você receberá multa de R$500,00! ";
    }


    cout<<"\n a velocidade permitida  excedida nma via é: "<<evr;

}
