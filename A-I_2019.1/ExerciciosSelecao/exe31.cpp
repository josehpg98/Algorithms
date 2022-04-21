#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,y;
    float d;
    cout<<"\n informe o primeiro numero:";
    cin>>x;
    cout<<"\n informe o segundo número:";
    cin>>y;
    d = (x % y);
    if(d == 0)
    {
        cout << x << " é sim divisivel por " << y;
    }
    else
    {
        cout << x << "  não é divisivel por " << y;
    }
}
