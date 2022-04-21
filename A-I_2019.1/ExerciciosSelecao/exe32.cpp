#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float s,c;
    cout<<"\n informe o seu saldo:";
    cin>>s;
    if(s <= 200)
    {
        cout<<"\n nenhum crédito!";
    }
    else if(s >= 201 && s <= 400)
    {
        c = ( (s * 20) / 100 ) + s;
        cout<<"\n o seu crédito é de: " << c;
    }
    else if(s >= 401 && s <= 600)
    {
        c = ( (s * 30) / 100 ) + s;
        cout<<"\n o seu crédito é de: " << c;
    }
    else
    {
        c = ( (s * 40) / 100 ) + s;
        cout<<"\n o seu crédito é de: " << c;
    }
}
