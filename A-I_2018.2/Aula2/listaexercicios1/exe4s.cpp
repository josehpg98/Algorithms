#include<iostream>
using namespace std;
main()
{

  double duracao, h, m, s;

  cout<<"\n informe o tempo de dura��o em segundos : ";
  cin>> duracao;

  h = duracao / 3600;
  m = (duracao % 3600) / 60;
  s = (duracao % 60);

  cout<<"o tempo �: "  h "h e " m "min e " s "seg";
  return 0;





}

