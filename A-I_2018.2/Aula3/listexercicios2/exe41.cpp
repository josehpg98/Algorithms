#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m;
    cout<<"informe o mês do ano na faixa de 1 a 12: ";
    cin>> m;

    if(m == 1)
           cout<<"o mês é janeiro! ";
    else if(m == 2)
        cout<<"o mês é fevereiro! ";
    else if(m == 3)
        cout<<"o mês é março! ";
    else if(m == 4)
        cout<<"o mês é abril! ";
    else if(m == 5)
        cout<<"o mês é maio! ";
    else if(m == 6)
        cout<<"o mês é junho! ";
    else if(m == 7)
        cout<<"o mês é julho! ";
    else if(m == 8)
        cout<<"o mês é agosto! ";
    else if(m == 9)
        cout<<"o mês é setembro! ";
    else if(m == 10)
        cout<<"o mês é outubro! ";
    else if(m == 11)
        cout<<"o mês é novembro! ";
    else if(m == 12)
        cout<<"o mês é dezembro! ";
    else
        cout<<"opção invalida! ";

}
