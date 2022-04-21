#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    string n;
    float a,p,sex;
    int id;
    cout<<"\n informe o seu nome: " << endl;
    cin>>n;
    cout<<"\n informe a sua altura:" << endl;
    cin>>a;
    cout<<"\n informe o seu sexo ( 0 - FEMININO | 1-MASCULINO):" << endl;
    cin>>sex;
    cout<<"\n informe a sua idade:" << endl;
    cin>>id;
    if(sex == 1 && a > 1.70 && id <= 20)
    {
        p = (72.7 * a) - 58;
        cout<< n <<" o seu peso ideal é: " << p;
    }
    else if(sex == 1 && a > 1.70 && id > 21 && id <= 39)
    {
        p = (72.7 * a) - 53;
        cout<< n <<" o seu peso ideal é: " << p;
    }
     else if(sex == 1 && a > 1.70 &&  id >= 40)
    {
        p = (72.7 * a) - 45;
        cout<< n <<" o seu peso ideal é: " << p;
    }
    else if(sex == 1 && a <= 1.70 && id <= 40)
    {
        p = (72.7 * a) - 50;
        cout<< n <<" o seu peso ideal é: " << p;
    }
    else if(sex == 1 && a >= 1.70 && id > 40)
    {
        p = (72.7 * a) - 58;
        cout<< n <<" o seu peso ideal é: " << p;
    }
    else if(sex == 0 && a > 1.50 )
    {
        p = (62.1 * a) - 44.7;
        cout<< n <<" o seu peso ideal é: " << p;
    }
    else if(sex == 0 && a <= 1.50 && id >= 35)
    {
        p = (62.1 * a) - 45;
        cout<< n <<" o seu peso ideal é: " << p;
    }
    else if(sex == 0 && a <= 1.50 && id < 35 )
    {
        p = (62.1 * a) - 49;
        cout<< n <<" o seu peso ideal é: " << p;
    }
    else
    {
        cout<<"\n opção incorreta!";
    }
}
