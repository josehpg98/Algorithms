#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    string n;
    int i;
    cout<<"\nqual � o seu nome?";
    cin>>n;
    cout<<"\nqual sua idade?";
    cin>>i;

    if(i<=10)
        cout<<n<<" voc� pagar� 30R$";
    else if(i<=29)
        cout<<n<<" voc� pagar� 60R$";
    else if(i<=45)
        cout<<n<<" voc� pagar� 120R$";
    else if(i<=59)
        cout<<n<<" voc� pagar� 150R$";
    else if(i<=65)
        cout<<n<<" voc� pagar� 250R$";
    else
        cout<<n<<" voc� pagar� 400R$";
}