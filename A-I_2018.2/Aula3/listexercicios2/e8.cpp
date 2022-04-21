#include<iostream>
#include<locale.h>
using namespace std;
main(){
    int a,a1,a2,a3;
    cout<<"\ndigite o primeiro numero";
    cin>>a1;
    cout<<"\ndigite o segundo numero";
    cin>>a2;
    cout<<"\ndigite o terceiro numero";
    cin>>a3;
    if(a1>a2){
        a=a2;
        a2=a1;
        a1=a;
    }
    if(a1>a3){
        a=a3;
        a3=a1;
        a1=a;
    }
    if(a2>a3){
        a=a3;
        a3=a2;
        a2=a;
    }
    cout<<"\nos numeros em ordem ficam "<<a1<<", "<<a2<<" e "<<a3;
}
