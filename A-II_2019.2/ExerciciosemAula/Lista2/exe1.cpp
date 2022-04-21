#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1,n2,n3,n4,med;
    cout << " Informe a primeira nota: " << endl;
    cin>>n1;
    cout << " Informe a segunda nota: " << endl;
    cin>>n2;
    cout << " Informe a terceira nota: " << endl;
    cin>>n3;
    cout << " Informe a quarta nota: " << endl;
    cin>>n4;
    n1 = (1 * n1 ) / 1;
    n2 = (2 * n2 ) / 2;
    n3 = (3 * n3 ) / 3;
    n4 = (4 * n4 ) / 4;
    med = ((1 * n1 + 2 * n2 + 3 * n3 + 4 * n4) / 10 );

    cout<<fixed;
    cout.precision(1);
    cout<<n1 << endl;
    cout<<n2 << endl;
    cout<<n3 << endl;
    cout<<n4 << endl;
    cout<< "media ponderada: " << endl;
    cout<< med << endl;
}
