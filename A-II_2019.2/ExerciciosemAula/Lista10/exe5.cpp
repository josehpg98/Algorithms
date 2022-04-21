#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cstdlib>
using namespace std;
void gerarvaloresvetor(int *vet);
void mostrarvaloresvetor(int *vet);
void multiplicavetor(int *vet);
void mostrarvetoresultante(int *vet);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int *vetor = new int[10];
    gerarvaloresvetor(vetor);
    mostrarvaloresvetor(vetor);
    multiplicavetor(vetor);
    mostrarvetoresultante(vetor);
}
void gerarvaloresvetor(int *vet){
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        vet[i] = rand() % 50;
    }
    cout<<"vetor gerado com sucesso! " << endl;
}
void mostrarvaloresvetor(int *vet)
{
    //srand(time(NULL));
    cout<<" ----------------------------------------- " <<endl;
    cout<<" valores do vetor mostrados na tela: " <<endl;
    for(int i = 0; i < 10; i++)
    {
        cout<< vet[i] << endl;
    }

}
void multiplicavetor(int *vet){
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        vet[i] = vet[i] * 2;
    }
    //cout<<"vetor multiplicado com sucesso! " << endl;
}
void mostrarvetoresultante(int *vet)
{
    //srand(time(NULL));
    cout<<" ----------------------------------------- " <<endl;
    cout<<" valores do vetor multiplicado mostrados na tela: " <<endl;
    for(int i = 0; i < 10; i++)
    {
        cout<< vet[i] << endl;
    }

}
