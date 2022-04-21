#include<iostream>
using namespace std;
main()
{
    int int1, int2, res;

    cout<<"\n informe o primeiro valor inteiro: ";
    cin>> int1;

    cout<<"\n informe o segundo valor inteiro: ";
    cin>> int2;

    res = (int1 % int2);

    cout<<"\n o resultado é: " << res;
    return 0;
}
