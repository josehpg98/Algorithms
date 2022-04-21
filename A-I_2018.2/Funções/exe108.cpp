#include<iostream>
#include<locale.h>
using namespace std;
float reajustesalario (float salario);
main()
{
    setlocale(LC_ALL,"Portuguese");
    float sal,salreaj;
    cout<<"\n informe o salário atual: ";
    cin>>sal;
    salreaj = reajustesalario(sal);
    cout<<"\n seu salário reajustado será de: " << salreaj;
}
float reajustesalario (float salario){
    return(salario*0.15)+salario;
}
