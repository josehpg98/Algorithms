#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main()
{
    ofstream x;
    string nome;
    /*x.open("exemplo.txt", ios::app);
    cout << "Informe um nome: ";
    getline(cin, nome);
    fflush(stdin);
    if(x.is_open())
    {
        cout << "Arquivo aberto com sucesso";
        x << nome << ";\n";
        x.close();
    }
    else
        cout << "Erro ao abrir o arquivo";
*/
    ifstream ler ("exemplo.txt", ios::in);
    char c, texto[100];
    if(ler.fail() == 1)
    {
        cout << "\n\nErro ao abrir o arquivo para leitura." << endl;
    }
    else
    {
        cout << "Arquivo aberto com sucesso" << endl;
        //while(ler.get(c))
           //cout << c;
        /*while(!ler.fail())
        {
            ler.getline(texto, 100);
            cout << texto << endl;
        }*/

        /*while(!ler.fail())
        {
            ler.getline(texto, 100, ';');
            cout << texto << endl;
        }*/

        while(!ler.eof())
        {
            ler >> texto;
            cout << texto << endl;
        }
    }

}
