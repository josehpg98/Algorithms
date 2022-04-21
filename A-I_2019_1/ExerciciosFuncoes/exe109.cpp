#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
int calculafatorial(int num);
main()
{
    setlocale(LC_ALL,"Portuquese");
    int r,n;
    do
    {
        cout<<" informe um número inteiro para calcular seu fatorial (para sair digite zero): " << endl;
        cin>>n;
        //cout<< s << endl;

        r = calculafatorial(n);

        cout<<" o fatorial de " << n << " é: " << r << endl;
    }
    while(n > 0);
}

int calculafatorial(int num)
{
    int f = 1;
    for(int i = 1; i <= num; i++)
    {
        f = f * i;

    }

    return f;
}
