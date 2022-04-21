#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
/*Faça um programa que lê um texto qualquer do teclado após remova do texto os
espaços  em  branco  e  os  números existentes  e  escreva  o texto  todo  em  maiúsculo  na
tela */

main()
{

    char texto[100];
    char textoNovo[100];
    int j=-1;

    cout<<"Digite um texto: ";
    gets(texto);
    fflush(stdin);

    for(int i=0; i < strlen(texto); i++)
    {
        cout << texto[i] << ", ";
        if (!(isspace(texto[i])) and !(isdigit(texto[i])))
        {
            j++;
            textoNovo[j] = toupper(texto[i]);
        }
    }
    cout<<"\n\nO texto digitado: ";
    puts(texto);
    cout<<"\n\nO texto modificado: ";
    puts(textoNovo);
}
