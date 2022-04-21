#include<iostream>
#include<locale.h>
using namespace std;
main(){
setlocale(LC_ALL,"Portuguese");
int vp,vm;
cout<<"qual é a velocidade permitida na via?";
cin>>vp;
cout<<"qual é a velocidade do motorista?";
cin>>vm;
if(vm>vp&&vm<(vp+(vp*20)/100)){
    cout<<"será aplicada uma mutla de R$ 102,00 no motorista";
}
else if(vm>vp+(vp*20)/100){
    cout<<"será aplicada uma mutla de R$ 500,00 no motorista";
}
else{
    cout<<"Motorista dentro do limite da via";
}
}
