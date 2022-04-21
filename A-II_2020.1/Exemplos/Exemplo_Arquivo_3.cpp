#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main()
{
    ifstream ler ("numeros.txt", ios::in);
    char texto[10];
    int soma = 0, num;
    if(ler.good())
    {
        while(!ler.eof())
        {
            ler >> texto;
            num = atoi(texto); //atof 7.9
            soma += num;
            cout << num << " + ";
        }
    }
    else
    {
        cout << "Erro ao abrir o arquivo.";
    }
    cout << "Soma: " << soma;
}
