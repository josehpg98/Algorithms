#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;
void leitura();
void mostra();
void mostra_2();

main()
{
   int menu = -1;

   do
   {
       system("cls");
       cout << "0 - Sair" << endl;
       cout << "1 - Incluir pessoa" << endl;
       cout << "2 - Mostrar dados do arquivo" << endl;
       cout << "3 - Mostrar 2" << endl;
       cout << "Sua escolha: ";
       cin >> menu;
       fflush(stdin);

       switch(menu)
       {
          case 0 :
             system("cls");
             cout << "Programa Finalizado.";
             break;
          case 1 :
             system("cls");
             leitura();
             getchar();
             break;
          case 2 :
             system("cls");
             mostra();
             getchar();
             break;
          case 3 :
             system("cls");
             mostra_2();
             getchar();
             break;
       };

   }while(menu != 0);
}

void leitura()
{
   string nome;
   int idade;
   ofstream escreve;
   escreve.open("aula.txt", ios::app);
   cout << "Digite seu nome: ";
   getline(cin, nome);
   fflush(stdin);

   cout << "Informe a idade: ";
   cin >> idade;
   fflush(stdin);

   if(escreve.is_open())
   {
      escreve << "Nome digitado: " << nome << ";";
      escreve << " Idade: " << idade << "\n";
      cout << "Arquivo gerado com sucesso\n\n";
   }
   else
      cout << "Erro ao abrir o arquivo";
   escreve.close();
}

void mostra()
{
   ifstream ler("aula.txt", ios::in);
   if(ler.good())
   {
      char c;
      while(ler.get(c))
         cout << c;
   }
   else
       cout << "Erro ao abrir o arquivo";
   ler.close();
}

void mostra_2()
{
   ifstream ler("aula.txt", ios::in);
   if(ler.good())
   {
      char c[100];
      while(!ler.fail())
      {
          ler.getline(c,100);
          cout << c << endl;
      }
   }
   else
       cout << "Erro ao abrir o arquivo";
   ler.close();
}
