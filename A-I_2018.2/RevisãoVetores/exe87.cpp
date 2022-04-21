 #include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int A[10],i,t,s;
    for(i=0;i<10;i++)
    {
        cout<<"\n o valor do vetor [" << i << "] é: ";
        s = rand() % 2;
        A[i] = rand() % 100;
    if(s == 0)
    {
        A[i] = (A[i] * -1);
        t = A[i];
    }
          cout<<t;
    }

}
