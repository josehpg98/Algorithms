#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int fib(int n);
main()
{
   int v = 27;
   int res = 0;
  // cout<<"informe um numero: " <<endl;
  // cin>>v;
  // fflush(stdin);
   cout<<fib(v);
    res = fib(v);
    //cout<<res;
}
int fib(int n){
    //int cont = 0;
    if(n <= 10){
        return n * 2;
    //cont++;
    }else{
        return fib(fib(n/ 3));
    }
    //cout<<cont;
}
