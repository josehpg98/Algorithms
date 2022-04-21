#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    string n;
    float s,sm;

    cout<<"qual seu nome?";
    cin>>n;
    cout<<"qual é seu salario?";
    cin<<s;
    cout<<"qual é o salario minimo?";
    cin<sm;

    if(s<3*sm){
    s=s+(s*50/100);
    cout<<"Seu salario agr é "<<s<<"R$";
    }
    else if(s<=sm*10){
       s=s+(s*20/100);
       cout<<"Seu salario agr é "<<s<<"R$";
    }
    else if(s<=sm*20){
        s=s+(s*15/100);
        cout<<"Seu salario agr é "<<s<<"R$";
    }
    else {
        s=s+(s*10/100);
        cout<<"Seu salario agr é "<<s<<"R$";
    }
}
