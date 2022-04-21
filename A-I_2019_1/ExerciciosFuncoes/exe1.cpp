#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
void mostravetor(int v[10]);
float calculamedia(int v[10]);
main()
{
    setlocale(LC_ALL,"Portuquese");
    srand(time(NULL));
    int vet[10];
    float med;
    for(int i = 0;i<10;i++){
     vet[i] = rand() % 50;
    }
    mostravetor(vet);

    med = calculamedia(vet);

    cout << " a média do vetor: " << med;

}

void mostravetor(int v[10]){
    int i;
    for(i = 0;i<10;i++){
        cout<< " valor " << i << " é: " << v[i] << " " << endl;
    }
    cout << endl;
}

float calculamedia(int v[10]){
    float r,s = 0;

    for(int i = 0; i<10;i++){
        s = s + v[i];

    }
    r = s / 10.0;
    return r;
}
