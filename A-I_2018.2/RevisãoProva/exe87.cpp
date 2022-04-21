#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");
    int A[10],x,l,ng=0;
    for(int i=0;i<10;i++)
    {
        A[i]=rand() % 100;
        l = A[i];
    }
    cout<<"\n digite o  numero á procurar: ";
    cin>>x;
    for(int i=0;i<10;i++)
    {
        if(A[i]==x)
        {
            ng = ng++;
        }
    }
    cout<<"\n o total de vezes qe o número aparece é: " << ng;

}
