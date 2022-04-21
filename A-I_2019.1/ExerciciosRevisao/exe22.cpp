#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");

    int a,id,idf;

    cout<<"\n informe seu ano de nascimento: ";
    cin>>a;
    id = (2019 - a);
    idf = (2050 - a);

    cout<<"\n a sua idade é: " << id;
    cout<<"\n a sua idade em 2050 é: " << idf;

}
