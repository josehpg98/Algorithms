#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,n3,m;
    cout<<"Qual � a primeira nota ?";
    cin>>n1;
    cout<<"Qual � a segunda nota ?";
    cin>>n2;
    cout<<"Qual � a terceira nota ?";
    cin>>n3;
    m=(n1+n2+n3)/3;

    if(m<60)
        cout<<"sua classifica��o � I";
    else if(m<70)
        cout<<"sua classifica��o � S";
    else if(m<90)
        cout<<"sua classifica��o � B";
    else
        cout<<"sua classifica��o � O";

}
