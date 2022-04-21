#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b,c;
    cout<<"\n informe um valor:";
    cin>>a;
    cout<<"\n informe um valor:";
    cin>>b;
    cout<<"\n informe um valor:";
    cin>>c;
    //a maior que b e c
    if(a > b && a > c)
    {
        cout<< a << endl;
        cout<< b << endl;
        cout<< c << endl;
    }
    //a maior que b e menor que c
     else if(a > b && a < c)
    {
        cout<< a << endl;
        cout<< c << endl;
        cout<< b << endl;
    }
    else if(b > a && b > c)
    {
        cout<<b << endl;
        cout<<a << endl;
        cout<<c << endl;
    }
    else if(b > a && b > c)
    {
        cout<<b << endl;
        cout<<a << endl;
        cout<<c << endl;
    }
    else
    {
        cout<<c << endl;
        cout<<a << endl;
        cout<<b << endl;
    }
}
