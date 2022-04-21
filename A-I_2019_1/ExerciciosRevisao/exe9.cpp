#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
   int p,q;
   float v,tp,sd,vtc;
   cout<<"\n informe o total de prestações: ";
   cin>>p;
   cout<<"\n a quantidade de prestações já pagas: ";
   cin>>q;
   cout<<"\n informe o valor atual da prestação: ";
   cin>>v;
   vtc = (p * v);
   tp =(q * v);
   sd = (vtc - tp);


    cout<<"\n o total pago é " << tp;
    cout<<"\n o saldo devedor é " << sd;
}
