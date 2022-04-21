#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float n,m;
    cout<<"\n informe um numero:";
    cin>>n;
    m = (n / 2);
    if(m > 50)
    {
        cout<<"\n a metade de " << n << " é: " << m;
    }
}
