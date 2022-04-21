#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
   int a,c;
    cout<<"\n informe um numero:";
    cin>>a;
    c = (a % 2);
    if(c == 0)
    {
        cout<<"\n o numero  " << a << " é par " ;
    }
    else
    {
        cout<<"\n o numero  " << a << " é impar " ;
    }
}
