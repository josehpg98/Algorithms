#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<ctime>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int A[10],i,x,cont;
    for(i=0;i<10;i++){
    cout<<"\n informe a posição do vetor A["<< i << "]";
        A[i] = rand() % 100;
    }
    cout<<"\n informe um valor para a variáVEL X: ";
    cin>>x;
    cont=0;
    for(i=0;i<10;i++){
        if(x==A[i])
            cont = cont+1;
    }
    cout<<"\n quantas vezes aparece x: " << cont;
}
