#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1,n2,s;
    cout<<"\n informe um numero: ";
    cin>>n1;
    cout<<"informe o segundo numero: ";
    cin>>n2;
    s = (n1 - n2);
    cout<<"\n a subtra��o de " << n1 << " por " << n2 << " � igual a " << s;
}
