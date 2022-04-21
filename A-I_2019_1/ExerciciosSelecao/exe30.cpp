#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float a1,a2,a3;
    cout<<"\n informe a primeira altura:";
    cin>>a1;
    cout<<"\n informe a segunda altura:";
    cin>>a2;
    cout<<"\n informe a terceira altura:";
    cin>>a3;

    if(a1 > a2 && a1 > a3)
    {
        cout<<"\n a altura  " << a1 << " é a maior " ;
    }
    else if(a2 > a1 && a2 > a3)
    {
        cout<<"\n a altura  " << a2 << " é a maior " ;
    }
    else
    {
        cout<<"\n a altura  " << a3 << " é a maior " ;
    }
}
