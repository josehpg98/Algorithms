#include<iostream>
#include<locale.h>
using namespace std;
main(){
        setlocale(LC_ALL,"Portuguese");
    int t;
    float l,p;
    cout<<"qual é o tipo de combustivel?(1 para alchool,2 para gasolina)";
    cin>>t;
    cout<<"qual é quantidade litros vendido?";
    cin>>l;

    if(t==1){
        p=l*1.65;
        if(l<=20){
            cout<<"o total a pagar é "<<p-((p*3)/100)<<"R$";
        }
        else{
            cout<<"o total a pagar é "<<p-((p*5)/100)<<"R$";
        }
    }
    else if(t==2){
        p=l*2.59;
        if(l<=15){
            cout<<"o total a pagar é "<<p-((p*3.5)/1000)<<"R$";
        }
        else{
            cout<<"o total a pagar é "<<p-((p*6)/100)<<"R$";
        }
    }
    else{
        cout<<"tipo de combustivel invalido";
    }
}
