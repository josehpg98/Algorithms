#include<iostream>
using namespace std;
struct conta_bancaria
{
    int nc;//número da conta
    char nome[50];
    float saldo;
};
void cadastrarconta(conta_bancaria vt[],int c);
void mostrarconta(conta_bancaria vt[],int c,int numc);
void deposito(conta_bancaria vt[],int c,int numc, float v);
void saque(conta_bancaria vt[],int c,int numc, float v);
main()
{
    conta_bancaria vet[10];
    setlocale(LC_ALL,"Portuguese");
    int op = 0, ctrl = -1,nconta;
    float valor = 0;
    do
    {
        system("cls");
        cout<< "--- Menu de Ações ---" << endl;
        cout<< " 1 - Cadastrar Conta Bancária " <<endl;
        cout<< " 2 - Visualizar Dados da Conta " <<endl;
        cout<< " 3 - Depositar " <<endl;
        cout<< " 4 - Sacar " <<endl;
        cout<< " 5 - Sair " <<endl;
        cout<<"Escolha Uma Opção: " << endl;
        cin>>op;
        fflush(stdin);
        switch(op)
        {
        case 1:
            ctrl += 1;
            if(ctrl > 9)
            {
                cout<<"O programa atingiu o limite de contas cadastradas e será encerrado!" << endl;
                op = 5;
                getchar();
                break;
            }
            else
            {
                cadastrarconta(vet,ctrl);
                getchar();
                break;
            }
        case 2:
            if(ctrl < 0)
            {
                cout<<"Cadastre uma conta primeiro!" << endl;
                getchar();
                break;
            }
            else
            {
                cout<<"Informe o número da conta á ser consultada: " << endl;
                cin>>nconta;
                mostrarconta(vet,ctrl,nconta);
                getchar();
                break;
            }
        case 3:
            if(ctrl < 0)
            {
                cout<<"Cadastre uma conta primeiro!" << endl;
                getchar();
                break;
            }
            else
            {
                cout<<"Informe o número da conta á ser feito o deposito: " << endl;
                cin>>nconta;
                cout<<"Informe o valor á ser feito o deposito: " << endl;
                cin>>valor;
                deposito(vet,ctrl,nconta,valor);
                getchar();
                break;
            }
        case 4:
            if(ctrl < 0)
            {
                cout<<"Cadastre uma conta primeiro!" << endl;
                getchar();
                break;
            }
            else
            {
                cout<<"Informe o número da conta á ser feito o deposito: " << endl;
                cin>>nconta;
                cout<<"Informe o valor á ser feito o saque: " << endl;
                cin>>valor;
                saque(vet,ctrl,nconta,valor);
                getchar();
                break;
            }
        case 5:
            cout<<"Programa Finalizado!"<< endl;
            getchar();
            break;
        default:
            cout<<"Opção inválida!" << endl;
            getchar();
            break;
        }
    }
    while(op != 5);
}
void cadastrarconta(conta_bancaria vt[],int c)
{
        system("cls");
        cout << "Informe o numero da conta: ";
        cin >> vt[c].nc;
        fflush(stdin);
        cout << "Informe o seu nome: ";
        gets(vt[c].nome);
        fflush(stdin);
        cout << "Informe o saldo da conta: ";
        cin >> vt[c].saldo;
        fflush(stdin);
    }
    void mostrarconta(conta_bancaria vt[],int c,int numc)
    {
        system("cls");
        cout<<"Dados da Conta Cadastrada " << endl;
        cout<<"\n";
        for(int lp = 0; lp <= c; lp++)
        {
            if(vt[lp].nc == numc)
            {
                cout << "Número da Conta: " << vt[lp].nc << endl;
                cout << "Nome do Cliente: " << vt[lp].nome << endl;
                cout << "Saldo em Conta: " << vt[lp].saldo << endl;
                cout << "---------------------------------" << endl;
                getchar();
            }
        }
    }
    void deposito(conta_bancaria vt[],int c,int numc, float v)
    {
        system("cls");
        cout<<"Dados para Deposito " << endl;
        cout<<"\n";
        for(int lp = 0; lp <= c; lp++)
        {
            if(vt[lp].nc == numc)
            {
                cout<<" Extrato anterior ao deposito: " << endl;
                cout << "Número da Conta: " << vt[lp].nc << endl;
                cout << "Nome do Cliente: " << vt[lp].nome << endl;
                cout << "Saldo em Conta: " << vt[lp].saldo << endl;
                cout << "---------------------------------" << endl;
                cout<<" Extrato posterior ao deposito: " << endl;
                cout << "Número da Conta: " << vt[lp].nc << endl;
                cout << "Nome do Cliente: " << vt[lp].nome << endl;
                vt[lp].saldo += v;
                cout << "Saldo em Conta: " << vt[lp].saldo << endl;
                cout << "---------------------------------" << endl;
                getchar();
            }
        }
    }
    void saque(conta_bancaria vt[],int c,int numc, float v)
    {

        system("cls");
        cout<<"Dados para saque " << endl;
        cout<<"\n";
        for(int lp = 0; lp <= c; lp++)
        {
            if(vt[lp].nc == numc)
            {
                cout<<" Extrato anterior ao saque: " << endl;
                cout << "Número da Conta: " << vt[lp].nc << endl;
                cout << "Nome do Cliente: " << vt[lp].nome << endl;
                cout << "Saldo em Conta: " << vt[lp].saldo << endl;
                cout << "---------------------------------" << endl;
                cout<<" Extrato posterior ao saque: " << endl;
                cout << "Número da Conta: " << vt[lp].nc << endl;
                cout << "Nome do Cliente: " << vt[lp].nome << endl;
                vt[lp].saldo -= v;
                cout << "Saldo em Conta: " << vt[lp].saldo << endl;
                cout << "---------------------------------" << endl;
                getchar();
            }
        }
    }
