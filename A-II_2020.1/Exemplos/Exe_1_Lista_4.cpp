#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
/*Fa�a um programa que l� um texto qualquer do teclado ap�s remova do texto os
espa�os  em  branco  e  os  n�meros existentes  e  escreva  o texto  todo  em  mai�sculo  na
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
