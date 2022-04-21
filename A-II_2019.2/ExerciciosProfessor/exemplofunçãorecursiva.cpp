#include<iostream>
#include <cstdlib>// necessário p/ as funções rand() e srand
#include<time.h>//necessário p/ função time
using namespace std;
int fatorial(int v);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int v;
    cout<<"informe um valor para calculçlar seu fatorial: " << endl;
    cin>>v;
    cout<<"Fatorial de " << v << " é: " << fatorial(v);
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
