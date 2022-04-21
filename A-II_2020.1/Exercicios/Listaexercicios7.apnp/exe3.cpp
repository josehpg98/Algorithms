#include<iostream>
#include<cstring>
using namespace std;
void removeparamentro(char txt[],char p);
main()
{
    setlocale(LC_ALL,"Portuguese");
    char texto[50],parametro;
    cout<<"Informe um texto qualquer: " <<endl;
    gets(texto);
    fflush(stdin);
    cout<<"Informe um parametro qualquer: " <<endl;
    cin>>parametro;
    fflush(stdin);
    cout<<"\n\n";
    cout<<"TEXTO LIDO: " << texto << endl;
    removeparamentro(texto,parametro);
}
void removeparamentro(char txt[],char p){
    cout<<"Texto com o parametro removido: " <<endl;
    int tm = strlen(txt);
    for(int i = 0;i <= tm;i++){
        if(txt[i] == p){
            txt[i] = '-';
           // cout<<txt[i];
        }
    }
    cout<<txt;
}
