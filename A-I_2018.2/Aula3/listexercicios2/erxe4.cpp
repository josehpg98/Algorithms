#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1, res;
    cout<<"informe um n�mero qualquer: ";
    cin>> n1;

    res=(n1%2);
    if(res == 1)
        cout<<"o n�mero � impar. ";
        else
        cout<<"o n�mero � par. ";

}
