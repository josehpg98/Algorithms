#include<iostream>
using namespace std;
string classificarveiculo(int ano);
float valorveiculo(string c, float valor);
main()
{
    setlocale(LC_ALL,"Portuquese");
    int af;
    float vl,vlvenda;
    string rc;
    cout<<"\n informe o ano de fabricação de seu veículo: ";
    cin>>af;
    cout<<"\n informe o valor do seu veículo: ";
    cin>>vl;

    rc = classificarveiculo(af);
    cout<<"\n classse " << rc;
    vlvenda = valorveiculo(rc,vl);
    cout<<"\n venda " << vlvenda;

    //cout<< rc << endl;
    cout<<"\n o valor de revenda é: " << vlvenda << endl;
}
string classificarveiculo(int ano)
{
    string r;
    if(ano == 2019)
    {
        r = "N" ;
    }
    if(ano == 2019 - 1 || ano == 2019 - 2)
    {
        r = "S" ;
    }
    if(ano < 2019 - 2)
    {
        r = "U";
    }
    return r;
}
float valorveiculo(string c, float valor){
    float vr;
    if( c == "N")
    {
        vr = (0.08 * valor) + valor;
    }
    if( c == "S")
    {
        vr = (0.10 * valor) + valor;
    }
    if( c == "U")
    {
        vr = (0.20 * valor) + valor;
    }
    return vr;
}
