#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    float s;
    cout<<"Qual � seu saldo m�dio?";
    cin>>s;
    if(s<=200)
        cout<<"nenhum credito especial ganho";
    else if(s<=400)
        cout<<"credito ganho � de "<<(s*20)/100<<"R$";
    else if(s<=600)
        cout<<"credito ganho � de "<<(s*30)/100<<"R$";
    else
        cout<<"credito ganho � de "<<(s*40)/100<<"R$";
}
