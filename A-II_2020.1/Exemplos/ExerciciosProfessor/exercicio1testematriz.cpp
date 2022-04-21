#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
   setlocale(LC_ALL,"Portuguese");
   int op = -1;
   do{
    cout<<"----Menu de Ações----":
    cout<<" 1 - Gerar Matriz ";
    cout<<" 2 - Mostrar Matriz ";
    cout<<" 3 - Mostrar Diagonal Principal ";
    cout<<" 4 - Mostrar Diagonal Secundária ";
    cout<<" 5 - Mostrar Elementos Acima da Diagonal Principal ";
    cout<<" 6 - Mostrar Elementos Abaixo da Diagonal Principal ";
    cout<<" 7 - Verificar Se a Matriz é Simétrica ";
    cout<<"Escolha uma opção: ";
    cin>>op;
    fflush(stdin);
    switch(op){
    case 1:
        geramatriz();
        break;
    };
    //limpa tela - system("cls");
   }while(op != 0);
}


