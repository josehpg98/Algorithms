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
        cout<<"\no maior numero � "<<n1<<" e a diferen�a de "<<n2<<" � "<<n1-n2;
    else if(n1<n2)
        cout<<"\no maior nuemro � "<<n2<<" e a diferen�a de "<<n1<<" � "<<n2-n1;
    else
        cout<<"\nos numeros s�o iguais";
 }
