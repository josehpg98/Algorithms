#include<iostream>
#include<locale.h>
using namespace std;
main(){
setlocale(LC_ALL,"Portuguese");
int c,s,sd,sn;
cout<<"Qual é seu cargo?(101=gerente,102=Engenheiro,103=Tecnico)";
cin>>c;
cout<<"qual seu salario?";
cin>>s;
if(c==101){
    sd=(s*10)/100;
    sn=s+sd;
    cout<<"seu salario era "<<s<<"R$, agora com o aumento de "<<sd<<"R$ é "<<sn<<"R$";
}
else if(c==102){
    sd=(s*20)/100;
    sn=s+sd;
    cout<<"seu salario era "<<s<<"R$, agora com o aumento de "<<sd<<"R$ é "<<sn<<"R$";
}
else if(c==103){
    sd=(s*30)/100;
    sn=s+sd;
    cout<<"seu salario era "<<s<<"R$, agora com o aumento de "<<sd<<"R$ é "<<sn<<"R$";
}
else{
    sd=(s+(s*30)/100);
    sn=s+sd;
    cout<<"seu salario era "<<s<<"R$, agora com o aumento de "<<sd<<"R$ é "<<sn<<"R$";
}
}
