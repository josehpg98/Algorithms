#include <iostream>
//#include <string>// Necessário para usar strings
using namespace std;
char verificanumeroprimo(int num);
main()
{
    int n;
    char res;
    cout << " informe um numero inteiro: " << endl;
    cin >> n;
    res = verificanumeroprimo(n);
    cout << res << endl;
}
char verificanumeroprimo(int num)
{
    char rt;
    int r = 0;
    for (int i = 2; i <= num / 2; i++)
    //esse for é para realizar divisões sucessivas a partir do número 2 até o próprio número
    {
        if (num % i == 0)
        //se o resto for zero, houve divisão por número diferente de 1
        {
            r++;
            break;
        }
    }

    if (r == 0)//dai o nmero é primo
        rt = 'V';
    else
    {//senão não!
        rt = 'F';
    }
    return rt;
}