#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int fatorial(int n);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int v;
    do{
    cout<<"informe um valor inteiro: " << endl;
    cin>>v;
    }while(v % 2 == 0);
    fatorial(v);
    cout<< fatorial(v);
}
int fatorial(int n){
    if(n == 1){
        return 1;
    }else{
    return(n * fatorial(n - 2));
    }
}

