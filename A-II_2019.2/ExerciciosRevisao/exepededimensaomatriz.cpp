#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstdio>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
void gerar(int l,int c);
main(){
    setlocale(LC_ALL,"portuguese");
    int l, c, tam;
    cout<<"\n Informe o número de linhas: ";
    cin>> l;
    cout<<"\n Informe  o número de colunas: ";
    cin>> c;
    cout<<"\n Gerando a matriz:" << endl;
    gerar(l,c);
}
void gerar(int l,int c){
    srand(time(NULL));
    int mat;
    for(int i=0; i< l; i++){

        mat[l]=rand() % 50;// gera com valores float
       cout<< " "<< mat[i];
       for(int s = 0;s < c:s++){
             mat[s]=rand() % 50;
             cout<< mat[s];
       }

    }

}
