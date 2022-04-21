#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void geravetor(int v1[]);
void mostravetor(int v[]);
main()
{
   int vet[10];
    geravetor(vet);
    mostravetor(vet);
}
void geravetor(int v1[]){
    srand(time(NULL));
    int x;
    for(x = 0;x < 10;x++){
        v1[x] = rand() % 50;
    }
}
void mostravetor(int v[]){
    int x;
        for(x = 0;x < 10;x++){
        cout << v[x] << " ;";
    }
}
