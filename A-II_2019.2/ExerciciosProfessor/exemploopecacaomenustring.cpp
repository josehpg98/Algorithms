#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
struct pessoa
{
    int idade;
    string sexo;
    float salario;
    int ndf;
};

void leiturapessoas(pessoa a[], int &i);
void mostrapc(pessoa a[], int i);
void mediasalmasculino(pessoa p[],int i);
void mediasalfeminino(pessoa a[],int i);
void opcao5(pessoa p[], int i);
void opcao6(pessoa p[], int i);
void opcao7(pessoa p[], int i);

main()
{
    setlocale(LC_ALL, "Portuguese");
    pessoa v[50];
    int op = -1, i = -1;
    float ret = 0;
    do
    {
        system("cls");
        cout<<" MENU DE AÇÕES " << endl;
        cout<<" 0 - SAIR" << endl;
        cout<<" 1 - CADASTRAR PESSOAS " << endl;
        cout<<" 2 - LISTAR PESSOAS CADASTRADAS " << endl;
        cout<<" 3 - CONSULTAR MÉDIA DE SALÁRIO DE PESSOAS DO SEXO MASCULINO: " << endl;
        cout<<" 4 - CONSULTAR MÉDIA DE SALÁRIO DE PESSOAS DO SEXO FEMININO: " << endl;
        cout<<" 5 - CONSULTAR SEXO E SALÁRIO DA PESSOA COM MAIOR IDADE: " << endl;
        cout<<" 6 - CONSULTAR SEXO E SALÁRIO DA PESSOA COM MENOR IDADE: " << endl;
        cout<<" 7 - CONSULTAR A PESSOA COM MAIOR NÚMERO DE FILHOS E SEU SALÁRIO: " << endl;
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
            leiturapessoas(v, i);
            break;
        case 2 :
            system("cls");
            if(i < 0)
                cout << "Nâo existem pessoas cadastradas!" << endl;
            else
            {
                mostrapc(v, i);
            }
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 3:
            system("cls");
            mediasalmasculino(v,i);
            cout << "Aperte enter!" << endl;
            getchar();
            break;
         case 4:
            system("cls");
            mediasalfeminino(v,i);
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 5:
            system("cls");
           opcao5(v,i);
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 6:
            system("cls");
           opcao6(v,i);
            cout << "Aperte enter!" << endl;
            getchar();
            break;
         case 7:
            system("cls");
           opcao7(v,i);
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
    while(op != 0);

}
void leiturapessoas(pessoa a[], int &i)
{
    i++;
    cout<<"Informe a sua idade: ";
    cin>>a[i].idade;
    fflush(stdin);

    cout<<"Informe o sexo (F - Feminino | M - Masculino): ";
    cin>>a[i].sexo;
    fflush(stdin);

    cout << "Informe o seu salário: ";
    cin>>a[i].salario;
    fflush(stdin);

    cout << "Informe o número de filhos: ";
    cin>>a[i].ndf;
    fflush(stdin);

}
void mostrapc(pessoa a[], int i)
{
    for(int x = 0; x <= i; x++)
    {
        cout << "Idade: " << a[x].idade << endl;
        cout << "Sexo: " << a[x].sexo << endl;
        cout << "Salario: " << a[x].salario << endl;
        cout << "Número de Filhos: " << a[x].ndf << endl;
        cout << "\n------------------------------\n";

    }
}
void mediasalmasculino(pessoa p[],int i)
{
        int cp = 0;
        float ss = 0,rt = 0;
        for(int x = 0; x <= i; x++)
        {
            if(p[x].sexo == "M" || p[x].sexo == "m"){
                cp = cp + 1;
                ss = ss + p[x].salario;
            }
        }
        rt = (ss / cp);
        cout<<"A média de salário de pessoas do sexo masculino é: " << rt << endl;
}
void mediasalfeminino(pessoa p[],int i)
{
        int cp = 0;
        float ss = 0,ret = 0;
        for(int x = 0; x <= i; x++)
        {
            if(p[x].sexo == "F" || p[x].sexo == "f")
            {
                cp = cp + 1;//CONTADOR DE PESSOAS
                ss = ss + p[x].salario;//SOMA SALARIO
                ret = (cp / ss);
            }
        }
        ret = (ss / cp);
        cout<<"A média de salário de pessoas do sexo masculino é: " << ret << endl;
}
void opcao5(pessoa p[], int i){
    int maioridade = p[0].idade;
     for(int x = 0; x <= i; x++)
        {
            if(p[x].idade > maioridade){
                cout << "Sexo: " << p[x].sexo << endl;
                cout << "Salario: " << p[x].salario << endl;
            }
        }
}
void opcao6(pessoa p[], int i){
    int menoridade = p[0].idade;
     for(int x = 0; x <= i; x++)
        {
            if(p[x].idade < menoridade){
                cout << "Sexo: " << p[x].sexo << endl;
                cout << "Salario: " << p[x].salario << endl;
            }
        }
}
void opcao7(pessoa p[], int i){
    int mnf = p[0].ndf;
     for(int x = 0; x <= i; x++)
        {
            if(p[x].ndf > mnf){
                cout << "Salario da pessoa com mais filhos: " << p[x].salario << endl;
            }
        }
}

