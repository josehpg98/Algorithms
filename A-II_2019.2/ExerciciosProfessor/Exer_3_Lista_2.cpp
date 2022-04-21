/*3  -  Crie  um  programa  que  leia  uma  matriz  M[5][5]  de  números
reais.  Mostrar  a  matriz  lida,
arredondar os números pares para cima e os ímpares para baixo.
Encontrar o maior elemento
de cada linha e passá-lo para a posição da diagonal principal
na linha e o elemento que estava
na diagonal principal para o local do número.
Mostrar a matriz modificada. */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
void leitura(float mat[][5]);
void mostra(float mat[][5]);
void arredondar_pares_impares(float mat[][5]);
void troca(float mat[][5]);

main()
{
   int menu = -1, flag = 0;
   float m[5][5];
   do
   {
       system("cls");
       cout << "######MENU DE OPCOES######" << endl;
       cout << "# 0 - Sair               #" << endl;
       cout << "# 1 - Gerar Matriz       #" << endl;
       cout << "# 2 - Mostrar Matriz     #" << endl;
       cout << "# 3 - Arredondar         #" << endl;
       cout << "# 4 - Troca              #" << endl;
       cout << "##########################" << endl;
       cout << "Sua escolha: ";
       cin >> menu;
       fflush(stdin);
       switch (menu)
       {
          case 0 :
             cout << "Programa finalizado com sucesso.";
             getchar();
             break;
          case 1 :
             leitura(m);
             flag = 1;
             cout << "Matriz gerada com sucesso.";
             getchar();
             break;
          case 2 :
             if(flag == 0)
             {
                 cout << "\nPrimeiro e necessario gerar a matriz.";
             }
             else
             {
                 system("cls");
                 cout << "\nElementos na Matriz: " << endl;
                 mostra(m);
             }
             getchar();
             break;
          case 3 :
             if(flag == 0)
             {
                 cout << "\nPrimeiro e necessario gerar a matriz.";
             }
             else
             {
                 system("cls");
                 cout << "\nMatriz original: " << endl;
                 mostra(m);
                 cout << "\nMatriz com valores arredondados: " << endl;
                 arredondar_pares_impares(m);
             }
             getchar();
             break;
          case 4 :
             if(flag == 0)
             {
                 cout << "\nPrimeiro e necessario gerar a matriz.";
             }
             else
             {
                 system("cls");
                 cout << "\nMatriz original: " << endl;
                 mostra(m);
                 cout << "\nMatriz com as trocas: " << endl;
                 troca(m);
                 mostra(m);
             }
             getchar();
             break;
          default :
                cout << "\nOpcao invalida";
                break;
       };
   }while(menu != 0);
}

void leitura(float mat[][5])
{
    int i, x;
    srand(time(NULL));
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            mat[i][x] = (rand() % 100) * 1.12;
        }
    }
}

void mostra(float mat[][5])
{
    int i, x;
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            cout << mat[i][x] << "\t";
        }
        cout << "\n";
    }
}

void arredondar_pares_impares(float mat[][5])
{
    int i, x;
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            if((int)mat[i][x] % 2 == 0)
               cout << ceil(mat[i][x]) << "\t";
            else
               cout << floor(mat[i][x]) << "\t";
        }
        cout << "\n";
    }
}

void troca(float mat[][5])
{
    int i, x, c;
    float maior, aux;
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            if(x == 0)
            {
                maior = mat[i][0];
                c = 0;
            }
            else if(mat[i][x] > maior)
            {
                maior = mat[i][x];
                c = x;
            }
        }
        //cout << maior << ", ";
        if(mat[i][i] != maior)
        {
            aux = mat[i][i];
            mat[i][i] = maior;
            mat[i][c] = aux;
        }
    }
}




