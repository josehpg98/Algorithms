#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ni = 0,i = 0,result = 0;
    cout << "informe um n�mero inteiro qualquer: " << endl;
    cin >> ni;
    for (i = 2; i <= ni / 2; i++)//divide o numero apartir do 2 até metade dele próprio
    {
        if (ni % i == 0)//se o resto da divisao for igual a zero
        {
            result++;//incrementa mais um
            break;
        }
    }

    if (result == 0)//se o incremneto estiver em zero
        cout<<" o número " << ni << " é primo! ";
    else
        cout<<" o número primo: " << ni << " não é primo!";
}
