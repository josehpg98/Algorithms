#include<iostream>
using namespace std;
main()
{
    int ht, vht, pd, sb, td, sl;
    cout<<"informe a quantia de horas trabalhadas: ";
    cin>> ht;
    cout<<"informe o valor das horas trabalhadas: ";
    cin>> vht;
    cout<<"informe o percentual de desconto: ";
    cin>> pd;

    sb = (ht * vht);
    td = (pd * sb )/ 100;
    sl = sb - td;

    cout<<" o seu sal�rio bruto �: " << sb;
    cout<<"\n o total de descontos �: " << td;
    cout<<"\n o seu sal�rio liquido �: " << sl;

}
