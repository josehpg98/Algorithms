#include<iostream>
#include<ctime>
using namespace std;
void geravetor(int vet[50]);
void mostravetor(int vet[50]);
void procuravalor(int vet[50],int v);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int v[50],op,valor = 0, itemenu = -1;
    bool repita;
    do
    {
        cout<<"----- Menu de Ações -----" << endl;
        cout<<" 0 - Sair; " << endl;
        cout<<" 1 - Gerar vetor com valores sem repetição; " << endl;
        cout<<" 2 - Mostrar vetor; " << endl;
        cout<<" 3 - Ler um número qualquer entre 1 e 100;; " << endl;
        cout<<" Escolha uma opção: " << endl;
        cin>>op;
        switch(op)
        {
        case 0:
            cout<<" O programa foi encerrado! " << endl;
            break;
        case 1:
            itemenu += 1;
            geravetor(v);
            break;
        case 2:
            if(itemenu < 0)
            {
                cout<<"Primeiro execute a opção 1, para gerar o vetor. " << endl;
            }
            else
            {
                mostravetor(v);
                break;
            }
        case 3:
            if(itemenu < 0)
            {
                cout<<"Primeiro execute a opção 1, para gerar o vetor. " << endl;
            }
            else
            {
                do
                {
                    cout<<"Informe o valor que deseja buscar no vetor entre 1 e 100: " << endl;
                    cin>>valor;
                    if(valor < 1 || valor > 100)
                    {
                        repita = true;
                    }
                    else
                    {
                        repita = false;
                    }
                }while(repita == true);
                procuravalor(v,valor);
                break;
            }
        }
    }while(op != 0);
}
void geravetor(int vet[50])
{
    //int verifica;
    srand(time(NULL));
    //do{
    for(int pv = 1; pv < 50; pv++)
    {
        vet[pv] = rand() % 100;
        //verifica = 0;
        for(int j = 0; j < pv; j++)
        {
            if(vet[pv] == vet[j])
            {
                --pv;
            }
        }
    }
    //}while(verifica);
    cout<<"Vetor gerado com sucesso! " << endl;
}
void mostravetor(int vet[50])
{
    for(int pv = 1; pv < 50; pv++)
    {
        cout<<vet[pv] <<endl;
    }
    cout<<endl;
    cout<<"Vetor mostrado com sucesso! " << endl;
}
void procuravalor(int vet[50],int v)
{
    for(int pv = 1; pv < 50; pv++)
    {
        if(vet[pv] == v)
        {
            cout<<"O valor existe na posição: " << pv <<endl;
            return;
        }//else if(v != vet[pv]){

        //}
    }
    cout<<"O valor não pertence ao vetor! " << endl;
}

