#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     float p,pa,pd;

    cout<<"\n informe seu peso: ";
    cin>>p;
    pa =( ((p * 15) / 100) + p );
    pd = p - ( (p * 20) / 100);
    cout<<"\n o seu peso com 15% a mais ficara em: " << pa;
    cout<<"\n o seu peso com 20% a menos ficara em: " << pd;
}
