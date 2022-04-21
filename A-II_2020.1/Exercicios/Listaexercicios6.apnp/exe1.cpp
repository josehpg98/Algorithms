#include<iostream>
using namespace std;
struct notas_alunos
{
    char nome[60];
    float n1;
    float n2;
    float n3;
    float n4;
    float media = 0;
};
void cadastraralunos(notas_alunos v[],int i);
void listaralunos(notas_alunos v[],int i);
void maiorqueseis(notas_alunos v[],int i);
main()
{
    setlocale(LC_ALL,"Portuguese");
    notas_alunos vet[30];
    int esc,c =  -1;
    do
    {
        cout<<"--- Menu de Ações --- " <<endl;
        cout<<" 0 - Sair " <<endl;
        cout<<" 1 - Cadastrar notas de alunos " <<endl;
        cout<<" 2 - listar todas as notas dos alunos" <<endl;
        cout<<" 3 - Mostrar alunos com média maior que 6" <<endl;
        cout<<"sua escolha: " << endl;
        cin>>esc;
        fflush(stdin);
        switch(esc)
        {
        case 0:
            cout<<" Programa finalizado!" <<endl;
            getchar();
            break;
        case 1:
            c += 1;
            if(c > 29)
            {
                cout<<" O cadastro já totalizou os 30 alunos permitidos!!" << endl;
                getchar();
                break;
            }
            else{
                cadastraralunos(vet,c);
                getchar();
                break;
            }
        case 2:
            if(c < 0){
                cout<<"Primeiramente cadastre as notas dos alunos!" << endl;
                getchar();
                break;
            }else{
                listaralunos(vet,c);
                getchar();
                break;
            }
        case 3:
             if(c < 0){
                cout<<"Primeiramente cadastre as notas dos alunos!" << endl;
                getchar();
                break;
            }else{
                maiorqueseis(vet,c);
                getchar();
                break;
            }
        default:
            cout<<"Opção inválida!"<<endl;
            }
    }
    while(esc != 0);
}
void cadastraralunos(notas_alunos v[],int i){
    cout<<"Cadastro de Notas de Alunos!" <<endl;
    system("cls");
    cout << "Informe o nome do aluno: ";
    gets(v[i].nome);
    fflush(stdin);
    cout << "Informe a primeira nota: ";
    cin >> v[i].n1;
    fflush(stdin);
    cout << "Informe a segunda nota: ";
    cin >> v[i].n2;
    cout << "Informe a terceira nota: ";
    cin >> v[i].n3;
    cout << "Informe quarta nota: ";
    cin >> v[i].n4;
    fflush(stdin);
    cout<<"\n\n";
    cout<<"Aluno cadastrado com sucesso!" <<endl;
    getchar();
}
void listaralunos(notas_alunos v[],int i){
    system("cls");
    cout<<"Listagem de alunos!" <<endl;
    for(int pi = 0; pi <= i;pi++){
        cout<<"Nome: " << v[pi].nome <<endl;
        cout<<"N1: " << v[pi].n1 <<endl;
        cout<<"N2: " << v[pi].n2 <<endl;
        cout<<"N3: " << v[pi].n3 <<endl;
        cout<<"N4: " << v[pi].n4 <<endl;
        v[pi].media = ((v[pi].n1 * 2) + (v[pi].n2 * 2) + (v[pi].n3 * 1) + (v[pi].n4 * 5));
        v[pi].media /= 10;
        cout<<"Média do aluno: " << v[pi].media << endl;
        cout<<"-------------------------------" <<endl <<endl;

    }
}
void maiorqueseis(notas_alunos v[],int i){
    system("cls");
    cout<<"Listagem de alunos aprovados com media maior ou igual a 6!" <<endl;
    for(int pi = 0; pi <= i;pi++){
            if(v[pi].media >= 6){
        cout<<"Nome: " << v[pi].nome <<endl;
        cout<<"Média do aluno: " << v[pi].media << endl;
        cout<<"-------------------------------" <<endl <<endl;
            }
    }
}
