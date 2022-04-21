#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     float s,sr;
     int v,vr;
    cout<<"\n informe seu salário fixo: ";
    cin>>s;
    cout<<"\n informe o valor total das vendas: ";
    cin>>v;
    vr =( (v * 4) / 100);
    sr = vr + s;
    cout<<"\n o seu salario reajustado ficara em: " << sr;
}
