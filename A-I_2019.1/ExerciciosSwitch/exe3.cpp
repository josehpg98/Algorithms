#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int cod;
    cout<<"\n informe o codigo da regi�o: ";
    cin>>cod;
    switch(cod)
    {
    case 1:
        cout<<"\n o codigo � regi�o sul!";
        break;
    case 2:
        cout<<"\n o codigo � regiao norte!";
        break;
    case 3:
       cout<<"\n o codigo � regi�o leste!";
        break;
    case 4:
        cout<<"\n o copdigo � regi�o oeste!";
        break;
    case 5 ... 6:
        cout<<"\n o codigo � nordeste!";
        break;
    case 7 ... 9:
        cout<<"\n o codigo � sudeste!";
        break;
    case 10 ... 20:
        cout<<"\n o codigo � centro-oeste!";
        break;
    case 21 ... 30:
        cout<<"\n o codigo � nordeste!";
        break;
    default:
        cout<<"\n codigo n�o encontrado!"<< cod;
    }
}
