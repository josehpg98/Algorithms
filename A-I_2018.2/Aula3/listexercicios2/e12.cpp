#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    string n;
    int s,i;
    float a;
    cout<<"qual o seu nome?";
    cin>>n;
    cout<<"qual sua idade?";
    cin>>i;
    cout<<"qual é seu sexo?(1 para homem,2 para mulher)";
    cin>>s;
    cout<<"qual é sua altura?";
    cin>>a;

    if(s==1){
        if(a>=1.7){
            if(i<=20){
               cout<<"o peso ideal para você é "<<(72.7*a)-58<<"KG";
            }
            else if(i<=39){
                cout<<"o peso ideal para você é "<<(72.7*a)-53<<"KG";
            }
            else{
                cout<<"o peso ideal para você é "<<(72.7*a)-45<<"KG";
            }
        }
        else{
            if(i<=40){
                cout<<"o peso ideal para você é "<<(72.7*a)-50<<"KG";
            }
            else{
                cout<<"o peso ideal para você é "<<(72.7*a)-58<<"KG";
            }
        }
    }
    else if(s==2){
        if(a>1.5){
            cout<<"o peso ideal para você é "<<(62.1*a)-44.7<<"KG";
        }
        else{
            if(i>=35){
                cout<<"o peso ideal para você é "<<(62.1*a)-45<<"KG";
            }
            else{
                cout<<"o peso ideal para você é "<<(62.1*a)-49<<"KG";
            }
        }
    }
    else{
        cout<<"sexo invalido";
    }
}
