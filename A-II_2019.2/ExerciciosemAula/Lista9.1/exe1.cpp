#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<ctime>
void gera_valores_vetor( int *v);
void mostra_valores(int *v);
void mostra_pares(int *v);
void mostra_impares(int *v);
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int esc;
    int *vetor = new int[10];
    bool valid;
    while(esc != 0)
    {
        cout<<" -----------------------Menu de Ações-----------------" << endl;
        cout<<" 0 - sair" << endl;
        cout<<" 1 - gerar valores para o vetor" << endl;
        cout<<" 2 - mostrar valores para o vetor" << endl;
        cout<<" 3 - mostrar os números pares do vetor" << endl;
        cout<<" 4 - mostrar os mnúmeros impares do vetor" << endl;
        cout<<" informe sua escolha: " << endl;
        cin>>esc;
        fflush(stdin);
        cout<<" ----------------------------------------------------" << endl;
        switch(esc)
        {
        case 0:
            cout<<" Processo encerrado!" << endl;
            break;
        case 1:
            valid = true;
            gera_valores_vetor(vetor);
            break;
        case 2:
            if(valid == true)
            {
                mostra_valores(vetor);
            }
            else
            {
                cout<<"primeiramente gerar os valores do vetor! " << endl;
            }
            break;
        case 3:
            valid = true;
            mostra_pares(vetor);
            break;
        case 4:
            valid = true;
            mostra_impares(vetor);
        }

    }
}
void gera_valores_vetor(int *v)
{
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        v[i] = rand() % 100;
        //cout<<" valores vet 1" << endl;
        //cout<< v[i] << endl;
    }
    cout<<"vetor gerado com sucesso! " << endl;
}
void mostra_valores(int *v)
{
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        cout<< v[i] << endl;
    }
}
void mostra_pares(int *v)
{
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        if((v[i] % 2) == 0)
        {
            cout<< v[i] << endl;
        }
    }
}
void mostra_impares(int *v)
{
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        if((v[i] % 2) == 1)
        {
            cout<< v[i] << endl;
        }
    }
}
