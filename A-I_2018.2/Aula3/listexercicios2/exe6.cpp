#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,y;
    cout<<"informe o primeiro n�mero: ";
    cin>> x;
    cout<<"informe o segundo n�mero: ";
    cin>> y;

    if(x%y==0)
        cout<<"o n�mero x � divisivel por y.";
    else
        cout<<"o n�mero x n�o � divisivel por y.";




}

