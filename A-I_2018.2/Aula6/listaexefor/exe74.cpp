#include<iostream>
#include<clocale>
#include <cstdio>
#include <cstdlib>

using namespace std;
main()

{
    setlocale(LC_ALL, "portuguese");


    int mdc, i, j, n1, n2, maior;
    bool aux;

    cout << "Informe o primeiro n�mero: ";
    cin >> n1;

    cout << "\nInforme o segundo n�mero: ";
    cin >> n2;

    if(n1 > n2)
        maior = n1;
    else
        maior = n2;

    mdc=0;

    for (i = 2; i <= maior; i++)
    {
        j = i;

        while(n1%j==0 || n2%j==0)
        {
            aux = true;
            cout << n1 << "\t" << n2 << "\t | " << j << endl;

            if(n1%j==0)
                n1 = n1/j;
            if(n2%j==0)
                n2 = n2/j;
            if(aux == true)
            {

                if(mdc==0)
                    mdc = j;
                else
                    mdc = mdc * j;

                aux = false;

            }

        }
    }


    cout << "MDC: " << mdc << endl;

}



