#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2;
    cout<<"\ndigite o primeiro numero";
    cin>>n1;
    cout<<"\ndigite o segundo numero";
    cin>>n2;
    if(n1%n2==0)
        cout<<"\nO numero "<<n1<<" � divis�vel por "<<n2;
    else
        cout<<"\nO numero "<<n1<<" � n�o divis�vel por "<<n2;
}
