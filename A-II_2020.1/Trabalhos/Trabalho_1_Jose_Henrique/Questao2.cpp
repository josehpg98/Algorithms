#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void geravaloresmatriz(int m[][3]);
void mostravaloresmatriz(int m[][3]);
void verificaquadradomagico(int m[][3]);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[3][3];
    geravaloresmatriz(mat);
    mostravaloresmatriz(mat);
    verificaquadradomagico(mat);
}
void geravaloresmatriz(int m[][3])
{
    srand(time(NULL));
    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 3; c++)
        {
            m[l][c] = rand() % 11;
            if(m[l][c] == m[l - 1][c - 1])
            {
                m[l][c] = rand() % 11;
            }
        }
    }
    cout<<"Matriz gerada com sucesso!" << endl;
}
void mostravaloresmatriz(int m[][3])
{
    cout<<"Valores da matriz: " << endl;
    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 3; c++)
        {
            cout<< m[l][c] << "\t";
        }
        cout<<"\n";
    }
}
void verificaquadradomagico(int m[][3])
{
    int somadp = 0,somads = 0,sl1 = 0,sl2 = 0,sl3 = 0, sc1 = 0, sc2 = 0, sc3 = 0,sc = 0, sl = 0, sdt = 0;
    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 3; c++)
        {
            if(l == c)
            {
                somadp = somadp + m[l][c];
            }
            if(l + c == 3 - 1)
            {
                somads = somads + m[l][c];
            }
            sl1 = m[0][0] + m[0][1] + m[0][2];
            sl2 = m[1][0] + m[1][1] + m[1][2];
            sl3 = m[2][0] + m[2][1] + m[2][2];
            sc1 = m[0][0] + m[1][0] + m[2][0];
            sc2 = m[0][1] + m[1][1] + m[2][1];
            sc3 = m[0][2] + m[1][2] + m[2][2];
            sc = (sc1 + sc2 + sc3) / 3;
            sl = (sl1 + sl2 + sl3) / 3;
            sdt = (somadp + somads) / 2;


        }

    }
     if(sc == sl && sdt == sl && sdt == sc)
        {
            cout<<"a matriz é um quadrado mágico!" << endl;
        }
        else
        {
            cout<<"a matriz não é um quadrado mágico!" << endl;
        }

}
