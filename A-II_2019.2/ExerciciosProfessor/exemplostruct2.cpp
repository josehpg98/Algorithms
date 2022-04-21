#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct cadastro
{
    char nome[50];
    int idade;
    float salario;
};
void leitura(cadastro a[],int &i);
void mostra(cadastro a[], int i);
main()
{
    cadastro(v[10]);
    int menu = -1,i = -1;
    do
    {
        system("cls");
        cout<<" 0 - sair" << endl;
        cout<<" 1 - cadastrar" << endl;
        cout<<" 2 - mostrar" << endl;
        cout<<" sou escolha: " << endl;
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
        case 0 :
            system("cls");
            cout<<" programa finalizado";
            getchar();
            break;
        case 1 :
            system("cls");
            leitura(v,i);
            break;
        case 2 :
            system("cls");
            if(i < 0){
                cout<<" não existem dados cadastrados: " << endl;
            }else{
                 cout<<"dados cadastrados: " << endl;
                 mostra(v,i);
            }
            getchar();
            break;
        default:
             system("cls");
             cout<<" opção inválida";
             getchar();
             break;
        };
    }while(menu != 0);
}
void leitura(cadastro a[],int &i)
{
    i++;
    cout<<"informe o nome: ";
    gets(a[i].nome);
    fflush(stdin);

    cout<<"informe a idade: ";
    cin>>a[i].idade;
    fflush(stdin);

    cout<<"informe o salario: ";
    cin>>a[i].salario;
    fflush(stdin);
}
void mostra(cadastro a[], int i)
{
    for(int x = 0; x <= i; x++)
    {
        cout<<" nome: " << a[x].nome <<endl;
        cout<<" idade: " << a[x].idade <<endl;
        cout<<" salario: " << a[x].salario <<endl;
        cout<<"\n-------------------------------------";
    }
}
