#include<iostream>
#include<ctime>
using namespace std;
void geravetor(int v[10]);
void invertevetor(int v[10]);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int vet[10];
    geravetor(vet);
    invertevetor(vet);

}
void geravetor(int v[10])
{
    srand(time(NULL));
    for(int i = 0; i<10; i++)
    {
        v[i] = rand() % 50;
    }
    cout<<"Vetor gerado com sucesso!"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"Vetor em sua forma original"<<endl;
    for(int i = 0; i<10; i++)
    {
        cout<<v[i]<<"\t";
    }
}
void invertevetor(int v[10])
{
    int aux[10];
    for(int i = 0; i<10; i++)
    {
        aux[i] = v[i];
    }
    cout<<"Vetor invertido"<<endl;
    for(int j = 10;j<0;j--){
       v[j]= aux[j];
       cout<<v[j]<<"\t";
    }

}
