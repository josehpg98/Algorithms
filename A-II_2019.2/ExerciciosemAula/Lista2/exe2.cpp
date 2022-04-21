#include<iostream>
#include<cmath>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    int ct,qla;
    float qmp,ce,aut,r1,r2;
    cout<<"informe a capacidade do tanque em litros:" << endl;
    cin>>ct;
    cout<<"informe a quantidade de litros abastecidos: " << endl;
    cin>>qla;
    cout<<" informe a quantidade percorrida desde o último abastecimento: " << endl;
    cin>>qmp;
    ce = (qmp / qla);
    aut = (ct - qla) * ce;
    r1 = ceil(ce);
    r2 = ceil(aut);
    cout<<" o consumo efetuado do veículo é..... : " << r1 << " km/l " << endl;
    cout<<"a autonomia do veículo é..... : "         <<  r2 << " Km " << endl;
}
