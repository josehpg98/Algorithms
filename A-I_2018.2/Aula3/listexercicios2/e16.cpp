#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int m;
    cout<<"Digite o mes que deseja saber(numero)";
    cin>>m;

    if(m==1)
        cout<<"o mes � Janeiro";
    else if(m==2)
        cout<<"o mes � Fevereiro";
    else if(m==3)
        cout<<"o mes � Mar�o";
    else if(m==4)
        cout<<"o mes � Abril";
    else if(m==5)
        cout<<"o mes � Maio";
    else if(m==6)
        cout<<"o mes � Junho";
    else if(m==7)
        cout<<"o mes � Julho";
    else if(m==8)
        cout<<"o mes � Agosto";
    else if(m==9)
        cout<<"o mes � Setembro";
    else if(m==10)
        cout<<"o mes � Outubro";
    else if(m==11)
        cout<<"o mes � Novembro";
    else if(m==12)
        cout<<"o mes � Dezembro";
    else
        cout<<"erro de digita��o";
}
