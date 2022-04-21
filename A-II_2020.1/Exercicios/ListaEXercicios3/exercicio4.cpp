#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
void geravetor();
main()
{
    setlocale(LC_ALL,"Portuguese");
    geravetor();
}
void geravetor(){
    int v[5],n, soma = 0, res = 0;
    for(int i = 0; i < 5;i++){
        cout<<"informe um n�mero inteiro: " << endl;
        cin>>n;
        v[i] = n;
        for(int p = 2;p <= n / 2;p++){
            if(n % p == 0){
                res = res + 1;
            }
        }
        if(res == 0){
            soma = soma + n;
        }
    }
    cout<< endl;
    if(soma % 2 == 0){
        cout<<" a soma é verdadeira" << endl;
    }else{
        for (int j = 0; j < 5; j++)
        {
            cout<<v[j]<< endl;
        }
        
    }
}
