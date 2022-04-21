#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void gerar(int *v1)
{
    srand(time(NULL));
    for(int i= 0; i<20; i++)
    {
        *(v1+i)= rand()%100;
    }
}
void inverter(int *v1,int *v2)
{
    for(int i= 0; i<20; i++)
    {
        *(v2+i)=*(v1+19-i);
    }
}
void mostrar(int *v)
{
    for(int i= 0; i<20; i++)
    {
        cout<<*(v+i)<<endl;
    }
}
void maiorEmenor(int *v)
{
    int ma=*v;
    int me=*v;
    for(int i= 0; i<20; i++)
    {
        if(ma<*(v+i))
        {
            ma=*(v+i);
        }
        if(me>*(v+i))
        {
            me=*(v+i);
        }
    }
    cout<<"Maior: "<<ma<<endl;
    cout<<"Menor: "<<me<<endl;
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int *v1 = new int[20];
    int *v2 = new int[20];
    int *MENU = new int;
    int *ler = new int(0);
    do
    {
        cout<<" MENU DE OPCOES: "<< endl;
        cout<<" 0 - Sair " << endl;
        cout<<" 1 - Gerar valores para o vetor v1 " << endl;
        cout<<" 2 - Preencher vetor v2 (o qual deve ser preenchido com os mesmos valores de v1, porém em ordem inversa) " << endl;
        cout<<" 3 - Mostrar os dois vetores na tela " << endl;
        cout<<" 4 - Mostrar o maior e o menor valor dentro do vetor v1 " << endl;
        cout<<" Sua escolha: ";
        cin>>*MENU;
        fflush(stdin);
        switch(*MENU)
        {
        case 0:
            cout<<"Programa finalizado.";
            getchar();
            break;
        case 1:
            system("cls");
            *ler=1;
            gerar(v1);
            cout<<"Vetor  v1 gerado!"<<endl;
            getchar();
            system("cls");
            break;
        case 2:
            if(ler != 0)
            {
                system("cls");
                inverter(v1,v2);
                cout<<"Vetor v2 preenchido! "<< endl;
                getchar();
            }
            else
            {
                cout<<"Favor gerar vetor primeiro... " << endl;
                getchar();
            }
            system("cls");
            break;
        case 3:
            if(ler != 0)
            {
                system("cls");
                cout<<" Vetor v1: " << endl;
                mostrar(v1);
                cout<<endl;
                cout<<"Vetor v2: " << endl;
                mostrar(v2);
                getchar();
            }
            else
            {
                cout<<"Favor gerar vetor primeiro... " << endl;
                getchar();
            }
            system("cls");
            break;
        case 4:
            if(ler != 0)
            {
                system("cls");
                maiorEmenor(v1);
                getchar();
            }
            else
            {
                cout<<"Favor gerar vetor primeiro... " << endl;
                getchar();
            }
            system("cls");
            break;
        default:
            cout<<"Opção inválida! " << endl;
            getchar();
            break;
        }
    }
    while(*MENU!=0);
}


