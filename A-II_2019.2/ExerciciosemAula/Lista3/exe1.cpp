#include<iostream>
using namespace std;
float calculaconsumo(float vl,int p,float t);
main()
{
    int pd;
    float vkw,tl,vlt;
    cout<<"informe o valor do kv/h: " << endl;
    cin>>vkw;
    cout<<"informe o valor a potência do dispositivo: " << endl;
    cin>>pd;
    cout<<"informe o tempo que o equipamento ficou ligado: " << endl;
    cin>>tl;
    vlt = calculaconsumo(vkw,pd,tl);
    cout<<" o valor de consumo do dispositivo é: " << vlt << " reais!" << endl;
}
float calculaconsumo(float vl,int p,float t){
    float con;
    con = (p * t);
    con = (con * vl);
    return con;
}