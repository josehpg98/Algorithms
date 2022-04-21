#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
void mostravetor(int v[10]);
int calculafatorial(int num);
main()
{
    setlocale(LC_ALL,"Portuquese");
    srand(time(NULL));
    int v,vet[10];

    for(int i = 0;i<10;i++){
     vet[i] = rand() % 50;
    }
    mostravetor(vet);

    for(int i =0;i<=10;i++){
        v[i] = calculafatorial(vet);
        cout<<"o fatorial de: " << v[i] << " é " << vet;
    }

}

void mostravetor(int v[10]){
    int i;
    for(i = 0;i<10;i++){
        cout<< " valor " << i << " é: " << v[i] << " " << endl;
    }
    cout << endl;
}

int calculafatorial(int num)
{
    int f = 1;
    for(int i = 1; i <= num; i++)
    {
        f = f * i;

    }

    return f;
}








