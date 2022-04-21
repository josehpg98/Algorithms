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
    double s,rs;
    int c;
    cout<<"\n informe o seu nome: " << endl;
    cin>>n;
    cout<<"\n informe o seu salário: " << endl;
    cin>>s;
    cout<<"\n informe a sua categoria ( 0- A,C,F,H | 1-B,D,E,I,J,T | 2-KR | 3-L,M,N,O,P,S | 4-U,V,X,Z: " << endl;
    cin>>c;
    if(c == 0)
    {
        rs = ((s * 10) / 100) + s;
        cout<< n <<" o seu salário reajustado é " << rs;
    }
    else if(c == 1)
    {
        rs = ((s * 15) / 100) + s;
        cout<< n <<" o seu salário reajustado é " << rs;

    }
    else if(c == 2)
    {
        rs = ((s * 25) / 100) + s;
        cout<< n <<" o seu salário reajustado é " << rs;

    }
    else if(c == 3)
    {
        rs = ((s * 35) / 100) + s;
        cout<< n <<" o seu salário reajustado é " << rs;

    }
     else if(c == 4)
    {
        rs = ((s * 50) / 100) + s;
        cout<< n <<" o seu salário reajustado é " << rs;

    }
    else
    {
        cout<<"\n opção inválida!";
    }
}
