#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int int1,int2;
    float q;
    cout<<"\n informe um numero: ";
    cin>>int1;
    cout<<"informe o segundo numero: ";
    cin>>int2;
    q = (int1%int2);
    cout<<"\n o quociente de " << int1 << " por " << int2 << " é igual a " << q;
}
