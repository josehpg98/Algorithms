#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
void troca(int *a, int *b);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 2, b = 3;
     cout<<" valores antes da troca: " << endl;
    cout<<" valor de a: " << a << endl;
    cout<<" valor de b: " << b << endl;

    troca(&a,&b);
    cout<<" valores após troca: " << endl;
    cout<<" valor de a: " << a << endl;
    cout<<" valor de b: " << b << endl;
}
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;

}
