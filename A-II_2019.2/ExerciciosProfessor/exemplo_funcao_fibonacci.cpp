#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
int fibonacci(int cont, int a, int b, int total);

main()
{
   int t;
   cout << "Informe a geracao desejada: ";
   cin >> t;
   fflush(stdin);
   fibonacci(1, 0, 1, t);
}

int fibonacci(int cont, int a, int b, int total)
{
    int aux;
    if(cont < 2)
    {
        cout << a << ", " << b << ", ";
        cont++;
        aux = a;
        a = b;
        b = aux + b;
        fibonacci(cont, a, b, total);
    }
    else
    {
        cout << b << ", ";
        aux = a;
        a = b;
        b = aux + b;
        cont++;
        if(cont < total)
            fibonacci(cont, a, b, total);
    }
}
