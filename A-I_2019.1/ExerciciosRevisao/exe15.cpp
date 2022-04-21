#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int qwt;
     float vq,vp,vd,sm = 998.0;

    cout<<"\n informe a quantidade de quilowatts consumidos: ";
    cin>>qwt;
    vq =  ( sm / 7 ) / 100;
    vp = qwt * vq;
    vd = vp - ( (vp * 10) / 100);


    cout<<"\n o valor em reais por cada quilowat  é: " << vq;
    cout<<"\n o valor pago é: " << vp;
    cout<<"\n o valor pago com 10% de desconto  é: " << vd;

}
