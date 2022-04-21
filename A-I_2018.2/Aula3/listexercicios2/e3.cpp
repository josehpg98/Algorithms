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
        cout<<"\no maior numero é "<<n1<<" e a diferença de "<<n2<<" é "<<n1-n2;
    else if(n1<n2)
        cout<<"\no maior nuemro é "<<n2<<" e a diferença de "<<n1<<" é "<<n2-n1;
    else
        cout<<"\nos numeros são iguais";
 }
