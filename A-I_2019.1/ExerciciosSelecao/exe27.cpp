#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float a,b;
    cout<<"\n informe um numero:";
    cin>>a;
    cout<<"\n informe um numero:";
    cin>>b;
    if(a > b)
    {
        cout<<"\n o numero " << a << " é maior que: " << b;
    }
    else
    {
          cout<<"\n o numero " << b << " é maior que: " << a;
    }
}
