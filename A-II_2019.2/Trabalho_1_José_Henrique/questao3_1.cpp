#include<iostream>
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
   cout<<"o fatorial duplo de " << num << " é: " << ret << endl;
}
int calculafatorialduplo(int n){
    int retorno = 0;
     if(n == 1)
    {
        retorno = 1;
    }
    else
    {
     retorno = (n * calculafatorialduplo(n - 2));
    }
    return retorno;
}

