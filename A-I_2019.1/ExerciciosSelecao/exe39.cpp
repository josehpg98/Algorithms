#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");

    float p,pp;
    int l,c;
    cout<<"\n informe o tipo de cobustivel ( 0-alcool | 1-gasolina): " << endl;
    cin>>c;
    cout<<"\n informe quantos litros vendidos:" << endl;
    cin>>l;

    if(c == 0 && l <= 20)
    {
        p = (1.65 * l);
        pp = p - ((p * 3) / 100 );
        cout<<" o total a pagar pelo combustivel é: " << p << " com desconto é: " << pp;
    }
    else if(c == 0 && l > 20)
    {
        p = (1.65 * l);
        pp = p - ((p * 5) / 100 );
        cout<<" o total a pagar pelo combustivel é: " << p << " com desconto é: " << pp;
    }
    else if(c == 1 && l <= 15)
    {
        p = (2.59 * l);
        pp = p - ((p * 3.5) / 100 );
        cout<<" o total a pagar pelo combustivel é: " << p << " com desconto é: " << pp;
    }
    else if(c == 1 && l > 15)
    {
        p = (2.59 * l);
        pp = p - ((p * 6) / 100 );
        cout<<" o total a pagar pelo combustivel é: " << p << " com desconto é: " << pp;
    }
    else
    {
        cout<<"\n opção inválida!";
    }
}
