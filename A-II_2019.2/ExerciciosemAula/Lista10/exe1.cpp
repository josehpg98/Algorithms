#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cstdlib>
using namespace std;
void geravalor(int *v);
void trocavalor(int *v);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int *v = new int[0];//ponteiro para vetor alocado dinâmicamente
   geravalor(v);//chama a função com o parametro
   trocavalor(v);// ------

}
void geravalor(int *v){
    srand(time(NULL));
    for (int i =0; i < 10; i++)
    {
        v[i] = rand () % 19;// v na posição i recebe um valor randomico
        for (int x=0; x < i; x++)//for de x percorrendo até menor que x para comparação
        {
            while (v[i] == v[x])//caso forem ifuais
            {
                i--;//o i decrementa e sera gerado um novo valor randomico
            }
        }
    }
    cout<<"-------------------------" << endl;;
    cout <<"Valores do vetor: " << endl;
    for (int i=0; i < 10; i++)//laço para mostrar o vetor
    {
        cout << v[i] << endl;
    }
    cout << endl;
}
void trocavalor(int *v)
{
    int aux;
    int j=9;//variavel para decrementar o vetor
    for (int i=0; i < 5; i++)// forate a metade do vetor
    {
        aux = v[i];//auxiliar receber o valor de v na pos. i
        v[i] = v[j];//caso sejam iguais
        v[j] = aux;//v na pos. j recebe auxiliar
        j--;// j decrementa
    }
    cout<<"\n";
    cout <<"Valores do vetor trocados: " << endl;
    for (int i=0; i < 10; i++)//laço para mostrar valores
    {
        cout << v[i] << endl;
    }
    cout<<"\n";
}


