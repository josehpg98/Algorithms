#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
void mostra(char *t);
main()
{
   char *texto = new char[50];

   cout << "Digite o texto: ";
   gets(texto);
   fflush(stdin);

   mostra(texto);
}

void mostra(char *t)
{
     int i;
    while(*t)
    {
        cout << *t << ", ";
        t++;
    }
}

