#include<iostream>
using namespace std;
void ImprimeN(int pn)
{
 int i;
 for(i=1 ; i <= pn; i++)
 {
 cout<<"\n - "<< pn + i;
 }
}
main( )
{
 int n;
 cout<< "\nInforme um numero ";
 cin >> n;
 ImprimeN(n);
 cout<< "\n\n\n Valor de N "<< n;
}

