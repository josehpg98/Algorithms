#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int var1,q,c;
    cout<<"\n informe um numero: ";
    cin>>var1;
    q = (var1 * var1);
    c = (var1 * var1 * var1);

    cout<<"\n o cubo de " << var1 << " é: " << c << " é o seu quadrado é  " << q;
}
