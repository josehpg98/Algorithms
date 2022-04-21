#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    char nome[50], aux[50], senha[50];
    cout << "Informe o nome: ";
    gets(nome);
    fflush(stdin);

    cout << "Informe um texto qualquer: ";
    gets(aux);
    fflush(stdin);

    cout << "Informe a senha: ";
    gets(senha);
    fflush(stdin);

    cout << "Conteudo da variavel aux antes da copia: " << aux << endl;

    //strcpy(aux, nome);
    strcat(aux, nome);

    cout << "Conteudo da variavel nome: " << nome << endl;
    cout << "Total de caracteres da variavel nome: " << strlen(nome) << endl;
    cout << "Conteudo da variavel aux: " << aux << endl;

    if(strcmp(nome, senha) == 0)
        cout << "Senha igual ao nome";
    else
        cout << "Senha incorreta";
}
