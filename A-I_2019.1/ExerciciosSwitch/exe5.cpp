#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    char l;
    cout<<"\n informe a vogal: ";
    cin>>l;
    switch(l)
    {
    case 'a':
    case 'A':
        cout<<"\n primeria vogal";
        break;
    case 'E':
    case 'e':
        cout<<"\n segunda vogal";
        break;
    case 'i':
    case 'I':
        cout<<"\n terceira vogal";
        break;
    case 'O':
    case 'o':
        cout<<"\n quarta vogal";
        break;
    case 'u':
    case 'U':
        cout<<"\n quinta vogal";
        break;
    default:
        cout<<"\n vogal não encontrada!"<< l;
    }
}
