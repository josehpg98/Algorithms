#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<ctime>
#include<stdio.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int vl = 0;
    int r = 0;
    int n;
    srand(time(NULL));
    vl = rand()%100;
    bool acertou = false;
    while(r < 6 && acertou == false)
    {
        cout<<"\n digite um numero entre 0 e 100: ";
        cin>> n;
        if( n > vl)
        {
            cout<<"o valor digitado é menor que o valor gerado!";
        }
        else if(n < vl)
        {
            cout<<"o valor digitado é maior que o valor gerado: ";
        }
        else if( n == vl)
        {
            cout<<"parabéns,. você acertou o valor! ";
            acertou = true;

        }
        r++;

    }
    if(acertou == false)
    {
    cout<<"\n as chaces terminaram, o valor gerado é: " << vl;
     }
}
