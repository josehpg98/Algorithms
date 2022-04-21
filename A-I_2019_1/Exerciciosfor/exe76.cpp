#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int num,c = 0,r,pm;
    for (int i = 1; i < 11; ++i)
    {
        cout<<"\n informe um numero: ";
        cin>>num;
        //pm = 0;
        for (int p = 1; p <= num;++p)
        {
            r = num % p;
            if(r == 0){
                c = c + 1;
            }
            if(c == 2){
                    pm = pm + 1;
                }
        }
    }

    cout<<" a quantidade de números primos digitados é: " << pm << endl;
}
