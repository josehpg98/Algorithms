#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n, v,res=1;
    cout<<"informe um n�mero inteiro e positivo: ";
    cin>> n;
    cout<<"informe o segundo n�mero: ";
    cin>> v;

    for(int p=0;p<v;p++){
        res*=n;
    }
       cout<<" o resultado de "<< n << " ^ " << v << " � " << res;

}
