#include<iostream>
#include<locale.h>
using namespace std;
main(){
setlocale(LC_ALL,"Portuguese");
float kmp,kma;
cout<<"qual a quantidade de  consumo em KwH no mês passado?";
cin>>kmp;
cout<<"qual a quantidade de consumo em KwH neste mês ?";
cin>>kma;
kma=(kmp+kma)/2;
if(kma>0&&kma<=70){
    kmp=kma*0.09;
    cout<<"sua conta de luz sera de "<<kmp<<"R$";
}
else if(kma<=150){
    kmp=kma*0.20;
    cout<<"sua conta de luz sera de "<<kmp<<"R$";
}
else if(kma<=200){
    kmp=kma*0.23;
    cout<<"sua conta de luz sera de "<<kmp<<"R$";
}
else if(kma>200){
    kmp=kma*0.26;
    cout<<"sua conta de luz sera de "<<kmp<<"R$";
}
else{
    cout<<"valores invalidos";
}
}
