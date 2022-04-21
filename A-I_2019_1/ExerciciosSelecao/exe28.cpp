#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float a,b,d;
    cout<<"\n informe um numero:";
    cin>>a;
    cout<<"\n informe um numero:";
    cin>>b;
    if(a > b)
    {
        d = (a - b);
        cout<<"\n a diferença de " << a << " menos " << b << " è: " << d;
    }
    else
    {
          d = (b - a);
          cout<<"\n a diferença de " << b << " menos " << a << " è: " << d;
    }
}
