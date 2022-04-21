#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>

using namespace std;
void leitura (int *p, int *ptam);
int maior_valor (int *pa, int *ptam);

main()
{
    int l, c;
    cout << "Informe o numero de linhas: ";
    cin >> l;
    fflush(stdin);

    cout << "Informe o numero de colunas: ";
    cin >> c;
    fflush(stdin);

    int *pmat = new int[l * c];
    srand(time(NULL));

    for(int i = 0; i < (l * c); i++)
    {
        pmat[i] = rand() % 100;
    }


    int cont = 0;
    for(int i = 0; i < (l * c); i++)
    {
        cout << pmat[i] << "\t";
        cont++;
        if(cont == c)
        {
            cout << "\n";
            cont = 0;
        }
    }

    cout << "\n\nElementos na diagonal principal: " << endl;
    cont = 0;
    for(int i = 0; i < (l * c); i++)
    {
        if(cont == 0)
        {
            cout << pmat[i] << "\t";
            cont++;
        }
        else
           cont++;

        if(cont == c + 1)
           cont = 0;
    }


    delete pmat; //desalocar o espaço em memória
}



