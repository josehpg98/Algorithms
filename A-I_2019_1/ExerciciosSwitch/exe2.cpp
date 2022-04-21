#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int ddd;
    cout<<"\n informe um DDD de um estado através do correspondente número: ";
    cin>>ddd;
    switch(ddd)
    {
    case 61:
        cout<<"\n o ddd é de brasília!";
        break;
    case 71:
        cout<<"\n o DDD é salvador!";
        break;
    case 11:
       cout<<"\n o DDD é são paulo!";
        break;
    case 21:
        cout<<"\n o DDD é rio de janeiro!";
        break;
    case 32:
        cout<<"\n o DDD é juiz de fora!";
        break;
    case 19:
        cout<<"\n o DDD é campinas!";
        break;
    case 27:
        cout<<"\n o DDD é vitoria!";
        break;
    case 31:
        cout<<"\n o DDD é belo horizonte!";
        break;
    default:
        cout<<"\n DDD não encontrado!"<< ddd;
    }
}
