#include<iostream>
#include<cstdlib>
#include<time.h>
#include<cstdio>
#include<cstring>
using namespace std;
void geravetor(int *v);
void somavet(int *v);
void maioremenor(int *v);
void buscarvalor(int *v);
main()
{
    setlocale(LC_ALL,"portuguese");
    int op, vt[10];
    bool verifica = false;
    while (op != 0)
    {
        cout << "---------------Menu de Op��es ------------------" << endl;
        cout << " 0 - Sair " << endl;
        cout << " 1 - Gerar Valores " << endl;
        cout << " 2 - Soma de Valores " << endl;
        cout << " 3 - Maior e  Menor Valor do Vetor " << endl;
        cout << " 4 - buscar Valor " << endl;
        cout <<"---------------------------------------------" << endl;
        cout<<"Digite uma op��o : ";
        cin>>op;
        fflush(stdin);
        switch(op)
        {
        case 1 :
            verifica = true;
            geravetor(vt);
            break;
        case 2 :
            if(verifica == true){
                somavet(vt);
            }
            else{
                cout << endl << "Voc� deve gerar valores para o vetor antes de realizar a a��o ! ";
            }

            break;
        case 3 :
            if(verifica == true){
                maioremenor(vt);
            }
            else{
                cout<<"Voc� deve gerar valores para o vetor antes de realizar a a��o!" << endl;
            }
            break;
        case 4 :
            if(verifica == true){
                buscarvalor(vt);
            }
            else{
                cout<< "Voc� deve gerar valores para o vetor antes de realizar a a��o ! " << endl;
            }
            break;
        }
    cout<<"\n";
    }
}
void geravetor(int *v)
{
    srand(time(NULL));
    cout<<"Vetor gerado com sucesso! " << endl;
    for ( int x = 0; x < 10; x ++)
    {
        v[x] = rand() % 50;
    }
    for ( int c = 0; c < 10; c ++)
    {
        if ( c == 0 )
        {
            cout <<  v[c];
        }
        else
        {
            cout << ", " <<  v[c];
        }
    }
}
void maioremenor( int *v)
{
    int maior, menor;
    maior = v[0];
    menor = v[0];
    for ( int x = 0; x < 10; x ++)
    {
        if (v[x] > maior)
        {
            maior = v[x];
        }
        if (v[x] < menor){
            menor = v[x];
        }
    }
    cout<<"Maior Numero do Vetor: " << maior;
    cout<<"Menor Numero do Vetor: " << menor;
}
void somavet( int *v)
{
    int r = 0;
    for ( int x = 0; x < 10; x ++)
    {
        r += v[x];
    }
    cout<<"Soma de todos valores do Vetor => " << r;
}
void buscarvalor( int *v)
{
    int val, cont = 0;
    cout<<"Qual o valor deseja buscar no Vetor : ";
    cin>>val;
    for ( int x = 0; x < 10; x ++)
    {
        if (v[x] == val){
            cont++;
        }
    }
    if ( cont > 0 ){
        cout<<"O N�mero " << v << " foi encontrado " << cont << " vezes no Vetor";
    }
    else{
        cout<<"O N�mero " << val << " n�o foi encontrado no Vetor";
    }
}
