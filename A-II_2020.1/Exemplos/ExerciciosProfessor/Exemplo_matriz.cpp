#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;
void mostra(float m[][3]);
void mostra_dp(float m[][3]);
void gerar(float m[][3]);
main()
{
   float mat[3][3] = {{22.4,26.3,34.0},
                      {40,25.9,36.4},
                      {17.8,28.0,39.9}};
   int menu = -1;

   do
   {
       system("cls");
       cout << "#######MENU#######" <<  endl;
       cout << "# 0 - Sair       #" <<  endl;
       cout << "# 1 - Gerar      #" <<  endl;
       cout << "# 2 - Mostrar    #" <<  endl;
       cout << "# 3 - DP         #" <<  endl;
       cout << "##################" <<  endl;
       cout << "Sua escolha: ";
       cin >> menu;
       fflush(stdin);
       switch (menu)
       {
          case 0 :
             system("cls");
             cout << "PROGRAMA FINALIZADO.";
             getchar();
             break;
          case 1 :
             system("cls");
             gerar(mat);
             cout << "MATRIZ GERADA COM SUCESSO.";
             getchar();
             break;
          case 2 :
             system("cls");
             cout << "MATRIZ ATUAL" << endl;
             mostra(mat);
             getchar();
             break;
          case 3 :
             system("cls");
             cout << "MATRIZ ATUAL" << endl;
             mostra(mat);
             cout << "\n\nDIAGONAL PRINCIPAL: " << endl;
             mostra_dp(mat);
             getchar();
             break;
          default :
             system("cls");
             cout << "ESCOLHA INVALIDA.";
             getchar();
             break;
       };
   }while(menu != 0);
}

void mostra(float m[][3])
{
    int l,c;
    for(l = 0; l < 3; l++)
    {
       for(c = 0; c < 3; c++)
           cout << m[l][c] << "\t";
       cout << "\n";
    }
}

void mostra_dp(float m[][3])
{
    int l,c;
    for(l = 0; l < 3; l++)
    {
       for(c = 0; c < 3; c++)
       {
           if(l == c)
              cout << m[l][c] << "\t";
       }
    }
}

void gerar(float m[][3])
{
    int l,c;
    srand(time(NULL));
    for(l = 0; l < 3; l++)
    {
       for(c = 0; c < 3; c++)
           m[l][c] = (rand() % 50) * 1.124;
    }
}
