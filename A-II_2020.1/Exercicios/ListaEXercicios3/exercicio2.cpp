#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
void geravetor(int v[]);
void mostravetor(int v[]);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int v[50];
    geravetor(v);
    mostravetor(v);
}
void geravetor(int v[]){
    for(int i = 1;i < 51;i++){
        v[i] = (i + 5 * i)% i + 1;
    }
}
void mostravetor(int v[]){
    for(int i = 1;i < 51;i++){
        cout<< v[i] << endl;
    }
}
