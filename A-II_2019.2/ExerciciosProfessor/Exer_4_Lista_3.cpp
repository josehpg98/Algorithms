/*4 - Escreva uma fun��o que recebe um inteiro n e um inteiro t.
A fun��o deve imprimir este n valores com os valores de 0 at� t-1,
sucessivamente. Por exemplo: para um n de 6 posi��es e um t=4,
deve imprimir seguintes valores: 0 1 2 3 0 1 2.*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
int ler(char texto[]);
void gerador (int n, int t);

main()
{
    int n, t;
    n = ler("Digite o valor N: ");
    t = ler("Digite o valor T: ");
    gerador(n, t);
}

int ler(char texto[])
{
    int x;
    cout << texto;
    cin >> x;
    fflush(stdin);
    return x;
}

void gerador (int n, int t)
{
    int i = 0;
    int v = 0;
    while(i < n)
    {
        cout << v << ", ";
        v++;
        if(v == t)
            v = 0;
        i++;
    }
}
