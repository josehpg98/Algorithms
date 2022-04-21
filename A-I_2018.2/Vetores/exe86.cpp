#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int A[10],i, sn,cont,n=0;
    for(i=0; i<10; i++)
    {
        cout<<"\n infome o valor na posição do vetor: ["<< i <<"] ";
        sn = rand() % 2;
        A[i] = rand() % 1000;
        if(sn == 0)
        {
            A[i] = A[i] * -1;
            cont = A[i];
        }
        if(cont < 0){
            n = n++;

        }
    cout<< A[i];
    cout<<"\n os valores negativos aparecem " << n << " vezes";

    }
}


