#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float sa, sm, reaj;
    char n;
    int r;
    cout<<"informe o seu nome: ";
    cin>> n;
    cout<<"informe o seu salário atual: ";
    cin>> sa;
    cout<<"informe o valor do salário minimo: ";
    cin>> sm;
    r =(sa / sm);
    if(r < 3)
    {
        reaj = ((sa * 50) / 100)+ sa;
         cout<< n << " o seu salário reajustado  será de:" << reaj;
    }
    else if(r >= 3 && r <= 10)
    {
        r = (sa / sm);
        reaj = ((sa * 20) / 100) + sa;
    }
    else if(r > 10 && r <= 20)
    {
        reaj = ((sa * 15) / 100)+ sa;
    }
    else if(r > 20)
    {
        reaj = ((sa * 10)/ 100) + sa;
    }
}
