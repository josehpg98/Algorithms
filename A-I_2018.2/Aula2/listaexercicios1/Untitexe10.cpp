#include <iostream>
using namespace std;
main()
{
    float mes, reaj,vlr, salrej;
   cout<<"\n informe o sal�rio mensal atual: ";
   cin>> mes;

   cout<<"\n informe o percentual de reajuste mensal: ";
   cin>> reaj;

   vlr = (mes * reaj)/ 100;
   salrej = vlr + mes;

   cout<<"\n o novo sal�rio reajustado ser�: " << salrej;

  return 0;
}
