#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
struct estudante
{
    string nome;
    int idade;
    string cpf;
    char sexo;
    float media_final;
};
void cadastro(estudante v[], int incremento);
void mostrar(estudante v[],int incremento);
void mostrar_por_sexo(estudante v[],int incremento, char sx);
void percentual(estudante v[], int incremento);
void mostrar_aprovados(estudante v[], int incremento);
main()
{
    setlocale(LC_ALL,"Portuguese");
    estudante vet[20];
    int opcao, controle_menu = -1;
    char sexo;
     system("cls");
    do
    {

        cout<<"Menu de Ações!" << endl;
        cout<<"0 - Sair "<< endl;
        cout<<" 1 - Cadastrar " <<endl;
        cout<<" 2 - Mostrar Todos os Cadastros " <<endl;
        cout<<" 3 - Mostrar Cadastros Filtrando Pelo Sexo " << endl;
        cout<<" 4 - Mostrar Percentual Por Faixa Etária" << endl;
        cout<<" 5 - Mostrar Aprovados " << endl;
        cout<<" Escolha uma opção: " <<endl;
        cin>>opcao;
        fflush(stdin);
        switch(opcao)
        {
        case 0:
            cout<<"O programa foi finalizado! " << endl;
            break;
            getchar();
        case 1:
            controle_menu += 1;
            cadastro(vet,controle_menu);
            break;
            getchar();
        case 2:
            if(controle_menu < 0)
            {
                cout<<"Cadastre um estudante primeiro! " << endl;
                break;
            }
            else
            {
                mostrar(vet,controle_menu);
                break;
                getchar();
            }
        case 3:
            if(controle_menu < 0){
                cout<<"Cadastre um estudante primeiro! " << endl;
                break;
            }else{
                cout<<"Informe o sexo para filtrar: " << endl;
                cin>>sexo;
                fflush(stdin);
            mostrar_por_sexo(vet,controle_menu,sexo);
            break;
            getchar();
            }
        case 4:
             if(controle_menu < 0)
            {
                cout<<"Cadastre um estudante primeiro! " << endl;
                break;
            }
            else
            {
                percentual(vet,controle_menu);
                break;
                getchar();
            }
        case 5:
              if(controle_menu < 0)
            {
                cout<<"Cadastre um estudante primeiro! " << endl;
                break;
            }
            else
            {
                mostrar_aprovados(vet,controle_menu);
                break;
                getchar();
            }
        default:
            cout<<" Opção Inválida! " << endl;
            break;
            getchar();
        }
    }
    while(opcao != 0);
}
void cadastro(estudante v[], int incremento)
{
    system("cls");
    bool verifica;
    cout<<"Você está na sessão de cadastro, seja bem vindo! " << endl;
    do{
    cout<<"Informe seu nome: " << endl;
    getline(cin,v[incremento].nome);
    fflush(stdin);
    cout<<"Informe sua idade: " << endl;
    cin>>v[incremento].idade;
    fflush(stdin);
    cout<<"Informe seu CPF: " << endl;
    getline(cin,v[incremento].cpf);
    if(v[incremento].cpf.size() < 11 or v[incremento].cpf.size() > 11){
        verifica = false;
    }else{
        verifica = true;
    }
    fflush(stdin);
    cout<<"Informe seu sexo: [ F = FEMININO | M = MASCULINO ] " << endl;
    cin>>v[incremento].sexo;
    if(v[incremento].sexo == 'M' or v[incremento].sexo == 'F'){
        //verifica = true;
    }else{
        verifica = false;
    }
    fflush(stdin);
    cout<<"Informe a média final: " << endl;
    cin>>v[incremento].media_final;
    fflush(stdin);
    if(v[incremento].media_final < 0 or v[incremento].media_final > 10){
        verifica = false;
    }
    }while(verifica != true);
    cout<<"\n\n";
    cout<<"Cdastro realizado com sucesso! " << endl;
    getchar();
}
void mostrar(estudante v[],int incremento)
{
    system("cls");
    cout<<"Dados de todos os estudantes cadastrados: " << endl;
    for(int percorrei = 0; percorrei <= incremento; percorrei++)
    {
        cout<<"Nome: " << v[percorrei].nome << endl;
        cout<<"Idade: " << v[percorrei].idade << endl;
        cout<<"CPF: " << v[percorrei].cpf <<endl;
        cout<<"Sexo : " << v[percorrei].sexo << endl;
        cout<<fixed;
        cout.precision(1);
        cout<<"Média Final: " << v[percorrei].media_final << endl;
        cout<<"--------------------------------------------------" <<endl;
    }
}
void mostrar_por_sexo(estudante v[],int incremento, char sx){
    system("cls");
    sx = toupper(sx);
     cout<<"Dados de todos os estudantes filtrado por sexo: " << endl;
    for(int percorrei = 0; percorrei <= incremento; percorrei++)
    {
        if(v[percorrei].sexo == sx){
        cout<<"Nome: " << v[percorrei].nome << endl;
        cout<<"Idade: " << v[percorrei].idade << endl;
        cout<<"CPF: " << v[percorrei].cpf <<endl;
        cout<<"Sexo : " << v[percorrei].sexo << endl;
        cout<<fixed;
        cout.precision(1);
        cout<<"Média Final: " << v[percorrei].media_final << endl;
        cout<<"--------------------------------------------------" <<endl;
        }
    }
}
void percentual(estudante v[],int incremento){
    int contcrianca = 0,contjoven = 0,contadulto = 0,contidoso = 0;
    float pcrianca = 0,pjoven = 0,padulto = 0,pidoso = 0;
    system("cls");
     cout<<"Percentual dos estudantes separados por faixa etária: " << endl;
    for(int percorrei = 0; percorrei <= incremento; percorrei++)
    {
        if(v[percorrei].idade < 12){
            contcrianca += 1;
        }
        if(v[percorrei].idade >= 12 && v[percorrei].idade <= 17 ){
            contjoven += 1;
        }
        if(v[percorrei].idade >= 18 && v[percorrei].idade <= 59 ){
            contadulto += 1;
        }
         if(v[percorrei].idade > 59 ){
            contidoso += 1;
        }
        pcrianca = (contcrianca * 100) / incremento;
        pjoven = (contjoven * 100) / incremento;
        padulto = (contadulto * 100) / incremento;
        pidoso = (contidoso * 100) / incremento;
        cout<<"Percentual de crianças: " << pcrianca <<endl;
        cout<<"Percentual de jovens: " << pjoven <<endl;
        cout<<"Percentual de adultos: " << padulto <<endl;
        cout<<"Percentual de idosos: " <<pidoso <<endl;
        getchar();
    }
}
void mostrar_aprovados(estudante v[], int incremento){
     system("cls");
     cout<<"Dados de todos os estudantes sprovados media final meior ou igual a 6: " << endl;
    for(int percorrei = 0; percorrei <= incremento; percorrei++)
    {
        if(v[percorrei].media_final >= 6){
        cout<<"Nome: " << v[percorrei].nome << endl;
        cout<<"Idade: " << v[percorrei].idade << endl;
        cout<<"CPF: " << v[percorrei].cpf <<endl;
        cout<<"Sexo : " << v[percorrei].sexo << endl;
        cout<<fixed;
        cout.precision(1);
        cout<<"Média Final: " << v[percorrei].media_final << endl;
        cout<<"--------------------------------------------------" <<endl;
        }
    }
}
