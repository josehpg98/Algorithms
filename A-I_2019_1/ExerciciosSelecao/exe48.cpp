#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m,a,tp,mt;
    cout<<"\n informe mes:";
    cin>>m;
    cout<<"\n informe o ano:";
    cin>>a;
    cout<<"\n informe o tipo de extintor (0-MO | 1-MT | 2-PQ | 3-ML): ";
    cin>>tp;

    if(tp == 0)
    {
        mt = m + 5;
        if(mt > 12)
        {
            m = mt -12;
            a = a + 1;
            cout<<"a data de  validade do extintor é:" << m << "/" << a;
        }
        else
        {
            m = mt;
            cout<<"a data de  validade do extintor é:" << m << "/" << a;
        }
    }
    else if(tp == 1)
    {
        mt = m + 10;
        if(mt > 12)
        {
            m = mt -12;
            a = a + 1;
            cout<<"a data de  validade do extintor é:" << m << "/" << a;
        }
        else
        {
            m = mt;
            cout<<"a data de  validade do extintor é:" << m << "/" << a;
        }

    }
    else if(tp == 2)
    {
        mt = m + 8;
        if(mt > 12)
        {
            m = mt -12;
            a = a + 1;
            cout<<"a data de  validade do extintor é:" << m << "/" << a;
        }
        else
        {
            m = mt;
            cout<<"a data de  validade do extintor é:" << m << "/" << a;
        }
    }
    else if(tp == 3)
    {
        a = a + 1;
        cout<<"a data de  validade do extintor é:" << m << "/" << a;
    }
    else
    {
        cout<<"\n opção incorreta!";
    }

}
