#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;
void leitura(int x[]);
int somavetor(int x[]);
main()
{
    int a[50],res = 0;
    leitura(a);
    //cout<<"vetor no main" <<endl;
    //for(int c = 0; c < 50; c++)
    //{
        //cout<<a[c]<< endl;
   // }

   cout<<" a soma do valores do vetor é: "<< somavetor(a) << endl;
}
void leitura(int x[])
{
    int i;
    srand(time(NULL));
    cout<<"vetor na função" <<endl;
    for(i = 0; i < 50; i++)
    {
        x[i] = rand() % 50;
        cout<<x[i]<<endl;
    }
}
int somavetor(int x[]){
    int resultado = 0;
    for(int l = 0;l < 50;l++){
        resultado = resultado + x[l];
    }
    return resultado;
}
