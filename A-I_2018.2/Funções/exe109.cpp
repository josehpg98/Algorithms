#include<iostream>
#include<locale.h>
using namespace std;
int calculafatorial(int fat);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n,r;
    cout<<"\n informe o n�mero para calcular o fatorial: ";
    cin>>n;
    r = calculafatorial(n);
    cout<<"\n o fatorial de " << n << " � " << r;
}
int calculafatorial(int fat){
    int resultado = 1;
     for(int i=fat;i>0;i--){
        resultado=(resultado*i);
     }
     return resultado;
}

