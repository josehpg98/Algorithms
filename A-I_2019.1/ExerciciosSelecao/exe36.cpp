#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float a,p,sex;
    cout<<"\n informe a sua altura:" << endl;
    cin>>a;
    cout<<"\n informe o seu sexo ( 0 - FEMININO | 1-MASCULINO):" << endl;
    cin>>sex;
    if(sex == 1)
    {
        p = (72.7 * a) - 58;
        cout<<" o seu peso ideal é: " << p;
    }
    else
    {
        p = (62.1 * a) - 44.7;
        cout<<" o seu peso ideal é: " << p;
    }
}
