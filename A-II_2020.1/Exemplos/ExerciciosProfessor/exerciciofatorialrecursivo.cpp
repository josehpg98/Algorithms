#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int fatorial(int n);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int v;
    cout<<"informe um valor: " << endl;
    cin>>v;
    fatorial(v);
    cout<< fatorial(v);
}
int fatorial(int n){
    if(n == 1){
        return 1;
    }else{
    return(n * fatorial(n - 1));
    }
}
