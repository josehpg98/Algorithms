#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
struct livro
{
    string nome;
    string editora;
    int isbn;
    int ade;//ano de edição
    int ndp;//número de páginas
    float preco;
};

void cadastrarlivros(livro l[], int &i);
void listarlivors(livro l[], int i);
void lmc(livro l[],int i);
void lmb(livro l[],int i);
void verificarano(livro l[],int i,int anoedicao);

main()
{
    setlocale(LC_ALL, "Portuguese");
    livro l[20];
    int op = -1, i = -1,ano;
    do
    {
        system("cls");
        cout<<" MENU DE AÇÕES " << endl;
        cout<<" 1 - CADASTRAR LIVROS " << endl;
        cout<<" 2 - LISTAR LIVROS CADASTRADOS " << endl;
        cout<<" 3 - CONSULTAR LIVRO MAIS CARO: " << endl;
        cout<<" 4 - CONSULTAR LIVRO MAIS BARATO: " << endl;
        cout<<" 5 - CONSULTAR LVROS PUBLICADOS EM DETERMINADO ANO: " << endl;
        cout<<" 6 - SAIR: " << endl;
        cout<<" SUA ESCOLHA: ";
        cin>>op;
        fflush(stdin);//tira o buffer do teclado
        switch(op)
        {
        case 0 :
            system("cls");
            cout << "Para Finalizar o programa, aperte enter!";
            getchar();//aguarda o pressionar do enter
            break;
        case 1 :
            system("cls");
            cadastrarlivros(l,i);
            break;
        case 2 :
            system("cls");
            if(i < 0)
                cout << "Nâo existem livros cadastrados!" << endl;
            else
            {
                listarlivors(l,i);
            }
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 3:
            system("cls");
            lmc(l,i);
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 4:
            system("cls");
            lmb(l,i);
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 5:
            system("cls");
            cout << "Informe o ano para verificação de obras: " << endl;
            cin>>ano;
            verificarano(l,i,ano);
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        default:
            system("cls");
            cout << "Opção inválida!";
            cout << "Aperte enter!" << endl;
            getchar();//aguarda o enter ser pressionado
            break;
        };
    }
    while(op <= 5);

}
void cadastrarlivros(livro l[], int &i)
{
    i++;
    cout<<"Informe o nome do livro: ";
    cin>>l[i].nome;
    fflush(stdin);

    cout<<"Informe a editora: ";
    cin>>l[i].editora;
    fflush(stdin);

    cout << "Informe o isbn: ";
    cin>>l[i].isbn;
    fflush(stdin);

    cout << "Informe o ano de edição: ";
    cin>>l[i].ade;
    fflush(stdin);

    cout << "Informe o número de páginas: ";
    cin>>l[i].ndp;
    fflush(stdin);

    cout << "Informe o preço do livro: ";
    cin>>l[i].preco;
    fflush(stdin);
}
void listarlivors(livro l[], int i)
{
    for(int x = 0; x <= i; x++)
    {
        cout << "NOME: " << l[x].nome << endl;
        cout << "EDITORA: " << l[x].editora << endl;
        cout << "ISBN: " << l[x].isbn << endl;
        cout << "ANO DE EDIÇÃO: " << l[x].ade << endl;
        cout << "NÚMERO DE PÁGINAS: " << l[x].ndp << endl;
        cout << "PREÇO: " << l[x].preco << endl;
        cout << "\n------------------------------\n";

    }
}
void lmc(livro l[],int i)
{
    int lc = l[0].preco;
    for(int x = 0; x <= i; x++)
    {
        if(l[x].preco > lc)
        {
            cout << "NOME: " << l[x].nome << endl;
            cout << "EDITORA: " << l[x].editora << endl;
            cout << "ISBN: " << l[x].isbn << endl;
            cout << "ANO DE EDIÇÃO: " << l[x].ade << endl;
            cout << "NÚMERO DE PÁGINAS: " << l[x].ndp << endl;
            cout << "PREÇO: " << l[x].preco << endl;
            cout << "\n------------------------------\n";
        }
    }
}
void lmb(livro l[],int i)
{
    int lb = l[0].preco;
    for(int x = 0; x <= i; x++)
    {
        if(l[x].preco < lb)
        {
            cout << "NOME: " << l[x].nome << endl;
            cout << "EDITORA: " << l[x].editora << endl;
            cout << "ISBN: " << l[x].isbn << endl;
            cout << "ANO DE EDIÇÃO: " << l[x].ade << endl;
            cout << "NÚMERO DE PÁGINAS: " << l[x].ndp << endl;
            cout << "PREÇO: " << l[x].preco << endl;
            cout << "\n------------------------------\n";
        }
    }
}
void verificarano(livro l[],int i,int anoedicao)
{

    for(int x = 0; x <= i; x++)
    {
        if(l[x].ade == anoedicao)
        {
            cout << "NOME: " << l[x].nome << endl;
            cout << "EDITORA: " << l[x].editora << endl;
            cout << "ISBN: " << l[x].isbn << endl;
            cout << "ANO DE EDIÇÃO: " << l[x].ade << endl;
            cout << "NÚMERO DE PÁGINAS: " << l[x].ndp << endl;
            cout << "PREÇO: " << l[x].preco << endl;
            cout << "\n------------------------------\n";
        }
    }
}
