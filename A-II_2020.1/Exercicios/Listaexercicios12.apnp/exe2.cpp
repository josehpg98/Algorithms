#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void gera_valores(int *vet){
    cout<<"Função gera valores vetor! " << endl;
    srand(time(NULL));
    int i = 0;
    while(i < 10){
        vet[i] = rand() % 50;
        cout<<vet[i]<<endl;
        i++;
    }
    cout<<"vetor getado com sucesso! " << endl;
}
void verifica(int *vet, int v){
    cout<<"Função verifica valor existente no vetor!" << endl;
    int ic = 0;
    while(ic < 10){
        if(vet[ic] == v){
            cout<<" O valor " << v << " se encontra no vetor, na posição " << ic << endl;
        }else{
            cout<<"O valor não se encotra no vetor! " << endl;
        }
        ic++;
        vet[ic];
    }
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int *v = new int[10];
    int *valor;
    gera_valores(v);
    cout<<"Iinforme um valor para verificar no vetor: " << endl;
    cin>>*valor;
    verifica(v,*valor);
}
