#include<iostream>
using namespace std;
main()
{
int soma = 0,n;
    cout<<" inforem um numero: " << endl;
    cin>>n;
  // valida se � perfeito
  for(int i  = 1; i < n; ++i)
  {
    soma = soma + i;
    if (n == soma)
      return 0; // � perfeito
      //cout<<" e um numero perfeito" << endl;
  }

  return -1; // n�o � perfeito
    //cout<<" n� � perfeito" << endl ;
  }
