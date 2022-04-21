#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n,cont,dv;
    cout<<"informe um número: ";
    cin>> n;

    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
            cont++;

    }
        if(cont == 2)
        {
            dv = (n / i);
            cout<<"o número é primo!";
        }
        else if
        {
            cout<<" o número não é primo!";
        }


}
