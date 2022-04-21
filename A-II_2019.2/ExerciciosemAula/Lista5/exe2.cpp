#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

string lertexto();
int quantasletras(string t);

main()
{
    setlocale(LC_ALL, "Portuguese");
    int op = -1, i = -1,resp;
    string r;
    do
    {
        system("cls");
        cout<<" MENU DE AÇÕES " << endl;
        cout<<" 0 - SAIR" << endl;
        cout<<" 1 - LER TEXTO " << endl;
        cout<<" 2 - QUANTIDADE DE LETRAS " << endl;
        cout<<" 3 - QUANTIDADE DE NÚMEROS " << endl;
        cout<<" 4 - QUANTIDADE DE CARCTERES ESPECIAIS " << endl;
        cout<<" 5 - MOSTRA TEXTO POR PALAVRA " << endl;
        cout<<" 6 - MOSTRA O TEXTO EM MAIUSCULO E MINUSCULO " << endl;
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
            r = lertexto();
            cout<<"o texxto informado foi: " << r << endl;
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 2 :
            system("cls");
            if(i < 0)
                cout << "Nâo existem textos cadastrados!" << endl;
            else
            {
                quantasletras(r);
                cout<<"a quantidade de letras é " << resp << endl;
            }
            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 3:
            system("cls");

            cout << "Aperte enter!" << endl;
            getchar();
            break;
         case 4:
            system("cls");

            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 5:
            system("cls");

            cout << "Aperte enter!" << endl;
            getchar();
            break;
        case 6:
            system("cls");

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
string lertexto(){
    i++;
    string t;
    cout<<"informe o texto: " << endl;
    cin>>t;
    return t;
}
int quantasletras(string t){
    int r = t.size();
    return r;
}
