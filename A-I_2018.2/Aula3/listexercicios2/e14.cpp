#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,m,d;
    cout<<"digite um ano";
    cin>>a;
    cout<<"digite um mes";
    cin>>m;
    cout<<"digite um dia";
    cin>>d;

    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d<=31&&d>0)
        {
            cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está correta";
        }
        else
        {
            cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está incorreta";
        }
    }
    else if(m==2)
    {
        if(a%4==0)
        {
            if(d<=29&&d>0)
            {
                cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está correta";
            }
            else
            {
                cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está incorreta";
            }
        }
        else
        {
            if(d<=28&&d>0)
            {
                cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está correta";
            }
            else
            {
                cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está incorreta";
            }

        }
    }
    else if(m==4||m==6||m==9||m==11)
    {
        if(d<=30&&d>0)
        {
            cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está correta";
        }
        else
        {
            cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está incorreta";
        }
    }
    else
    {
        cout<<"a data "<<d<<"/"<<m<<"/"<<a<<" está incorreta";
    }

}
