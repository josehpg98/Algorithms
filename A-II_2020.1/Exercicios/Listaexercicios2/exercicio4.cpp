#include<iostream>
using namespace std;
void verificanumerointeiro(int n);
main()
{
  setlocale(LC_ALL,"Portuguese");
  int numero;
  cout<<"informe um número: " << endl;
  cin>>numero;
  verificanumerointeiro(numero);
}
void verificanumerointeiro(int n){
    int c = 0;
    for(int i = 0;i < n;i++){
        if((n % i) == 0){
            c = c + 1;
        }
    }
    cout<<"o número de divisores de " << n << " é: " << c << endl;
}