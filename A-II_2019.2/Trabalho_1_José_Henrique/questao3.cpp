#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
int calculafatorialduplo(int n);
main()
{
  setlocale(LC_ALL,"Portuguese");
   int num,ret = 0;
   do{
   cout<<"informe um número para calcular o seu fatorial: " << endl;
   cin>>num;
   }while(num % 2 == 0 || num < 1);
   ret = calculafatorialduplo(num);
   cout<<"o fatorial de " << num << " é: " << ret << endl;
}
int calculafatorialduplo(int n){
    int retorno = 0;
    for(int i = n; i >= 3 ;i = i - 2){
        retorno = (n * i);
    }
    return retorno;
}

