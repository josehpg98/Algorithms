#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");

     int ac;
    float f,c;
    cout<<"\n informe o valor da conta ha ser paga: ";
    cin>>c;
    ac = c / 3;
    f =(c - (ac * 2) );
    cout<<"\n o valor que carlos e andré vão pagar é: " << ac;
    cout<<"\n o valor que felipe vai pagar é: " << f;
}
