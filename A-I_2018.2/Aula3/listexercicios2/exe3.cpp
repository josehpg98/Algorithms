#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int v1, v2, res, res1;
    cout<<"informe um n�mero qualquer: ";
    cin>> v1;
    cout<<"informe outro valor qualquer: ";
    cin>> v2;

    if(v1 >= v2)
    {
        res=v1-v2;
        cout<<"\n a diferen�a entre" << v1 << " e " << v2 << " �: " << res <<endl;

    }
    else if(v2 > v1)
    {
        res1= v2-v1;
        cout<<"\n a diferen�a entre " << v2 << " e " << v1 << " �: " << res1;
    }
}

