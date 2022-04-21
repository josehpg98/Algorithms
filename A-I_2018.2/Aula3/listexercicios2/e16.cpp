#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int m;
    cout<<"Digite o mes que deseja saber(numero)";
    cin>>m;

    if(m==1)
        cout<<"o mes é Janeiro";
    else if(m==2)
        cout<<"o mes é Fevereiro";
    else if(m==3)
        cout<<"o mes é Março";
    else if(m==4)
        cout<<"o mes é Abril";
    else if(m==5)
        cout<<"o mes é Maio";
    else if(m==6)
        cout<<"o mes é Junho";
    else if(m==7)
        cout<<"o mes é Julho";
    else if(m==8)
        cout<<"o mes é Agosto";
    else if(m==9)
        cout<<"o mes é Setembro";
    else if(m==10)
        cout<<"o mes é Outubro";
    else if(m==11)
        cout<<"o mes é Novembro";
    else if(m==12)
        cout<<"o mes é Dezembro";
    else
        cout<<"erro de digitação";
}
