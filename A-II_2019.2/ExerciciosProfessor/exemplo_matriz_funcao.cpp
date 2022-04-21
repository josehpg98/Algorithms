#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;
void leitura(int mat[][5]);
void mostra(int mat[][5]);
void mostra_dp(int mat[][5]);

main()
{
   int a[5][5], menu = -1, flag = 0;

   do
   {
       system("cls");
       cout << "######MENU DE OPCOES######" << endl;
       cout << "# 0 - Sair               #" << endl;
       cout << "# 1 - Gerar Matriz       #" << endl;
       cout << "# 2 - Mostrar Matriz     #" << endl;
       cout << "# 3 - Elementos da DP    #" << endl;
       cout << "# 4 - Elementos da DS    #" << endl;
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
             leitura(a);
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
                 mostra(a);
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
                 cout << "\nElemento da DP: ";
                 mostra_dp(a);
             }
             getchar();
             break;
          default :
                cout << "\nOpcao invalida";
                break;
       };
   }while(menu != 0);
}

void leitura(int mat[][5])
{
    int i, x;
    srand(time(NULL));
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            mat[i][x] = rand() % 100;
        }
    }
}

void mostra(int mat[][5])
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

void mostra_dp(int mat[][5])
{
    int i, x;
    for(i = 0; i < 5; i++)
    {
        for(x = 0; x < 5; x++)
        {
            if(i == x)
               cout << mat[i][x] << "\t";
        }
    }
}




