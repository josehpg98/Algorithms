#include<iostream>
#include <cstdlib>// necess�rio p/ as fun��es rand() e srand
#include<time.h>//necess�rio p/ fun��o time
using namespace std;
int fatorial(int v);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int v;
    cout<<"informe um valor para calcul�lar seu fatorial: " << endl;
    cin>>v;
    cout<<"Fatorial de " << v << " �: " << fatorial(v);
}
int fatorial(int v)
{
    if(v == 1)
    {
        return 1;
    }
    else
    {

        return (v * fatorial(v - 1));
    }
}
