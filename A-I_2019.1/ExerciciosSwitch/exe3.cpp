#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int cod;
    cout<<"\n informe o codigo da regiâo: ";
    cin>>cod;
    switch(cod)
    {
    case 1:
        cout<<"\n o codigo é região sul!";
        break;
    case 2:
        cout<<"\n o codigo é regiao norte!";
        break;
    case 3:
       cout<<"\n o codigo é região leste!";
        break;
    case 4:
        cout<<"\n o copdigo é região oeste!";
        break;
    case 5 ... 6:
        cout<<"\n o codigo é nordeste!";
        break;
    case 7 ... 9:
        cout<<"\n o codigo é sudeste!";
        break;
    case 10 ... 20:
        cout<<"\n o codigo é centro-oeste!";
        break;
    case 21 ... 30:
        cout<<"\n o codigo é nordeste!";
        break;
    default:
        cout<<"\n codigo não encontrado!"<< cod;
    }
}
