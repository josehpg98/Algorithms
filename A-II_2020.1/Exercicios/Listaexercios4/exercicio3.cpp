#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
float calculabase(float b,float e);
main()
{
    setlocale(LC_ALL,"Portuguese");
    float nm,ex;
    cout<<"informe um número: " << endl;
    cin>>nm;
    cout<<"informe o expoente: " << endl;
    cin>>ex;
    calculabase(nm,ex);
    float resultado = calculabase(nm, ex);
    cout<<"Calcula da base: " << resultado;
}
float calculabase(float b,float e){
    if(e == 0){
        return 1;
    }else{
        return b * (calculabase(b,e - 1));
    }
}
