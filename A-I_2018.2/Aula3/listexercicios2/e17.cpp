#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    string n;
    char c;
    int s;
    cout<<"Qual é o nome?";
    cin>>n;
    cout<<"qual é a categoria?";
    cin>>c;
    cout<<"qual é o salario?";
    cin>>s;
    c = toupper(c);
    if(c=='A'||c=='C'||c=='F'||c=='H')
    {
        s=(s+(s*10)/100);
        cout<<"seu salario agora é de "<<s<<"R$";
    }
    else if(c=='B'||c=='D'||c=='E'||c=='I'||c=='J'||c=='T')
    {
        s=(s+(s*15)/100);
        cout<<"seu salario agora é de "<<s<<"R$";
    }
    else if(c=='K'||c=='R')
    {
        s=(s+(s*25)/100);
        cout<<"seu salario agora é de "<<s<<"R$";
    }
    else if(c=='L'||c=='M'||c=='N'||c=='O'||c=='P'||c=='S')
    {
        s=(s+(s*35)/100);
        cout<<"seu salario agora é de "<<s<<"R$";
    }
    else if(c=='U'||c=='V'||c=='X'||c=='Z'||c=='W')
    {
        s=(s+(s*50)/100);
        cout<<"seu salario agora é de "<<s<<"R$";
    }
    else
    {
        cout<<"categoria invalida!";
    }
}
