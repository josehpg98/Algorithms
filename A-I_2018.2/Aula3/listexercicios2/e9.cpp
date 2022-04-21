#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int a,b,c,d,e,ma,me;
    cout<<"\ndigite o 1º valor ";
    cin>>a;
    ma=a;
    me=a;
    cout<<"\ndigite o 2º valor ";
    cin>>b;
    if(b>ma)
        ma=b;
    else if(c<me)
        me=b;
    cout<<"\ndigite o 3º valor ";
    cin>>c;
    if(c>ma)
        ma=c;
    else if(c<me)
        me=c;
    cout<<"\ndigite o 4º valor ";
    cin>>d;
    if(d>ma)
        ma=d;
    else if(d<me)
        me=d;
    cout<<"\ndigite o 5º valor ";
    cin>>e;
    if(e>ma)
        ma=e;
    else if(e<me)
        me=e;
    cout<<"o maior valor é "<<ma<<" e o menor valor é "<<me;
}
