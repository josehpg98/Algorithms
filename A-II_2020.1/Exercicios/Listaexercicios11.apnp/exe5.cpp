#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int op,contole = -1,contador;
    int l,c;
    float media,soma,maior,menor;
    do{
    cout<<"Informe o número de linhas: " <<endl;
    cin>>l;
    fflush(stdin);
    cout<<"Informe o número de colunas: " <<endl;
    cin>>c;
    fflush(stdin);
    }while(l <= 1 && c <= 1);
    float *mat = new float[l * c];
    cout<<"Matriz Preenchida com Valores Randômicos do Tipo Float!" << endl;
    srand(time(NULL));
    for(int ic = 0; ic < (l * c);ic++)
    {
         mat[ic] = rand() % 50 * 2,2;
         soma += mat[ic];
    }
    cout<<endl;
    cout<<"Mostra a Matriz!"<< endl;
    for(int i = 0; i < (l * c); i++)
    {
        cout<<mat[i]<<"\t";
        contador++;
        if(contador == c)
        {
            cout<<endl;
            contador = 0;
        }
    }
    cout<<"------------------------------" << endl;
    for(int j = 0;j < (l * c);j++){
        if(j == 0){
         maior = mat[j];
         menor = mat[j];
        }
          if(maior < mat[j]){
            maior = mat[j];
        }
        if(menor > mat[j]){
            menor = mat[j];
        }
    }
    cout<<"Maior Elemento da Matriz: " << maior <<endl;
    cout<<"Menor Elemento da Matriz: " << menor <<endl;
    cout<<endl;
    cout<<"Soma Elementos da Matriz: " << soma <<endl;
    l = l * c;
    media = (soma / l);
    cout<<"Media dos Elementos da Matriz: " << media <<endl;
    delete mat;
}
