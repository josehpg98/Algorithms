#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m,a;
    string t;
    cout<<"qual foi o mes em que foi feita a recarga";
    cin>>m;
    cout<<"qual foi o ano da recarga?";
    cin>>a;
    cout<<"qual o tipo do extintor?(em minusculo)";
    cin>>t;
    if(m>12)
    {
        a++;
        m=m-12;
    }
    if(t=="mo")
    {
        m+=5;
        if(m>12)
        {
            a++;
            m=m-12;
        }
        cout<<"sua recarga vence no mes "<<m<<" do ano "<<a;
    }
    else if(t=="mo")
    {
        m+=5;
        if(m>12)
        {
            a++;
            m=m-12;
        }
        cout<<"sua recarga vence no mes "<<m<<" do ano "<<a;
    }
    else if(t=="mt")
    {
        m+=5;
        if(m>12)
        {
            a++;
            m=m-12;
        }
        cout<<"sua recarga vence no mes "<<m<<" do ano "<<a;
    }
    else if(t=="pq")
    {
        m+=5;
        if(m>12)
        {
            a++;
            m=m-12;
        }
        cout<<"sua recarga vence no mes "<<m<<" do ano "<<a;
    }
    else if(t=="mol")
    {
        m+=5;
        if(m>12)
        {
            a++;
            m=m-12;
        }
        cout<<"sua recarga vence no mes "<<m<<" do ano "<<a;
    }
    else{
        cout<<"tipo invalido";
    }
}
