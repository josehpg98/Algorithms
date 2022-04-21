#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
void troca(int *a1,int *b1);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int a = 2,b = 3;
    cout<<"Valores antes da troca: " <<endl;
    cout<<"A = " << a <<endl;
    cout<<"B = " << b << endl;
    troca(&a,&b);
}
void troca(int *a1,int *b1){
    cout<<"Valores na função troca: " << endl;
    int aux;
    aux = *a1;
    *a1 = *b1;
    *b1 = aux;
    cout<<"A = " << *a1 <<endl;
    cout<<"B = " << *b1 << endl;
}
