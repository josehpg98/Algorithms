#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,n3,m;
    cout<<"Qual é a primeira nota ?";
    cin>>n1;
    cout<<"Qual é a segunda nota ?";
    cin>>n2;
    cout<<"Qual é a terceira nota ?";
    cin>>n3;
    m=(n1+n2+n3)/3;

    if(m<60)
        cout<<"sua classificação é I";
    else if(m<70)
        cout<<"sua classificação é S";
    else if(m<90)
        cout<<"sua classificação é B";
    else
        cout<<"sua classificação é O";

}
