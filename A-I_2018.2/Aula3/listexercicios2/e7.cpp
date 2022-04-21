#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    float s;
    cout<<"Qual é seu saldo médio?";
    cin>>s;
    if(s<=200)
        cout<<"nenhum credito especial ganho";
    else if(s<=400)
        cout<<"credito ganho é de "<<(s*20)/100<<"R$";
    else if(s<=600)
        cout<<"credito ganho é de "<<(s*30)/100<<"R$";
    else
        cout<<"credito ganho é de "<<(s*40)/100<<"R$";
}
