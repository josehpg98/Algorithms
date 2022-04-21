#include<iostream>
#include<clocale>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int V[10],s,i;
    float x;
    for(i=0;i<10;i++)
    {
    cout<<"\n informe a posição do vetor: [" << i << "]";
    s = rand() % 2;
    V[i] = rand() % 100;
    if(s == 0)
    {
        V[i] = (V[i] * -1);
        x = V[i];
    }
    cout<< x;
    }
}
