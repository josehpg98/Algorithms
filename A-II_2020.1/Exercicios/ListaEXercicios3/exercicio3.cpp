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
    int n,t;
    cout<<"informe um número inteiro: " << endl;
    cin>>n;
    fflush(stdin);
    cout<<"informe outro número inteiro: " << endl;
    cin>>t;
    cout<<endl;
    fflush(stdin);
    int v[n];

    for(int i = 0;i < n;i++){
        t = t - 1;
        v[i]= t;
            cout<<v[i]<<endl;
        
    }
}
