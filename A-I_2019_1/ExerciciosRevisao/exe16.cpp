#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int s,c,cq,v,dz,cc,d,u;


    cout<<"\n informe a quantia a ser sacada: ";
    cin>>s;
    c = s / 100;
    s = s % 100;
    cq = s / 50;
    s = s % 50;
    v = s / 20;
    s = s % 20;
    dz = s / 10;
    s = s % 10;
    cc = s / 5;
    s = s % 5;
    d = s / 2;
    s = s % 2;
    u = s / 1;
    s = s % 1;


    cout<<"\n a quantidade de notas de 100 reais é: " << c;
    cout<<"\n a quantidade de notas de 50 reais é: " << cq;
    cout<<"\n a quantidade de notas de 20 reais é: " << v;
    cout<<"\n a quantidade de notas de 10 reais é: " << dz;
    cout<<"\n a quantidade de notas de 5 reais é: " << cc;
    cout<<"\n a quantidade de notas de 2 reais é: " << d;
    cout<<"\n a quantidade de notas de 1 real é: " << u;
    cout<<" o saldo restante é: " << endl;
}
