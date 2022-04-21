#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
struct aluno
{
    int matricula;//número da conta
    struct notas{
        int n1;
        int n2;
        int n3;
        int n4;
    };
};

void cadastrarconta(conta c[], int &i);
;

main()
{
    setlocale(LC_ALL, "Portuguese");
    conta c[10];
    int op = -1, i = -1,nc;
    float valor;
    do
    {
        system("cls");
        cout<<" MENU DE AÇÕES " << endl;
        cout<<" 1 - CADASTRAR ALUNOS " << endl;
        cout<<" 2 - LISTAR CONTAS CADASTRADAS " << endl;
        cout<<" 3 - DEPOSITAR " << endl;
        cout<<" 4 - SACAR : " << endl;
        cout<<" 5 - SAIR: " << endl;
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
            cadastrarconta(c,i);
            break;
        case 2 :
            system("cls");
            if(i < 0)
                cout << "Nâo existem contas cadastradas!" << endl;
            else
            {
                cout << "informe o numero da conta: " << endl;
                fflush(stdin);//BUFFER É A ULTIMA ENTRADA
                cin>>nc;
                listarcontas(c,i,nc);
                cout << "Aperte enter!" << endl;
                fflush(stdin);
                getchar();
                break;
            }
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 3:
            system("cls");
            cout << "informe o numero da conta: " << endl;
            cin>>nc;
            cout << "informe o valor a depositar: " << endl;
            cin>>valor;
            depositar(c,i,nc,valor);
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 4:
            system("cls");
            cout << "informe o numero da conta: " << endl;
            cin>>nc;
            cout << "informe o valor a sacar: " << endl;
            cin>>valor;
            sacar(c,i,nc,valor);
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
    while(op <= 4);

}
void cadastrarconta(conta c[], int &i)
{
    i++;
    cout<<"Informe o numero da conta: ";
    cin>>c[i].ndc;
    fflush(stdin);

    cout<<"Informe o nome do cliente: ";
    cin>>c[i].nome;
    fflush(stdin);

    cout << "Informe o saldo: ";
    cin>>c[i].saldo;
    fflush(stdin);

}
void listarcontas(conta c[], int i,int n)
{
    for(int x = 0; x <= i; x++)
    {
        if(n == c[x].ndc)
        {
            cout << "NUMERO DA CONTA: " << c[x].ndc << endl;
            cout << "NOME DO CLIENTE: " << c[x].nome << endl;
            cout << "SALDO: " << c[x].saldo << endl;
            cout << "\n------------------------------\n";
        }
    }
}
void depositar(conta c[], int i,int n,float v)
{
    for(int x = 0; x <= i; x++)
    {
        if(n == c[x].ndc)
        {
            c[x].saldo = c[x].saldo + v;
            cout<<"seu novo saldo é: " << c[x].saldo;
        }


    }

}


