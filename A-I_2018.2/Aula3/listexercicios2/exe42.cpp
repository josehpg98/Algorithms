#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int s, rs, ct;
    char n;
    cout<<"informe o seu nome: ";
    cin>> n;
    cout<<"1-(A,C, F e H) 2-(B D,E,I e J) 3-(K e R) 4-(l,N,M,O,P e S) 5-(U,V,X,Z e W) ";
    cin>> ct;
    cout<<"informe seu sálario atual :";
    cin>> s;

    if(ct == '1')
        rs = (s * 10)/ 100;
    cout<< n <<" o seu salário reajustado será para: " << rs;
    else if(ct == '2')
        rs = (s * 15) / 100;
    cout<< n << " o seu salário será reajustado para: " << rs;
    else if(ct == '3')
        rs = (s * 25) / 100;
    cout<< n << "o seu salário sera reajustado para: " << rs;
    else if(ct == '4')
        rs = (s * 35)/ 100;
    cout<< n << "o seu salário sera reajustado para: " << rs;
    else if(ct == '5')
        rs = (s * 50)/ 100;
    cout<< n << "o seu salário sera reajustado para: " << rs;
    else
    cout<<"opção invalida! ";

}
