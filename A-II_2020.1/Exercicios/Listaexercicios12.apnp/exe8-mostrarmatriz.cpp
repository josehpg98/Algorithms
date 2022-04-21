/*
́4 – Faça um programa que receba como entrada o número de linhas e colunas que
uma matriz deve ter, em seguida receba quantas posições serão zeradas e o endereço
(linha, coluna) das posições zeradas, na sequência o sistema deverá gerar uma matriz
obedecendo os requisitos lidos e as demais posições preencher com 1 e escrever está
matriz em um arquivo texto chamado “matriz.txt”.
Exemplo de entrada
3 3 //dimensão da matriz
2 //quantidade de posições zeradas
1 0 //linha e coluna da primeira posição zerada
1 2 //linha e coluna da segunda posição zerada
Matriz resultante
1 1 1
0 1 0
1 1 1
*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

struct matriz{
    int l;
    int c;
};

main(){
    int l,c;
    cout<<"Numero de linhas ";
    cin>>l;
    fflush(stdin);
    cout<<"Numero de colunas ";
    cin>>c;
    fflush(stdin);

    int q;
    cout<<"Numero de 0 ";
    cin>>q;
    fflush(stdin);

    matriz *m = new matriz[q];

    for(int i=0;i<q;i++){
        cout<<"linha "<<endl;
        cin>>m[i].l;
        fflush(stdin);
        cout<<"coluna "<<endl;
        cin>>m[i].c;
        fflush(stdin);
    }

    int ma[l][c];

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            ma[i][j]=1;
        }
    }

    for(int t = 0;t<q;t++){
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                if((m[t].l==i)&&(m[t].c==j)){
                    ma[i][j]=0;
                }
            }
        }
    }

    ofstream x;
    x.open("matriz.txt",ios::out);
    if(x.is_open())
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                x <<ma[i][j];
            }
            x <<"\n";
        }

    else
        cout<<"O arquivo nao foi aberto corretamente!";
    x.close();


}










