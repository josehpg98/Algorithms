#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
   int r;
   float s,sr;
   cout<<"\n informe o salário: ";
   cin>>s;
   cout<<"\n informe o reajuste: ";
   cin>>r;

   sr = ((s * r) / 100)+ s;



    cout<<"\n o reajuste de saário é: " << sr;

}
