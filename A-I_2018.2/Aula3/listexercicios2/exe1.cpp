#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int val, met;
    cout<<"informe um número: ";
    cin>> val;
    met = val / 2;

    if(met > 50)
        cout<<"a metade do número maior que 50 é: " << met;
        else
            cout<<"a metade do número informado é menor que 50 é: " << met;

}
