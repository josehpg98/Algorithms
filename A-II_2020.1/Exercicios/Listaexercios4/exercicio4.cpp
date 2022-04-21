#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
//#define tv 5;
using namespace std;
void geravalorvetor(int tm,int v[]);
float mediavetor(int v[], int tm);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int tv;
    cout<<"informe o tamanho do vetor: " << endl;
    cin>>tv;
    int v[tv];
    geravalorvetor(tv,v);
    mediavetor(v,tv);
    float resultado = mediavetor(v,tv);
    cout<<"Media vetor: " << resultado;
}
void geravalorvetor(int tm,int v[]){
    srand(time(NULL));
    cout<<"valores do vetor:" << endl;
    for (int i = 0; i < tm; i++)
    {
        v[i] = rand() % 50;
        cout<<v[i]<<endl;
    }
    
}
float mediavetor(int v[],int tm){
    if(tm == 1){
        return v[0];
    }else{
        return (v[tm - 1] + mediavetor(v,tm - 1))/ tm;
}
}