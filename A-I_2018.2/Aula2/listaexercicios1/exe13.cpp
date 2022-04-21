#include<iostream>
using namespace std;
main()
{
    float p, em,nem;
    cout<<"informe o seu peso em kg: ";
    cin>> p;

    em = (p * 20) / 100;
    nem = p - em;
    cout<<"o seu peso se engordar 15 por cento será: " << (p * 15) / 100 + p;
    cout<<"\n o seu peso se emagrecer 20 por cento será: " << nem;
}
