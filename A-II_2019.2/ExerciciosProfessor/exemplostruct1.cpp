#include<iostream>
#include<cstdio>
#include<cstdlib>
usimg namespace std;
struct cadastro
{
    char nome[50];
    int idade;
    float salario;
};
main()
{

    cadastro v;
    leitura(v);
    mostra(v)
}
void leitura(cadastro &a){
    cout<<"informe o nome: " << endl;
    gets(a.nome);
    flush.(stdin);

    cout<<"informe a idade: " << endl;
    cin>>a.idade;
    flush.(stdin);

    cout<<"informe o seu salário: " << endl;
    cin>>a.salario;
    flush.(stdin);
}
void mostra(cadastro &a){
    cout<<" nome: " << a.nome <<endl;
    cout<<" idade: " << a.idade <<endl;
    cout<<" salario: " << a.salario <<endl;
}
