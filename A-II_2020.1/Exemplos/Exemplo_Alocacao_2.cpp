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
    int tam;
    cout << "Informe o tamanho do vetor: ";
    cin >> tam;
    fflush(stdin);

    int *pv = new int[tam];
    srand(time(NULL));

    leitura(pv, &tam);
    //system("cls");
    for(int i = 0; i < tam; i++)
    {
        cout << pv[i] << "\t";
    }

    cout << "\n\nMaior valor: " << maior_valor(pv, &tam);
    delete pv; //desalocar o espaço em memória
}

void leitura (int *p, int *ptam)
{
    for(int i = 0; i < *ptam; i++)
    {
        p[i] = rand() % 50;
    }
}

int maior_valor (int *pa, int *ptam)
{
    int *aux = new int(pa[0]);

    for(int i = 1; i < *ptam; i++)
    {
        if(pa[i] > *aux)
            *aux = pa[i];
    }
    return *aux;
}

