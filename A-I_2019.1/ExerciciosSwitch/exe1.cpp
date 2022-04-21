#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m;
    cout<<"\n informe um mês através do correspondente número: ";
    cin>>m;
    switch(m)
    {
    case 1:
        cout<<"\n o mês é janeiro!";
        break;
    case 2:
        cout<<"\n o mês é fevereiro!";
        break;
    case 3:
        cout<<"\n o mês é março!";
        break;
    case 4:
        cout<<"\n o mês é abril!";
        break;
    case 5:
        cout<<"\n o mês é maio!";
        break;
    case 6:
        cout<<"\n o mês é junho!";
        break;
    case 7:
        cout<<"\n o mês é julho!";
        break;
    case 8:
        cout<<"\n o mês é agosto!";
        break;
    case 9:
        cout<<"\n o mês é setembro!";
        break;
    case 10:
        cout<<"\n o mês é outubro!";
        break;
    case 11:
        cout<<"\n o mês é novembro!";
        break;
    case 12:
        cout<<"\n o mês é dezembro!";
        break;
    default:
        cout<<"\n mes não encontrado!"<< m;
    }
}
