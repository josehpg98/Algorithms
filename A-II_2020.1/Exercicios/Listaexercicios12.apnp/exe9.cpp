#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;
main(){

    string texto;
    cout<<"Informe o nome do arquivo para ser lido: "<<endl;
    getline(cin,texto);
    fflush(stdin);
    ifstream ler(texto.c_str(),ios :: in);
    char c;
    int co=0;
    cout<<"O texto e :"<<endl;
    while(ler.get(c)){
        cout<<c;
        if(isalnum(c))
            co++;
    }
    cout<<"total de caracteres: "<<co<<endl;
    ler.close();
}

