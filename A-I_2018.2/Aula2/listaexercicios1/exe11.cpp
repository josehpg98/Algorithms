#include <iostream>
#include <locale.h>
using namespace std;
main( )
{
    setlocale(LC_ALL,"Portuguese");
    float media, dist, comb;

    cout<<"\n informe a distância total percorrida: ";
    cin>> dist;

    cout<<"\in informe o total de combustivel gasto em litros: ";
    cin>> comb;

    media = dist / comb;

    cout<<"o consumo médio é: " << media;

}
