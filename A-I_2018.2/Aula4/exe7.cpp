#include<iostream>
#include<locale.h>>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int pl;
    float ps,ppl;
    cout<<"informe o peso aqui na terra: ";
    cin>> ps;
    cout<<"informe o planta: 1=mercúrio, 2=venus, 3=marte, 4=jupiter, 5=saturno e 6=urano";
    cin>> pl;

        switch(pl)
    {
    case 1:
        ppl = ((ps / 10) * 0.37);
        cout<< ppl <<" é o peso em mercurio ";
        break;
    case 2:
        ppl = (ps / 10) * 0.88;
        cout<< ppl <<"é o peso em venus ";

        break;
    case 3:
        ppl = (ps / 10) * 0.38;
        cout<< ppl <<"é o peso em marte ";
        break;
    case 4:
        ppl = (ps / 10) * 2.64;
        cout<< ppl <<"é o peso em jupiter ";
        break;
    case 5:
        ppl = (ps / 10) * 1.16;
        cout<< ppl <<"é o peso em saturno ";
        break;
    case 6:
        ppl = (ps / 10) * 1.17;
        cout<< ppl <<"é o peso em urano ";
        break;
    default:
        cout<<"placa invalida";
    }
}

