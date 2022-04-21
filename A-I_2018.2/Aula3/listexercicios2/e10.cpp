#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    string n;
    int i;
    cout<<"\nqual é o seu nome?";
    cin>>n;
    cout<<"\nqual sua idade?";
    cin>>i;

    if(i<=10)
        cout<<n<<" você pagará 30R$";
    else if(i<=29)
        cout<<n<<" você pagará 60R$";
    else if(i<=45)
        cout<<n<<" você pagará 120R$";
    else if(i<=59)
        cout<<n<<" você pagará 150R$";
    else if(i<=65)
        cout<<n<<" você pagará 250R$";
    else
        cout<<n<<" você pagará 400R$";
}