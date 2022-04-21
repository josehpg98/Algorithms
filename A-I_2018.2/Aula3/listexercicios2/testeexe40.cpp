#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;
    float med;
    cout<<"informe  a primeira nota: ";
    cin>> n1;
    cout<<"informe a segunda nota: ";
    cin>> n2;
    cout<<"informe a terceira nota: ";
    cin>> n3;

    med = (n1 + n2 + n3)/3;


        cout<<"sua nota e conceito" << med;

}
