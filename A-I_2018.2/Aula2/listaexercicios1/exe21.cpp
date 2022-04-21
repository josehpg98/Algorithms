#include<iostream>
using namespace std;
main()
{
    float ht, vlmin, het, vlht, vlhex, sb, qhet, sal;
    cout<<"informe o número de horas trabalhadas: ";
    cin>> ht;
    cout<<"informe o valor do salário minimo: ";
    cin>> vlmin;
    cout<<"informe o número de horas extras trabalhadas: ";
    cin>> het;

    vlht = vlmin / 8;
    vlhex = vlmin / 4;
    sb = ht * vlht;
    qhet = het * vlhex;
    sal = sb + qhet;
    cout<<"o seu salário há receber é "<< sal << " reais";

}
