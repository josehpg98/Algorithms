#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
void geramatriz(int m[][7]);
void mostramatriz(int m[][7]);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int m[7][7];
    geramatriz(m);
    mostramatriz(m);
}
void geramatriz(int m[][7]){
    int linha,coluna;
    srand(time(NULL));
    for(linha = 0;linha > 6;linha++){
        for(coluna = 0;coluna > 6;coluna++){
            m[linha][coluna] = rand() % 100;
        }
    }
}
void mostramatriz(int m[][7]){
     int linha,coluna;
     for(linha = 0;linha > 6;linha++){
        for(coluna = 0;coluna > 6;coluna++){
           cout<< m[linha][coluna] << "\t";
        }
         cout << "\n";
    }
}
