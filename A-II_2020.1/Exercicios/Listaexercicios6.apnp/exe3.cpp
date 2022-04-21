#include<iostream>
using namespace std;
struct habitante
{
    int idade;
    char sexo;
    float salario;
    int nf;
};
void cadastrarhabitante(habitante v[],int i);
void mediamasc(habitante v[], int i);
void mediafem(habitante v[], int i);
void maioridade(habitante v[],int i);
void listarhabitantea(habitante v[],int i);
main()
{
    setlocale(LC_ALL,"Portuguese");
    habitante vet[50];
    int controle = 0, escolha;
    do
    {
       // system("cls");
        cout<<"-- Menu de A��es -- " << endl;
        cout<<" 1 - Cadastrar habitantes " <<endl;
        cout<<" 2 - M�dia de sal�rio das pessoas do sexo masculino " <<endl;
        cout<<" 3 - M�dia de sal�rio das pessoas do sexo feminino " <<endl;
        cout<<" 4 - Sexo e sal�rio da pessoa com maior idade " <<endl;
        cout<<" 5 - Sexo e sal�rio da pessoa com menor idade " <<endl;
        cout<<" 6 - Sal�rio da pessoa com maior n�mero de filhos " <<endl;
        cout<<" 7 - Listar todos os habitantes cadastrados " << endl;
        cout<<" 0 - sair " <<endl;
        cout<<"Escolha sua op��o: " <<endl;
        cin>>escolha;
        switch(escolha)
        {
        case 0:
            cout<<"O programa foi finalizado!" << endl;
            getchar();
            break;
        case 1:
            controle += 1;
            if(controle > 49){
                cout<<" O program j� totalizou seu cadastro de habitantes e ser� encerrado! " << endl;
                escolha = 0;
                getchar();
                break;
            }else{
                cadastrarhabitante(vet,controle);
                getchar();
                break;
            }
        case 2:
            if(controle <= 0){
                cout<<"Peimeiro cadastre habitantes " << endl;
                getchar();
                break;
            }else{
                mediamasc(vet,controle);
                getchar();
                break;;
            }
         case 3:
            if(controle <= 0){
                cout<<"Peimeiro cadastre habitantes " << endl;
                getchar();
                break;
            }else{
                mediafem(vet,controle);
                getchar();
                break;;
            }
         case 4:
            if(controle <= 0){
                cout<<"Peimeiro cadastre habitantes " << endl;
                getchar();
                break;
            }else{
                maioridade(vet,controle);
                getchar();
                break;;
            }
        case 7:
             if(controle <= 0){
                cout<<"Peimeiro cadastre habitantes " << endl;
                getchar();
                break;
            }else{
                listarhabitantea(vet,controle);
                getchar();
                break;;
            }
        default:
            cout<<"Op��o inv�lida!" << endl;
            getchar();
            break;
        }
    }
    while(escolha != 0);

}
void cadastrarhabitante(habitante v[],int i){
    system("cls");
    cout<<"Cadastro de Habitantes" <<endl;
    cout<<" Informe a idade: " <<endl;
    cin>>v[i].idade;
    cout<<" Informe o sexo (F - Feminino | M -  Masculino): " <<endl;
    cin>>v[i].sexo;
    cout<<" Informe o sal�rio: " <<endl;
    cin>>v[i].salario;
    cout<<" Informe o n�mero de filhoS " <<endl;
    cin>>v[i].nf;
    cout<<"\n\n";
    cout<<"Cadastro realizado com sucesso! " <<endl;
    getchar();
}
void mediamasc(habitante v[], int i){
    float md;
    int contador = 0;
    system("cls");
    cout<<"M�dia de sal�rio das pessoas do sexo masculino! " <<endl;
    for(int pi = 1;pi <= i;pi++){
        if(v[pi].sexo == 'M' || v[pi].sexo == 'm'){
            md += v[pi].salario;
            contador += 1;
            //cout<<" A M�DIA DE SAL�RIO DE PESSOAS DO SEXO MASCULINO � : " << v[pi].salario <<endl;
            //getchar();
        }
    }
    md = (md / contador);
    cout<<" A M�DIA DE SAL�RIO DE PESSOAS DO SEXO MASCULINO � : " <<md <<endl;
    getchar();
}
void mediafem(habitante v[], int i){
    float md;
    int contador = 0;
    system("cls");
    cout<<"M�dia de sal�rio das pessoas do sexo feminino! " <<endl;
    for(int pi = 1;pi <= i;pi++){
        if(v[pi].sexo == 'F' || v[pi].sexo == 'f'){
            md += v[pi].salario;
            contador += 1;
            //cout<<" A M�DIA DE SAL�RIO DE PESSOAS DO SEXO MASCULINO � : " << v[pi].salario <<endl;
            //getchar();
        }
    }
    md = (md / contador);
    cout<<" A M�DIA DE SAL�RIO DE PESSOAS DO SEXO FEMININO � : " <<md <<endl;
    getchar();
}
void listarhabitantea(habitante v[],int i){
    system("cls");
    cout<<" Listagem de habitantes! " << endl;
    for(int pi = 1;pi <= i;pi++){
        cout<<"idade: " << v[pi].idade <<endl;
        cout<<"sexo: " << v[pi].sexo <<endl;
         cout<<"salario: " << v[pi].salario <<endl;
          cout<<"Numero de filhos: " << v[pi].nf <<endl;
          cout<<"--------------------------"<<endl;
          //getchar();
    }
}
void maioridade(habitante v[],int i){
    int maiorid = v[1].idade;
        system("cls");
    cout<<" Listagem de habitante com maior idade! " << endl;
    for(int pi = 1;pi <= i;pi++){
            if(v[pi].idade > maiorid){
                    maiorid = v[pi].idade;
        cout<<"sexo: " << v[pi].sexo <<endl;
         cout<<"salario: " << v[pi].salario <<endl;
          cout<<"--------------------------"<<endl;
          //getchar();
    }
    }
}
