#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstdio>
using namespace std;
void geravetor(int *x1,int *x2,int *t1,int *t2)
{
    cout<<" função gera vetor x1 e x2! " << endl;
    srand(time(NULL));
    cout<<" gera vetor x1: " <<endl;
    for(int i = 0; i < *t1; i++)
    {
        x1[i] = rand() % 50;
        cout<<x1[i]<<" , ";
    }
    cout<<"\n\n";
    cout<<" gera vetor x2: " <<endl;
    for(int j = 0; j <*t2; j++)
    {
        x2[j] = rand() % 50;
        cout<<x2[j]<<" , ";
    }
    cout<<"\n\n";
}
void vetor3(int *x1,int *x2,int *x3,int *t1,int *t2,int *t3)
{
    int i = 0;
    for(int j = 0; j < *t3 ; j+=2)
    {
        x3[j] = x1[i];
        x3[j + 1] = x2[i];
        i++;
    }
    cout<<endl;
    cout<<"vetor x3: " << endl;
    for(int m = 0; m <*t3; m++)
    {
        cout<<x3[m]<<" , ";
    }
    cout<<endl;
    cout<<"vetor x3 mostrando somente os números pares: " << endl;
    for(int m = 0; m <*t3; m++)
    {
        if(x3[m] % 2 == 0)
        {
            cout<<x3[m]<<" , ";
        }
    }
    cout<<endl;
    cout<<"vetor x3 mostrando somente os números impares: " << endl;
    for(int m = 0; m <*t3; m++)
    {
        if(x3[m] % 2 != 0)
        {
            cout<<x3[m]<<" , ";
        }
    }
    cout<<endl;
    cout<<"vetor x3 com soma de valore: " << endl;
    int soma;
    for(int m = 0; m <*t3; m++)
    {
        soma += x3[m];
    }
    cout<<"Soma de valores vetor x3: " << soma << endl;
    //cout<<endl;
    int auxiliar;
    //cout<<"vetor x3 em ordem crescente: " << endl;
    for(int m = 0; m <*t3; m++)
    {
        for(int i = 0; i < *t3; i++)
        {
            if (x3[m] < x3[i])
            {
                auxiliar = x3[m];
                x3[m] = x3[i];
                x3[i] = auxiliar;
            }
        }
    }
    cout<<endl;
    cout<<"vetor x3 ordenado em forma crescente: " << endl;
    for(int m = 0; m < *t3; m++)
    {
        cout<<x3[m]<<" , ";
    }
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int tam1,tam2;
    cout<<"Informe o tamanho do vetor 1: " << endl;
    cin>>tam1;
    fflush(stdin);
    cout<<"Informe o tamanho do vetor 2: " << endl;
    cin>>tam2;
    fflush(stdin);
    int tam3 = tam1 + tam2;
    int *x1 = new int[tam1];
    int *x2 = new int[tam2];
    int *x3 = new int[tam3];
    geravetor(x1,x2,&tam1,&tam2);
    vetor3(x1,x2,x3,&tam1,&tam2,&tam3);
}
