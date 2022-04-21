#include<iostream>
using namespace std;
int ImprimeN(int pn)
{
 int i,rn=0;
 for(i=1 ; i <= pn; i++)
 {
 rn = rn + (pn+i);
 //cout<<"\n - "<< pn + i;
 }
 return (rn);
}
main( )
{
 int n;
 cout<< "\nInforme um numero ";
 cin >> n;
 n =ImprimeN(n);
 cout<< "\n\n\n Valor de N "<< n;
}
