#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float sm,vht,vhet,sb,qre,sr;
    int ht,het;

    cout<<"\n informe o número de horas trabalhadas: ";
    cin>>ht;
    cout<<"\n informe o valor do salário minímo: ";
    cin>>sm;
    cout<<"\n informe o número de horas extras trabalhadas: ";
    cin>>het;
    vht = (sm / 8);
    vhet = (sm /4);
    sb = (ht * vht);
    qre = (het * vhet);
    sr = sb + qre;

    cout<<"\n o valor da hora trabalhada é: " << vht;
    cout<<"\n o valor da hora extra trabalhada é: " << vhet;
    cout<<"\n o valor do salário bruto é: " << sb;
    cout<<"\n o valor da quantidade de horas extras trabalhadas é: " << qre;
    cout<<"\n o valor do salário total a receber é: " << sr;

}
