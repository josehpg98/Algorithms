#include<iostream>
using namespace std;
main()
{
    float ht, vlmin, het, vlht, vlhex, sb, qhet, sal;
    cout<<"informe o n�mero de horas trabalhadas: ";
    cin>> ht;
    cout<<"informe o valor do sal�rio minimo: ";
    cin>> vlmin;
    cout<<"informe o n�mero de horas extras trabalhadas: ";
    cin>> het;

    vlht = vlmin / 8;
    vlhex = vlmin / 4;
    sb = ht * vlht;
    qhet = het * vlhex;
    sal = sb + qhet;
    cout<<"o seu sal�rio h� receber � "<< sal << " reais";

}
