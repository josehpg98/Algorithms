#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;
struct agenda
{
    string nome;
    string telefone;
};
void incluir(int *i)
{
    char t[100];
    cout<<"digite o nome: " << endl;
    gets(t);
    fflush(stdin);
    char c[20];
    cout<<"digite o telefone: " << endl;
    gets(c);
    fflush(stdin);
    ofstream x;
    x.open("agenda.txt",ios::app);
    if(x.is_open())
        x <<t<<";"<<c<<"\n";
    else
        cout<<"O arquivo nao foi aberto corretamente! " << endl;
    x.close();
}
void gravar(int i,agenda *pcontato,char c[],char t[])
{
    pcontato[i].nome = c;
    pcontato[i].telefone = t;
}
void mostrar(int *i,agenda *pcontato)
{
    cout<<"-------------------------"<<endl;
    for(int j=0; j<*i; j++)
    {
        cout<<"Nome:"<<pcontato[j].nome<<endl;
        cout<<"Numero:"<<pcontato[j].telefone<<endl;
        cout<<"-------------------------"<<endl;
    }
}
void consulta_nome(int *i,agenda *pcontato)
{
    string n;
    cout<<"Digite o nome para a consulta: " <<endl;
    getline(cin,n);
    cout<<"-------------------------"<<endl;
    for(int j=0; j<*i; j++)
    {
        if(pcontato[j].nome==n)
        {
            cout<<"Nome:"<<pcontato[j].nome<<endl;
            cout<<"Telefone:"<<pcontato[j].telefone<<endl;
            cout<<"-------------------------"<<endl;
        }
    }
}
void consulta_num(int *i,agenda *pcontato)
{
    string n;
    cout<<"Digite o telefone para a consulta: " <<endl;
    getline(cin,n);
    cout<<"-------------------------"<<endl;
    for(int j=0; j<*i; j++)
    {
        if(pcontato[j].telefone==n)
        {
            cout<<"Nome:"<<pcontato[j].nome<<endl;
            cout<<"Numero:"<<pcontato[j].telefone<<endl;
            cout<<"-------------------------"<<endl;
        }
    }
}
void total (int *i)
{
    ifstream leitura("agenda.txt",ios :: in);
    while(!leitura.eof())
    {
        char n[100];
        leitura.getline(n,100,';');
        leitura.getline(n,20);
        *i=*i+1;
    }
}
main()
{
    int *menu= new int;
    while(*menu != 0)
    {
        system("cls");
        int *i= new int(-1);
        total(i);
        agenda *contatos = new agenda[*i];
        fflush(stdin);
        ifstream leitura("agenda.txt",ios :: in);
        for(int j=0; j<*i; j++)
        {
            char nome[100];
            leitura.getline(nome,100,';');
            char num[100];
            leitura.getline(num,20);
            gravar(j,contatos,nome,num);
        }
        leitura.close();
        cout<<"_________________Agenda telefonica:__________________"<<endl;
        cout<<"0 - Sair"<<endl;
        cout<<"1 - Incluir"<<endl;
        cout<<"2 - Mostrar"<<endl;
        cout<<"3 - Consultar pelo nome"<<endl;
        cout<<"4 - Consultar pelo numero do telefone"<<endl;
        cout<<"\n";
        cout<<"Total de contatos: "<<*i<<endl;
        cout<<"\n";
        cout<<"qual sua escolha ";
        cin>>*menu;
        fflush(stdin);
        cout<<endl;
        cout<<*i;
        switch(*menu)
        {
        case 0:
            cout<<"Programa finalizado.";
            getchar();
            break;
        case 1:
            system("cls");
            incluir(i);
            cout<<"Contato salvo!"<<endl;
            getchar();
            system("cls");
            break;
        case 2:
                system("cls");
                mostrar(i,contatos);
                fflush(stdin);
                getchar();
            break;
        case 3:
                system("cls");
                consulta_nome(i,contatos);
                fflush(stdin);
                getchar();
            break;
        case 4:
                system("cls");
                consulta_num(i,contatos);
                fflush(stdin);
                getchar();
            break;
        default:
            cout<<"Opção inválida!";
            getchar();
            break;
        }
    }
    while(*menu!=0);
}
