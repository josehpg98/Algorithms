#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    char txt[20];
    int tam;
    cout<<"informe uma palavra qualquer: " << endl;
    cin>>txt;
     tam = strlen(txt);//le o tamanho da string
    cout<<"texto na forma invertida: " << endl;
    for(int x = tam;x >= 0;x--){//for decremnta de forma a gerar a palavra invertida
        cout<<txt[x];
    }



}

