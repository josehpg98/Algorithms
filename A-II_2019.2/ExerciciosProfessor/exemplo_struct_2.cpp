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

void leitura(cadastro a[], int &i);
void mostra(cadastro a[], int i);

main()
{
    cadastro v[10];
    int menu = -1, i = -1;
    do
    {
        system("cls");
        cout << " 0 - SAIR" << endl;
        cout << " 1 - CADASTRAR" << endl;
        cout << " 2 - MOSTRAR" << endl;
        cout << " SUA ESCOLHA: ";
        cin >> menu;
        fflush(stdin);
        switch(menu)
        {
           case 0 :
              system("cls");
              cout << "Programa finalizado.";
              getchar();
              break;
           case 1 :
              system("cls");
              leitura(v, i);
              break;
           case 2 :
              system("cls");
              if(i < 0)
                 cout << "NAO EXISTEM DADOS CADASTRADOS";
              else
              {
                 cout << "DADOS CADASTRADOS" << endl;
                 mostra(v, i);
              }
              getchar();
              break;
           default:
              system("cls");
              cout << "OPCAO INVALIDA";
              getchar();
              break;
        };
    }while(menu != 0);
}

void leitura(cadastro a[], int &i)
{
    i++;
    cout << "Informe o nome: ";
    gets(a[i].nome);
    fflush(stdin);

    cout << "Informe a idade: ";
    cin >> a[i].idade;
    fflush(stdin);

    cout << "Informe o salario: ";
    cin >> a[i].salario;
    fflush(stdin);
}

void mostra(cadastro a[], int i)
{
    for(int x = 0; x <= i; x++)
    {
       cout << "Nome: " << a[x].nome << endl;
       cout << "Idade: "<< a[x].idade << endl;
       cout << "Salario: " << a[x].salario;
       cout << "\n------------------------------\n";
    }
}




