#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void gera_valores(int *vet){
    int aux;
     srand(time(NULL));
    cout<<" Você Está na fução Gera Valores! " << endl;
    for(int i = 0; i <= 9;i++)
    {
        vet[i] = rand() % 50;
        //cout<<vet[i] << " , ";
        aux = i - 1;
        if(i > 0){
            if(vet[i] == vet[aux]){
                i--;
            }
        }
    }
    //delete vet;
    cout<<endl;
    cout<<" Vetor gerado com sucesso! " << endl;
}
void mostra_vetor(int *v){
        cout<<" Você Está na fução Mostra Valores! " << endl;
        for(int i = 0; i <= 9; i++)
        {
            cout<<v[i] << " , ";
        }
        cout<<endl;
}
void mostra_vetor_par(int *v){
        cout<<" Você Está na fução Mostra Valores pares! " << endl;
        for(int i = 0; i <= 9; i++)
        {
            if(v[i] % 2 == 0){
            cout<<v[i] << " , ";
            }
        }
        cout<<endl;
}
void mostra_vetor_impar(int *v){
        cout<<" Você Está na fução Mostra Valores impares! " << endl;
        for(int i = 0; i <= 9; i++)
        {
            if(v[i] % 2 != 0){
            cout<<v[i] << " , ";
            }
        }
        cout<<endl;
}
main()
{
        setlocale(LC_ALL,"Portuguese");
        int opcao, controle_menu = -1;
        int *pvet = new int[10];
        do
        {
            cout<<" - - - Menu de Ações - - - " << endl;
            cout<<" 0 - Sair " << endl;
            cout<<" 1 - Gerar Valores Para O Vetor (Sem Repetição) " << endl;
            cout<<" 2 - Mostrar os valores do Vetor " << endl;
            cout<<" 3 - Mostrar os valores Pares do Vetor " << endl;
            cout<<" 4 - Mostrar os valores Impares do Vetor " << endl;
            cout<<" Escolha Sua Opção " << endl;
            cin>>opcao;
            fflush(stdin);
            switch(opcao)
            {
            case 0:
                cout<<" O prgrama foi finalizado com sucesso! " << endl;
                break;
                getchar();
            case 1:
                controle_menu += 1;
                gera_valores(pvet);
                break;
            case 2:
                if(controle_menu < 0)
                {
                    cout<<"Primeiro gere o vetor! " << endl;
                    break;
                    getchar();
                }
                else
                {
                    mostra_vetor(pvet);
                    break;
                    getchar();
                }
            case 3:
                  if(controle_menu < 0)
                {
                    cout<<"Primeiro gere o vetor! " << endl;
                    break;
                    getchar();
                }
                else
                {
                    mostra_vetor_par(pvet);
                    break;
                    getchar();
                }
                 case 4:
                  if(controle_menu < 0)
                {
                    cout<<"Primeiro gere o vetor! " << endl;
                    break;
                    getchar();
                }
                else
                {
                    mostra_vetor_impar(pvet);
                    break;
                    getchar();
                }
            default:
                cout<<" Opção invalida! " << endl;
                break;
                getchar();
            }
        }
        while(opcao != 0);
}

