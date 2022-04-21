#include<iostream>
#include<cstdlib>
#include<time.h>
#include<cstdio>
#include<cstring>
using namespace std;
void gerar_valores(int *vet);
void soma_vetor(int *vet);
void maior_menor(int *vet);
void checar_valor(int *vet);
main()
{
    setlocale(LC_ALL,"portuguese");
    int op, vetor[10],control = -1;

    while (op != 0)
    {
        cout<<endl;
        cout<<"---- Menu de A��es -------" << endl;
        cout<<" 0 - Sair: " << endl;
        cout<<" 1 - Gerar Valores: " << endl;
        cout<<" 2 - Soma de Valores: " << endl;
        cout<<" 3 - Maior / Menor Valor do Vetor: " << endl;
        cout<<" 4 - Checar Valor: " << endl;
        cout<<"---------------------------------------" << endl;
        cout<<"Escolha uma op��o : " << endl;
        cin>>op;
        fflush(stdin);
        switch(op)
        {
        case 1 :
            control += 1;
            gerar_valores(vetor);
            break;
        case 2 :
            if (control >= 0){
                soma_vetor(vetor);
            }
            else{
                cout<<"Voc� deve gerar valores para o vetor antes de realizar a a��o ! ";
            }

            break;
        case 3 :
            if (control >= 0){
                maior_menor(vetor);
            }
            else{
                cout<< "Voc� deve gerar valores para o vetor antes de realizar a a��o ! ";
            }
            break;
        case 4 :
            if (control >= 0){
                checar_valor(vetor);
            }
            else{
                cout<<"Voc� deve gerar valores para o vetor antes de realizar a a��o ! ";
            }
            break;
        default:
            cout<<"Op��o inv�lida!" << endl;
            break;
        }
        cout<<endl;
    }
}
void gerar_valores( int *vet)
{
    srand (time(NULL));
    cout<<"\n\n";
    cout<< "-------VETOR GERADO--------" << endl;
    for ( int x = 0; x < 10; x ++)
    {
        vet[x] = rand() % 50;
    }
    for ( int c = 0; c < 10; c ++)
    {
        if ( c == 0 )
        {
            cout <<  vet[c];
        }
        else
        {
            cout << ", " <<  vet[c];
        }
    }
    cout<<endl;
}
void maior_menor(int *vet)
{
    int maior, menor;
    maior = vet[0];
    menor = vet[0];
    for ( int x = 0; x < 10; x ++)
    {
        if (vet[x] > maior)
        {
            maior = vet[x];
        }
        if (vet[x] < menor){
            menor = vet[x];
        }
    }
    cout<<"Maior Numero do Vetor => " << maior <<endl;
    cout<<"Menor Numero do Vetor => " << menor << endl;
}
void soma_vetor( int *vet)
{
    int res=0;
    for ( int x = 0; x < 10; x ++)
    {
        res += vet[x];
    }
    cout<<"Soma de todos valores do Vetor => " << res;
    cout<<endl;
}
void checar_valor( int *vet)
{
    int v, o=0;
    cout<<"Qual o valor que voc� deseja buscar no Vetor : " << endl;
    cin>>v;
    for ( int x = 0; x < 10; x ++)
    {
        if (vet[x] == v){
            o++;
        }
    }
    if ( o > 0 ){
        cout<<"O N�mero " << v << " foi encontrado " << o << " vez(es) no Vetor" << endl;
    }
    else{
        cout<<"O N�mero " << v << " n�o foi encontrado no Vetor" << endl;
    }
    cout<<endl;
}
