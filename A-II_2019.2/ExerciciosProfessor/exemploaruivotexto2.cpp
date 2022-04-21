#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include <fstream>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    ofstream escreve("teste.txt", ios::app);
    char nome[50];
    cout << "Informe o nome: ";
    gets(nome);
    fflush(stdin);
    escreve.write(nome, strlen(nome));
    escreve.write("\n",1);
    escreve.close();

}

