#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,y;
    cout<<"informe o primeiro número: ";
    cin>> x;
    cout<<"informe o segundo número: ";
    cin>> y;

    if(x%y==0)
        cout<<"o número x é divisivel por y.";
    else
        cout<<"o número x não é divisivel por y.";




}

