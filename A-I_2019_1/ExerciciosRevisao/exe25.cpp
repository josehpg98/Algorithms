#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int v1,v2,v3;
    cout<<"\n informe o primeiro valor: ";
    cin>>v1;
    cout<<"\n informe o segundo valor: ";
    cin>>v2;
    cout<<"\n informe o terceiro valor: ";
    cin>>v3;
    if( v1 > v2 && v1 > v3)
    {
        cout<< v1 <<" � o maior n�mero!";
    }
     else if( v2 > v1 && v2 > v3)
    {
        cout<< v2 <<" � o maior n�mero!";
    }
     else
    {
        cout<< v3 <<" � o maior n�mero!";
    }
}
