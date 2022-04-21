#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int d;
    float c,f;

    cout<<"\nqual o valor da conta?";
    cin>>c;

    d=c/3;
    f=c-(d*2);

    cout<<"\ntotal:"<<c<<"R$"<<"\ncarlos:"<<d<<"R$"<<"\nandre:"<<d<<"R$"<<"\nfelipe"<<f<<"R$";

}
