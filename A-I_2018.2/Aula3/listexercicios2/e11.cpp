#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    char s;
    float a;
    cout<<"qual � seu sexo?(m para homem,f para mulher)";
    cin>>s;
    cout<<"qual � sua altura?";
    cin>>a;
    s=tolower(s);

    if(s == 'm'){
        cout<<"o peso ideal para voc� � "<<(72.7*a)-58<<"KG";
    }
    else if(s == 'f'){
        cout<<"o peso ideal para voc� � "<<(62.1*a)-44.7<<"KG";
    }
    else{
        cout<<"sexo invalido";
    }

}
