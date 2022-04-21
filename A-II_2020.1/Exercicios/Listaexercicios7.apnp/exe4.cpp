#include<iostream>
#include<cstring>
using namespace std;
struct agenda
{
    char nome[50];
    char telefone[12];
    char email[60];
};
void cadastro(agenda v[], int i);
void mostrarcontatos(agenda v[], int i);
void buscanome(agenda v[],int i,char n[50]);
void buscatelefone(agenda v[],int i,char t[12]);
main()
{
    setlocale(LC_ALL,"Portuguese");
    agenda vet[50];
    char nome[50],telefone[12];
    int op, control = -1;
    do
    {
        cout<<"-----Menu de Ações da Agenda Eletrônica-----" <<endl;
        cout<<" 0 - Sair"<<endl;
        cout<<" 1 - Incluir um item na agenda "<<endl;
        cout<<" 2 - Mostrar todos os itens na agenda "<<endl;
        cout<<" 3 - Busca por nome na agenda "<<endl;
        cout<<" 4 - Busca por telefone na agenda "<<endl;
        cout<<" Escolha uma opção: "<<endl;
        cin>>op;
        fflush(stdin);
        getchar();
        switch(op)
        {
        case 0:
            cout<<"O programa foi finalizado! " <<endl;
            break;
            getchar();
        case 1:
            control += 1;
            cadastro(vet,control);
            break;
            getchar();
        case 2:
            if(control < 0)
            {
                cout<<"Cadastre um contato na agenda! " <<endl;
                break;
                getchar();
            }
            else
            {
                mostrarcontatos(vet,control);
                break;
                getchar();
            }
        case 3:
            if(control < 0)
            {
                cout<<"Cadastre um contato na agenda! " <<endl;
                break;
                getchar();
            }
            else
            {
                cout<<"Informe o nome do contato para fazer a busca: " <<endl;
                gets(nome);
                fflush(stdin);
                buscanome(vet,control,nome);
                break;
                getchar();
            }
        case 4:
            if(control < 0)
            {
                cout<<"Cadastre um contato na agenda! " <<endl;
                break;
                getchar();
            }
            else
            {
                cout<<"Informe o telefone do contato para fazer a busca: " <<endl;
                gets(telefone);
                fflush(stdin);
                buscatelefone(vet,control,telefone);
                break;
                getchar();
            }
        default:
            cout<<"Opção inválida! " <<endl;
            break;
            getchar();
        }
    }
    while(op != 0);
}
void cadastro(agenda v[], int i)
{
    cout<<" cadastro Agenda! " <<endl;
    cout<<" Informe seu nome: " <<endl;
    gets(v[i].nome);
    fflush(stdin);
    cout<<" Informe seu teleone: " <<endl;
    gets(v[i].telefone);
    fflush(stdin);
    cout<<" Informe seu email: " <<endl;
    gets(v[i].email);
    fflush(stdin);
    cout<<"\n\n";
}
void mostrarcontatos(agenda v[], int i)
{
    cout<<"Lista dos contatos cadastrados! " <<endl;
    for(int pi = 0; pi <= i; pi++)
    {
        cout<<" Nome: " << v[pi].nome <<endl;
        cout<<" Telefone: " << v[pi].telefone <<endl;
        cout<<" Enail: " << v[pi].email <<endl;
        cout<<"---------------------------------------" <<endl;
    }
}
void buscanome(agenda v[],int i,char n[50])
{
    cout<<"Busca contato por nome, caso não retorne nada o contato não está cadastrado! " << endl;
    for(int pi = 0; pi <= i; pi++)
    {
        if(strcmp(v[pi].nome,n)== 0)
        {
            cout<<"Nome buscado: " << n << endl;
            cout<<" dados: " <<endl;
            cout<<" Telefone: " << v[pi].telefone <<endl;
            cout<<" Email: " << v[pi].email <<endl;
            getchar();
        }
    }
}
void buscatelefone(agenda v[],int i,char t[12])
{
       cout<<"Busca contato por telefone, caso não retorne nada, o contato não esta cadastrado! " << endl;
    for(int pi = 0; pi <= i; pi++)
    {
        if(strcmp(v[pi].telefone,t)== 0)
        {
            cout<<"Nome buscado: " << t << endl;
            cout<<" dados: " <<endl;
            cout<<" Nome: " << v[pi].nome <<endl;
            cout<<" Email: " << v[pi].email <<endl;
            getchar();
        }
    }
}
