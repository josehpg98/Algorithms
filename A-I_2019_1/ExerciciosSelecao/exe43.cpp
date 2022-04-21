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
    double s,rs,d;
    int c;
    cout<<"\n informe o seu salário: " << endl;
    cin>>s;
    cout<<"\n informe a sua categoria ( 101-gerente | 102-engenheiro | 103-técnico : " << endl;
    cin>>c;
    if(c == 101)
    {
        rs = ((s * 10) / 100) + s;
        d = (rs - s);
        cout<<"\n o seu salário antigo é: " << s << " o seu salário reajustado é " << rs << " e a diferença é: " << d;
    }
    else if(c == 102)
    {
        rs = ((s * 20) / 100) + s;
        d = (rs - s);
        cout<<"\n o seu salário antigo é: " << s << " o seu salário reajustado é " << rs << " e a diferença é: " << d;

    }
    else if(c == 103)
    {
        rs = ((s * 30) / 100) + s;
        d = (rs - s);
        cout<<"\n o seu salário antigo é: " << s << " o seu salário reajustado é " << rs << " e a diferença é: " << d;

    }
    else
    {
        rs = ((s * 40) / 100) + s;
        d = (rs - s);
        cout<<"\n o seu salário antigo é: " << s << " o seu salário reajustado é " << rs << " e a diferença é: " << d;
    }
}
