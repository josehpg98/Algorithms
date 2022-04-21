#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int cont = 0;
    int num = 0;
    int mr = 0;
    int mn = 0;
    int s;
    float med;
    srand(time(NULL));
    while(cont < 5)
    {
        num = rand()%100;
        if( num > mr)
        {
            mr = num;
        }
        else if(num < mr && num > mn)
        {
            mn = num;
        }

         cont++;
         s += num++;
         med =  s / cont;
    }
    cout<<"o maior numero sorteado foi: "<< mr;
    cout<<"\n o menor número sorteado  foi: " << mn;
    cout<<"\n a soma dos numeros é: " << s << " é a média: " << med;

}
