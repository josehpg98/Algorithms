#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
   int p,q;
   float v,tp,sd,vtc;
   cout<<"\n informe o total de presta��es: ";
   cin>>p;
   cout<<"\n a quantidade de presta��es j� pagas: ";
   cin>>q;
   cout<<"\n informe o valor atual da presta��o: ";
   cin>>v;
   vtc = (p * v);
   tp =(q * v);
   sd = (vtc - tp);


    cout<<"\n o total pago � " << tp;
    cout<<"\n o saldo devedor � " << sd;
}
