#include<iostream>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[50],idade[2],telefone[10];
    char edrc[40],frase[100];
    cout<<"Informe seu nome: " << endl;
    gets(nome);
    fflush(stdin);
    cout<<"Informe seu endere�o: " << endl;
    gets(edrc);
    fflush(stdin);
    cout<<"Informe seu telefone: " << endl;
    gets(telefone);
    fflush(stdin);
    cout<<"Informe sua idade: " << endl;
    gets(idade);
    fflush(stdin);
    //puts(edrc);
    //cout<<" Seu nome �: " << nome << ", voc� tem " << idade << " anos, mora na rua: " << edrc << " e seu telefone �: " << telefone << endl;
    strcpy(frase,"seu nome �: ");
    strcat(frase,nome);
    //puts(frase);
    cout<<frase;
}
