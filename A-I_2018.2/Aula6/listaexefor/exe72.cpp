#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x;

    cout<<"digite um número qualquer para a tabuada: ";
    cin>> x;
    if(x > 0 && x <= 10)
    {
       for(int cont=1;cont<=10;cont++)
        cout<< x << " x " << cont << " = "<<x*cont<< "\n";
    }
    else
    {
        cout<<"opção inválida!";
    }


}
