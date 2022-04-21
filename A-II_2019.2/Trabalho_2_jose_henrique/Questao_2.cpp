#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct aluno
{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};
void cadastraraluno(aluno *c, int &i);
void listaralunos(aluno *c,int i);
main()
{
    setlocale(LC_ALL,"Portuguese");
    aluno *a;
    a = new aluno[30];
    int op;
    int init = -1;
    bool valid = false;
    while (op != 0)
    {
        cout<<endl;
        cout<<"*********** SISTEMA DE CADASTRO DE ALUNOS ***********" << endl;
        cout<<"* 0 - Sair                                *" << endl;
        cout<<"* 1 - Cadastrar Aluno                   *" << endl;
        cout<<"* 2 - Listar Alunos Cadastrados         *" << endl;
        cout<<"* 3 - Buscar Aluno Pelo Nome Completo   *" << endl;
        cout<<"* 4 - Calcular Média                    *" << endl;
        cout<<"* 5 - Mmostrar Aprovados                *" << endl;
        cout<<"*******************************************" << endl;
        cout<<endl<<"Digite uma opção : ";
        cin>>op;
        fflush(stdin);
        switch(op)
        {
        case 0:
            cout<<"Programa encerrado!" << endl;
            break;
        case 1 :
              valid = true;
                cadastraraluno(a,init);
            break;
        case 2 :
            if (valid == true){
                listaralunos(a,init);
            }
            else{
                cout << endl << "Você deve cadasdtrar um aluno ao menos antes de realizar a ação ! ";
            }
            break;
        //case 3 :

            //break;
        //case 4 :


            //break;
        }
    }
}
void cadastraraluno(aluno *c,int &i){
    i++;
    cout<<"Informe o numero da matricula: " << endl;
    cin>>(c[i]).matricula;
    fflush(stdin);

    cout<<"Informe o seu nome completo: " << endl;
    cin>>(c[i]).nome;
    fflush(stdin);

    cout<<"Informe a primeira nota: " << endl;
    cin>>(c[i]).nota1;
     fflush(stdin);

    cout<<"Informe a segunda nota: " << endl;
    cin>>(c[i]).nota2;
     fflush(stdin);

    cout<<"Informe a terceira nota: " << endl;
    cin>>(c[i]).nota3;
     fflush(stdin);

    cout<<"cadastro efetuado com sucesso! " << endl;
    cout << "\n------------------------------\n";
}
void listaralunos(aluno *c,int i){
    for(int p = 0; p <= i;p++){
        cout<<"Matricula: " << c[i].matricula << " ..." << endl;
        cout<<"nome: " << c[i].nome << " ..." << endl;
        cout<<"nota 1: " << c[i].nota1 << " ..." << endl;
        cout<<"nota 2: " << c[i].nota2 << " ..." << endl;
        cout<<"nota 3: " << c[i].nota3 << " ..." << endl;
    }
}
