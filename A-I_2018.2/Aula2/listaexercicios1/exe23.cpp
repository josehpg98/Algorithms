#include<iostream>
using namespace std;
main()
{
    int dep, res, resdep;
    float tx;
    cout<<"informe o valor do dep�sito: ";
    cin>> dep;
    cout<<"informe a porcentagem da taxa de juros: ";
    cin>> tx;

    res = (dep * tx)/ 100;
    resdep = dep + res;
    cout<<"o rendimento total do dep�sito �: " << resdep;
}
