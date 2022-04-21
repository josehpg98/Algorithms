#include<iostream>
using namespace std;
void verificanumeroperfeito(int n);
main()
{
  setlocale(LC_ALL,"Portuguese");
  int numero;
  cout<<"informe um número: " << endl;
  cin>>numero;
  verificanumeroperfeito(numero);
}
void verificanumeroperfeito(int n);{
    int c = 0;
    float rt;
    for(int i = 0;i < n;i++){
        if((n % i) == 0){
            c = c + i;
        }
    }
    if(c == n){
        rt = 1;
    }else{
        rt = 0;
    }
    return rt;
}