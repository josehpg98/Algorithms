#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");

    int t,b,n,v,pb,pn,pv;
    cout<<"\n total de eleitores";
    cin>>t;
    cout<<"\n informe o numero de votos brancos: ";
    cin>>b;
    cout<<"\n informe o total de votos nulos:";
    cin>>n;
    cout<<"\n inforne o total de  votos válidos: ";
    cin>>v;
    pb = (b*100)/ t;
    pn = (n*100)/ t;
    pv = (v*100)/ t;
    cout<<"\n o percentual de votos brancos é " << pb;
    cout<<"\n o percentual de votos nulos é " << pn;
    cout<<"\n o percentual de votos válidos é " << pv;
}

