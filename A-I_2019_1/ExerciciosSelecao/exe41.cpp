#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m;
    cout<<"\n informe um mês valido: " << endl;
    cin>>m;
    if(m == 1)
    {

        cout<<" o mês correspondente é janeiro! ";
    }
    else if(m == 2)
    {

        cout<<" o mês correpondente é fevereiro! ";
    }
    else if(m == 3)
    {

        cout<<" o mês correpondente é março! ";
    }
    else if(m == 4)
    {

        cout<<" o mês correpondente é abril! ";
    }
    else if(m == 5)
    {

        cout<<" o mês correpondente é maio! ";
    }
    else if(m == 6)
    {

        cout<<" o mês correpondente é junho! ";
    }
    else if(m == 7)
    {

        cout<<" o mês correpondente é julho! ";
    }
    else if(m == 8)
    {

        cout<<" o mês correpondente é agosto! ";
    }
    else if(m == 9)
    {

        cout<<" o mês correpondente é setembro! ";
    }
    else if(m == 10)
    {

        cout<<" o mês correpondente é outubro! ";
    }
    else if(m == 11)
    {

        cout<<" o mês correpondente é novembro! ";
    }
    else if(m == 12)
    {

        cout<<" o mês correpondente é dezembro! ";
    }
    else
    {
        cout<<"\n opção inválida!";
    }
}
