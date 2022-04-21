#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int s, r;
    char c;
    cout<<"INFORME SEU SALÁRIO: ";
    cin>> s;
    cout<<"informe oseu cargo na empresa: ( g- gerente e- engenheiro t-técnico o-outros) ";
    cin>> c;

    if (c == 'g')
    {
        r = ((s * 10) / 100) + s;
    cout<<"o seu salário reajustado será:" << r;
    }
    else if (c == 'e')
    {
        r = ((s * 20) / 100) + s;
    cout<<"o seu salário reajustado será:" << r;
    }
    else if (c == 't')
    {
        r = ((s * 30) / 100) + s;
    cout<<"o seu salário reajustado será:" << r;
    }
    else if(c == 'o')
    {
        r = ((s * 40)/ 100)+ s;
    cout<<"o seu salário reajustado será:"  << r;
    }


}
