#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstdio>
using namespace std;
main()
{
    int X[10];
    for(int i = 1;i < 11;i = i + 1){
        //cout<<"informe um valor para o vetor na posição " << i << endl;
        srand(time(NULL));
        X[i] = rand() % 150;
        if(X[i] < 0 ){
            X[i] = 1;
        }
    }
    cout<<"mostra os valores do vetor: " << endl;
    for(int i = 1;i < 11;i = i + 1){
        cout<< " X[ " << i << " ] = " << X[i] << endl;

    }
}
