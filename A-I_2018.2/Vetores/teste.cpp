#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int A[50],i,x,cont;

    for(i=0;i<50;i++){
        cout<<"\n informe o valor na posição do vetor v[" << i <<"] ";
        A[i]=rand()%100;
        cout<<A[i];
    }
    cout<<"\n informe um valor para a variavel x: ";
    cin>> x;

    cont=0;
     for(i=0;i<50;i++){
        if(x==A[i])
            cont = cont+1;
     }
     cout<<"\n quantas vezes X aparece no A: " << cont;
}
