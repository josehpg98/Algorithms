#include<iostream>
using namespace std;
float reajustasalario(float sf,float vv,float p);
main()
{
    float slfx,vv,pgv,r;
    cout<<" informe seu saláio fixo: " << endl;
    cin>>slfx;
    cout<<" informe o valor total de vendas: " << endl;
    cin>>vv;
    cout<<" informe a porcentagem de ganho sobre as vendas: " << endl;
    cin>>pgv;
    r = reajustasalario(slfx,vv,pgv);
    cout<<"seu salário fixo é de: " << slfx << " , já seu salário com o percentual de vendas é de: " << r << " reais!" << endl;
}
float reajustasalario(float sf,float vv,float p){
    float rs;
    rs = (vv * p) + sf;
    return rs;
}