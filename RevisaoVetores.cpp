///vetores são posições de memória identificadas por um
///mesmo nome, individualizadas por índices e cujo conteúdo é do
///mesmo tipo
#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    cout<<(" - Revisão de Vetores - ") << endl;
    ///Tipos
    int vetor[5] = {0, 2, 5, 3, 9};
    double notas[5] = {0.0, 10.0, 7.5, 8.5, 9.9};
    char palavra[20];
    ///Percorrendo um vetor
    cout<<("Percorrendo o vetor") << endl;
    for(int i =0;i <= 4;i++){
        cout<<notas[i]<<endl;
    }

}
