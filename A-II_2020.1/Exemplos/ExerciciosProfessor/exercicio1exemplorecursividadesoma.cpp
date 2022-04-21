#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int soma(int n);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int v;
    cout<<"informe um valor: " << endl;
    cin>>v;
    soma(v);
    cout<< soma(v);
}
int soma(int n){
    if(n == 1){
        return 1;
    }else{
    return(n + soma(n - 1));
    }
}
