#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    float n1,n2;
    cout<<"\ndigite o primeiro numero";
    cin>>n1;
    cout<<"\ndigite o segundo numero";
    cin>>n2;
    if(n1>n2)
        cout<<"\no maior numero � "<<n1;
    else if(n1<n2)
        cout<<"\no maior nuemro � "<<n2;
    else
        cout<<"\nos numeros s�o iguais";
}
