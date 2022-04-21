#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    string nome;

    if(nome.empty())
        cout << "O nome esta vazio" << endl;
    else
        cout << "Nome informado" << endl;

    cout << "Informe o nome: ";
    getline(cin,nome);
    fflush(stdin);

    cout << "Nome informado: " << nome << endl;

    if(nome.empty())
        cout << "O nome esta vazio" << endl;
    else
        cout << "Nome informado" << endl;

    string teste(nome);

    cout << "Variavel teste criado como copia do nome: " << teste << endl;

    string v(50,'*');

    cout << "Variavel V: " << v << endl;

    cout << "Tamanho do V: " << v.size() << endl;

    //v = nome;

    v = nome + v;

    cout << "Variavel V: " << v << endl;

    if(v == nome)
        cout << "Sao iguais" << endl;
    else
        cout << "Diferentes" << endl;

}
