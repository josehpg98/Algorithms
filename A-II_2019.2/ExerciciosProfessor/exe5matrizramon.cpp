#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstdio>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
void gerar( float *m, int tam);
void maioremenor ( float *m, int tam);
void soma_media ( float *m, int tam);

main(){
    setlocale(LC_ALL,"portuguese");
    int l, c, tam;
    cout<<"\n Informe o número de linhas: ";
    cin>> l;
    cout<<"\n Informe  o número de colunas: ";
    cin>> c;
    tam= l*c;
    float *m = new float [tam];
    cout<<"\n Gerando a matriz:";
    gerar(m,tam);
    maioremenor(m,tam);
    soma_media(m,tam);

}
void gerar( float *m, int tam){
    srand(time(NULL));

    for(int i=0; i< tam; i++){

        m[i]=rand()%1000*0.1;
       cout<< " "<< m[i] <<",";
    }

}
void maioremenor ( float *m, int tam){
    float ma, me;
    ma =m[0];
    me=m[0];
    for(int i=0; i<tam; i++){
        if( m[i]> ma){

            ma= m[i];
        }
        else if(m[i]< me){
            me= m[i];
        }

    }
    cout<<"\n MAIOR:" << ma;
    cout<<"\n MENOR:" << me;

}
void soma_media ( float *m, int tam){
    float soma=0.0, media=0.0;
    for(int i=0; i<tam; i++){

        soma+=m[i];
    }
    cout<<"\n Soma =" <<soma;
    media= soma/tam;
    cout<<"\n Média ="<<media;

}
