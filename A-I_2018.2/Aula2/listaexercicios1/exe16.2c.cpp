#include<iostream>
using namespace std;
main(){
    int v,ce,ci,vi,de,ci2,dois;
    cout<<"\n Informe o valor a ser sacado em Reais: ";
    cin>>v;
    ce = v/100;
    v = v%100;
    ci=v/50;
    v=v%50;
    vi = v/20;
    v=v%20;
    de= v/10;
    v=v%10;
    ci2 = v/5;
    v=v%5;
    dois = v/2;
    v=v%2;

    cout<<"\n notas de 100 = "<<ce;
    cout<<"\n notas de 50 = "<<ci;
    cout<<"\n notas de 20 = "<<vi;
    cout<<"\n notas de 10 = "<<de;
    cout<<"\n notas de 5 = "<<ci2;
    cout<<"\n notas de 2 = "<<dois;
    cout<<"\n notas de 1 = "<<v<<"\n\n";
