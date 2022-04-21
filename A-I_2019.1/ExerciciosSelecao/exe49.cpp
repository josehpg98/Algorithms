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
    float vrs,s,vsm;
    cout<<"\n informe seu nome: ";
    cin>>n;
    cout<<"\n informe o seu salario: ";
    cin>>s;
    cout<<"\n informe o valor do salário minímo: ";
    cin>>vsm;

    if(s < (vsm * 3))
    {
        vrs =( (s * 50) / 100 ) + s;
        cout<< n <<" o seu salário é: " << s << " o valor reajustado é: " << vrs << endl;
    }
    else if(s > (vsm * 3) && s <= (vsm * 10))
    {
        vrs =( (s * 20) / 100 ) + s;
        cout<< n <<" o seu salário é: " << s << " o valor reajustado é: " << vrs << endl;
    }
    else if(s > (vsm * 10) && s <= (vsm * 20))
    {
         vrs =( (s * 15) / 100 ) + s;
        cout<< n <<" o seu salário é: " << s << " o valor reajustado é: " << vrs << endl;
    }
    else if(s > (vsm * 20))
    {
           vrs =( (s * 10) / 100 ) + s;
        cout<< n <<" o seu salário é: " << s << " o valor reajustado é: " << vrs << endl;
    }
    else
    {
        cout<<"\n opção inválida! inválida!";
    }








}
