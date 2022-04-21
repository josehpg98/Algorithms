#include<iostream>
using namespace std;
main()
{
 setlocale(LC_ALL,"Portuguese");
 float d,c,m;
 cout<<"\n informe a distância percorrida: ";
 cin>>d;
 cout<<"\n informe a quantidade de combustivel consumida: ";
 cin>>c;
 m = d / c;
 cout<<"\n a média em km/l foi: " << m;

}
