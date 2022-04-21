#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int var1,var2;
     float m;
    cout<<"\n informe um numero: ";
    cin>>var1;
    cout<<"informe o segundo numero: ";
    cin>>var2;
    m = (var1 + var2)/ 2;
    cout<<"\n a média de " << var1 << " por " << var2 << " é igual a " << m;
}
