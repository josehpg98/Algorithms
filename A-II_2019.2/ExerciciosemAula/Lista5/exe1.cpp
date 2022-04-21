#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
struct produto
{
    int codigo;
    char nome[50];
    int unidade;
    float valor;
    int quantidade;
};

void leitura(produto a[], int &i);
void mostra(produto a[], int i);
void buscaproduto(produto a[],int i,int c);
void vendeporduto(produto p[],int i,int c,int q);

main()
{
    produto v[50];
    int op = -1, i = -1,cod,qt;
    do
    {
        system("cls");
        cout<<" 0 - SAIR" << endl;
        cout<<" 1 - CADASTRAR PRODUTO " << endl;
        cout<<" 2 - LISTAR PRODUTOS CADASTRADOS " << endl;
        cout<<" 3 - CONSULTAR PRODUTO PELO CODIGO " << endl;
        cout<<" 4 - VENDER PRODUTO " << endl;
        cout<<" SUA ESCOLHA: ";
        cin>>op;
        fflush(stdin);
        switch(op)
        {
        case 0 :
            system("cls");
            cout << "Para Finalizar o programa, aperte enter para prosseguir!";
            getchar();
            break;
        case 1 :
            system("cls");
            leitura(v, i);
            break;
        case 2 :
            system("cls");
            if(i < 0)
                cout << "Nâo existem produtos cadastrados!";
            else
            {
                cout << " Dados cadastrados com sucesso!" << endl;
                mostra(v, i);
            }
            getchar();
            break;
        case 3:
            system("cls");
            if(i < 0)
                cout << "Nâo existem produtos cadastrados!";
            else
            {
                cout << "informe o codigo: " << endl;
                fflush(stdin);
                cin>>cod;
                buscaproduto(v,i,cod);
                cout << "Aperte enter!" << endl;
                getchar();
                break;

            }
            case 4:
                cout << "informe o codigo: " << endl;
                fflush(stdin);
                cin>>cod;
                cout << "informe a quantidade: " << endl;
                fflush(stdin);
                cin>>qt;
                vendeporduto(v,i,cod,qt);
                cout << "Aperte enter!" << endl;
                getchar();
            break;
        default:
            system("cls");
            cout << "Opção inválida!";
            getchar();
            break;
        };
    }
    while(op != 0);

}
void leitura(produto a[], int &i)
{
    i++;//controla quantos cadastros
    cout<<"Informe o código: ";
    cin>>a[i].codigo;
    fflush(stdin);

    cout<<"Informe o nome: ";
    gets(a[i].nome);
    fflush(stdin);

    cout << "Informe a unidade: ";
    cin>>a[i].unidade;
    fflush(stdin);

    cout << "Informe o valor: ";
    cin>>a[i].valor;
    fflush(stdin);

    cout << "Informe a quantidade: ";
    cin>>a[i].quantidade;
    fflush(stdin);
}
void mostra(produto a[], int i)
{
    for(int x = 0; x <= i; x++)
    {
        cout << "Código: " << a[x].codigo << endl;
        cout << "Nome: " << a[x].nome << endl;
        cout << "Unidade: " << a[x].unidade << endl;
        cout << "Valor: " << a[x].valor << endl;
        cout << "Quantidade: " << a[x].quantidade << endl;
        cout << "\n------------------------------\n";
    }
}
void buscaproduto(produto a[],int i,int c)
{
    int x;
    //tem que ir ate o i,pois o i e o contrrolador de cadastro
      for(x = 0;x <= i;x++){
            if(c == a[x].codigo){
            cout << "Nome: " << a[x].nome << endl;
            cout << "Unidade: " << a[x].unidade << endl;
            cout << "Valor: " << a[x].valor << endl;
            cout << "Quantidade: " << a[x].quantidade << endl;
            cout << "\n------------------------------\n";
            }
        }

}
void vendeporduto(produto p[],int i,int c,int q){
    int x;
      for(x = 0;x <= i;x++){
            if(q > p[x].quantidade){
                cout<<"a quantidade é menor que a solicitada " << endl;
            }else{
                p[x].quantidade = p[x].quantidade - q;
                cout<<"o novo estoque será: " << p[x].quantidade;
            }
        }
}
