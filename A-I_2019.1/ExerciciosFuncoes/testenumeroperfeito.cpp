#include<iostream>
using namespace std;
main()
{
int soma = 0,n;
    cout<<" inforem um numero: " << endl;
    cin>>n;
  // valida se é perfeito
  for(int i  = 1; i < n; ++i)
  {
    soma = soma + i;
    if (n == soma)
      return 0; // é perfeito
      //cout<<" e um numero perfeito" << endl;
  }

  return -1; // não é perfeito
    //cout<<" ná é perfeito" << endl ;
  }
