#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, r;
    cout<<"\n informe um número de 0 a 10 pra ser formado a tabuada: ";
    cin>>num;

    for (int i = 1; i < 11; ++i)
    {
        r = num * i;
        cout<<"\n " << num << " * " << i << " = " << r;
    }

   
     

   
}
