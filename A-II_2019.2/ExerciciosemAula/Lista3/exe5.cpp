#include <iostream>
#include <stdlib.h> // necessário p/ as funções rand() e srand()
#include <time.h>   //necessário p/ função time()
using namespace std;
int somavetor(int n[5]);
main()
{
    int v[5], retorno = 0;
    retorno = somavetor(v);
    cout << retorno << endl;
}
int somavetor(int n[5])
{
    srand(time(NULL));
    int s = 0, c = 0;
    for (int i = 0; i <= 5; i++)
    {
        n[i] = rand() % 100;
        for (int i = 2; i <= n[i] / 2; i++)
        //esse for é para  divisões sucessivas 
        //a partir do número 2 até o próprio número
        {
            if (n[i] % i == 0)
            //se o resto for zero, houve 
            //divisão por número diferente de 1
            {
                c = c + 1;
                 if (c == 0) //dai o numero é primo
                    {
                        s = s + n[i];
                        return s;
                    } 
                break;
            }
        }

         
        
    }
    //return s;
}
