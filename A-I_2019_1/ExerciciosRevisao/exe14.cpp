#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     float ht,vht,sb,sl,td,pd;

    cout<<"\n informe a quantidade de horas trabalhadas: ";
    cin>>ht;
    cout<<"\n informe o valor da hora trabalhada:";
    cin>>vht;
    cout<<"\n informe o percentual de desconto: ";
    cin>>pd;
    sb = ht * vht;
    td = pd / 100;
    sl = sb -td;
    cout<<"\n o valor do salário bruto é: " << sb;
    cout<<"\n o total de descontos e de: " << td;
    cout<<"\n o seu salário liquido é: " << sl;
}
