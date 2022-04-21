#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

struct cadastro
{
    char nome[50];
    int idade;
    float salario;
};

void leitura(cadastro &a);
void mostra(cadastro &a);

main()
{
    cadastro v;
    leitura(v);
    mostra(v);
}

void leitura(cadastro &a)
{
    cout << "Informe o nome: ";
    gets(a.nome);
    fflush(stdin);

    cout << "Informe a idade: ";
    cin >> a.idade;
    fflush(stdin);

    cout << "Informe o salario: ";
    cin >> a.salario;
    fflush(stdin);
}

void mostra(cadastro &a)
{
    cout << "Nome: " << a.nome << endl;
    cout << "Idade: "<< a.idade << endl;
    cout << "Salario: " << a.salario;
}
