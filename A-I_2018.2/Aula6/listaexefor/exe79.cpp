#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n, v,res=1;
    cout<<"informe um número inteiro e positivo: ";
    cin>> n;
    cout<<"informe o segundo número: ";
    cin>> v;

    for(int p=0;p<v;p++){
        res*=n;
    }
       cout<<" o resultado de "<< n << " ^ " << v << " é " << res;

}
