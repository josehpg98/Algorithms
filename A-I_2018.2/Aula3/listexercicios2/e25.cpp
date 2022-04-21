#include<iostream>
#include<locale.h>
using namespace std;
main(){
setlocale(LC_ALL,"Portuguese");
float kma;
int t;
cout<<"qual a quantidade de consumo em KwH neste mês ?";
cin>>kma;
cout<<"qual o tipo de cliente(residencia=1,comercio=2,industria=3)";
cin>>t;
if(t==1){
    kma=kma*0.60;
    cout<<"sua conta de luz sera de "<<kmp<<"R$";
}
else if(t==2){
    kma=kma*0.48;
    cout<<"sua conta de luz sera de "<<kmp<<"R$";
}
else if(t==3){
    kma=kma*1.29;
    cout<<"sua conta de luz sera de "<<kmp<<"R$";
}
else{
    cout<<"tipo de cliente invalido!";
}
