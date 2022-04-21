#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int fib(int n);
main()
{
   int v, C = 0;
   int res = 0;
   cout<<"informe um numero: " <<endl;
   cin>>v;
   fflush(stdin);
   cout<<fib(v);
   if(res = fib(v)){
    C = C+ 1;
     cout<<res;
   }
        cout<<C;
}
int fib(int n){
    //int cont = 0;
    if(n > 1){
        return (fib(n - 1) + fib(n -2));
    //cont++;
    }
    //cout<<cont;
}
