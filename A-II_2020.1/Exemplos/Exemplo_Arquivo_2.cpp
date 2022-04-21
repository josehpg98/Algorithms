#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

struct cadastro
{
    char nome[50];
    char sexo;
    int idade;
};

void ler(cadastro v[], int x);
void mostra(cadastro v[], int x);

main()
{
    cadastro vet[10];
    int menu = -1, i = -1;

    do
    {
        system("cls");
        cout << "MENU DE OPCOES" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Mostrar" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);
        switch(menu)
        {
             case 0 :
                cout << "PROGRAMA FINALIZADO!";
                getchar();
                break;
            case 1 :
                i++;
                ler(vet, i);
                cout << "REGISTRO CADASTRADO COM SUCESSO!";
                getchar();
                break;
            case 2 :
                /*if(i == -1)
                {
                    cout << "NAO EXISTE REGISTRO CADASTRADO!";
                }
                else*/
                    mostra(vet, i);
                getchar();
                break;
            default :
                cout << "OPCAO INVALIDA!";
                getchar();
                break;
        };

    }while(menu != 0);
}

void ler(cadastro v[], int x)
{
    system("cls");
    cout << "Informe o nome: ";
    gets(v[x].nome);
    fflush(stdin);
    cout << "Informe o sexo (M - Masculino, F - Feminino): ";
    cin >> v[x].sexo;
    fflush(stdin);
    cout << "Informe a idade: ";
    cin >> v[x].idade;
    fflush(stdin);

    ofstream escreve ("cadastro.txt", ios::app);
    if(escreve.good())
    {
        escreve << v[x].nome << ";";
        escreve << v[x].sexo << ";";
        escreve << v[x].idade << ";\n";
        cout << "\nDados registrados no aquivo com sucesso.\n";
    }
    else
    {
        cout << "Erro ao abrir o arquivo!" << endl;
    }
    escreve.close();
}

void mostra(cadastro v[], int x)
{
    system("cls");
    cout << "RELACAO DOS CADASTROS EXISTENTES NO VETOR" << endl;
    for(int a = 0; a <= x; a++)
    {
        cout << "NOME: " << v[a].nome << endl;
        cout << "SEXO: " << v[a].sexo << endl;
        cout << "IDADE: " << v[a].idade << endl;
        cout << "---------------------------------" << endl;
    }

    cout << "RELACAO DOS CADASTROS EXISTENTES NO ARQUIVO" << endl;
    ifstream ler ("cadastro.txt", ios::in);
    char texto[100];
    ler.getline(texto,100, ';');
    while(!ler.eof())
    {
        cout << "NOME: " << texto << endl;
        ler.getline(texto,100, ';');
        cout << "SEXO: " << texto << endl;
        ler.getline(texto,100, ';');
        cout << "IDADE: " << texto << endl;
        cout << "---------------------------------" << endl;
        ler.getline(texto,100, ';');
    }
}




