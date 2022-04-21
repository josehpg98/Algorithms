#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int num = 0, s = 0;
    float m = 0;

    for (int i = 1; i < 11; ++i)
    {
       cout<<"\n informe um numero: ";
       cin>>num;
       s = s + num;
       m = s / 10;
    }
    cout<<"\n o a soma dos números lidos é: " << s;
    cout<<"\n o a média dos números lidos é: " << m;
}
