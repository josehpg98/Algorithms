#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int c;
    float s,sr;
    cout<<"\n informe o cargo (1-tecnico | 2-gerente | 3-demais funcionarios): ";
    cin>>c;
    cout<<"\n informe o seu salário: ";
    cin>>s;
    switch(c)
    {
    case 1:
        sr = ((s * 50) / 100) + s;
        cout<<"\n o salario reajustado é : " << sr;
        break;
    case 2:
        sr = ((s * 30) / 100) + s;
        cout<<"\n o salario reajustado é : " << sr;
        break;
    case 3:
        sr = ((s * 20) / 100) + s;
        cout<<"\n o salario reajustado é : " << sr;
        break;

    default:
        cout<<"\n cargo não encontrado!"<< c;
    }
}
