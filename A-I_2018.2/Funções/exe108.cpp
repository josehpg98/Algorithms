#include<iostream>
#include<locale.h>
using namespace std;
float reajustesalario (float salario);
main()
{
    setlocale(LC_ALL,"Portuguese");
    float sal,salreaj;
    cout<<"\n informe o sal�rio atual: ";
    cin>>sal;
    salreaj = reajustesalario(sal);
    cout<<"\n seu sal�rio reajustado ser� de: " << salreaj;
}
float reajustesalario (float salario){
    return(salario*0.15)+salario;
}
