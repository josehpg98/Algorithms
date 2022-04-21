#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<ctime>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int b[50], i, m, cont;
    for(i=0;i<50;i++){
        cout<<"\n informe a posição do vetor b[ " << i << "]";
        b[i] = rand() % 100;
    }



}
