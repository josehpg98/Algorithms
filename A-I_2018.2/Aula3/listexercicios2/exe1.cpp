#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int val, met;
    cout<<"informe um n�mero: ";
    cin>> val;
    met = val / 2;

    if(met > 50)
        cout<<"a metade do n�mero maior que 50 �: " << met;
        else
            cout<<"a metade do n�mero informado � menor que 50 �: " << met;

}
