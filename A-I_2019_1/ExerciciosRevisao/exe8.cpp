#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float ar,b,a;

    cout<<"\n informe o valor da base: ";
    cin>>b;
    cout<<"\n informe o valor da altura: ";
    cin>>a;
    ar = (b *a) / 2;
    cout<<"\n a area é " << ar;
}
