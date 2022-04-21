#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int min;

    cout<<"\n informe o tempo da corrida em minutos: ";
    cin>>min;
    switch(min)
    {
    case 15:
        cout<<"\n você perdeu 170 calorias! ";
        break;
    case 30:
       cout<<"\n você perdeu 350 calorias! ";
    case 60:
       cout<<"\n você perdeu 700 calorias! ";
        break;
    case 90:
        cout<<"\n você perdeu 1050 calorias! ";
        break;
    case 120:
        cout<<"\n você perdeu 1400 calorias! ";
        break;
    default:
        cout<<"\n mes não encontrado!"<< min;
    }
}
