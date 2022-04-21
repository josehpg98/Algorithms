#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int a1,a2, a3;
    cout<<"informe a primeira altura: ";
    cin>> a1;
    cout<<"informe a segunda altura: ";
    cin>> a2;
    cout<<"informe a terceira altura: ";
    cin>> a3;

    if(a1 >= a2 && a1 > a3)
    {
        cout<<"a altura maior é a " << a1;
    }
    else if (a2 >= a3 && a2 > a1)
    {
        cout<<"a altura maior é a " << a2;
    }
    else if (a3 >= a1 && a3 > a2)
    {
        cout<<"a altura maior é a " << a3;
    }


}
