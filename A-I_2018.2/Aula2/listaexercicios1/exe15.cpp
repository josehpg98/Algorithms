#include<iostream>
using namespace std;
main()
{
    int sm, kw, vlpg, nvlpg, nvllpg;
    float vlkw;
    cout<<"informe o valor do salário minimo: ";
    cin>> sm;
    cout<<"informe a quantidade de kilowatts gastos: ";
    cin>> kw;

    vlkw = (sm /7)/ 100;
    vlpg = (kw *vlkw);
    nvlpg = (vlpg * 10) / 100;
    nvllpg = vlpg - nvlpg;

    cout<<"o valor em reais de cada kw é R$" << vlkw;
    cout<<"\n o valor em reais a ser pago é R$" << vlpg;
    cout<<"\n o valor com 10 por cento de aumento´e: "<< nvllpg;

}
