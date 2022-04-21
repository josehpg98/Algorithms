#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

main ()
{

    int n[5] = {8,3,5,12,3};
    int aux;
    srand(time(NULL));

    /*for (int i=0; i < 5; i++)
    {
        n[i] = rand () % 50;
        cout <<"Valores gerados: " << n[i] << endl;
    }*/

    for (int i=0; i < 5; i++)
    {
        int temp;
        for (int j=0; j < 4; j++)
        {
            if (n[i] < n[j]) //SE O valor do INDICE "i" for menor do que o valor do indice j
            {
                temp = n[j];
                n[j] = n[i];
                n[i] =temp;

            }

        }
    }

    for (int i=0; i < 5; i ++)
    {
        cout <<"Vetor ordenado: " << n[i] <<endl;
    }

}
