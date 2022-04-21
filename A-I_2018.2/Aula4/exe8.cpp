#include<iostream>
#include<locale.h>>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int temp;

    cout<<"informe o tempo de corrida percorrido em minutos: ";
    cin>> temp;


        switch(temp)
    {
    case 15:
        cout<<" você perdeu 170 calorias ";
        break;
    case 30:
         cout<<" você perdeu 350 calorias ";
        break;
    case 60:
        cout<<" você perdeu 700 calorias ";
        break;
    case 90:
        cout<<" você perdeu 1050 calorias ";
        break;
    case 120:
         cout<<" você perdeu 1400 calorias ";
        break;
    default:
        cout<<"placa invalida";
    }
}
