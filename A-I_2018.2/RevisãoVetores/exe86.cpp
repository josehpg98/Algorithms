#include<iostream>
#include<locale.h>
#include<stdlib.h>
using namespace std;
main()
{
     setlocale(LC_ALL,"Portuguese");
    int A[10],ng=0;
    for(int i=0;i<10;i++){
        cout<<"\n escreva o "<< i << " numero: ";
        cin>>A[i];
        if(A[i]<0)
        {
          ng = ng++;
        }
    }
    cout<<"\n o total de números negativos é: " << ng;
}
