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
    cout<<"Informe seu endereço: " << endl;
    gets(edrc);
    fflush(stdin);
    cout<<"Informe seu telefone: " << endl;
    gets(telefone);
    fflush(stdin);
    cout<<"Informe sua idade: " << endl;
    gets(idade);
    fflush(stdin);
    //puts(edrc);
    //cout<<" Seu nome é: " << nome << ", você tem " << idade << " anos, mora na rua: " << edrc << " e seu telefone é: " << telefone << endl;
    strcpy(frase,"seu nome é: ");
    strcat(frase,nome);
    //puts(frase);
    cout<<frase;
}
