#include<iostream>
#include<ctime>
using namespace std;
void geramatriz(int m[][5]);
void mostramatrizpt1(int m[][5]);
void somalinhamatriz(int m[][5]);
void lervalor(int v,int m[][5]);
void mostramatrizpt2(int m[][5]);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int mat[5][5],op,valor = 0, itemenu = -1;
    bool repita;
    do
    {
        cout<<"----- Menu de Ações -----" << endl;
        cout<<" 0 - Sair; " << endl;
        cout<<" 1 - Gerar valores para a matriz; " << endl;
        cout<<" 2 - Mostra matriz, diagonal principal e segcundária; " << endl;
        cout<<" 3 - Apresentar a soma de cada linha da matriz; " << endl;
        cout<<" 4 - Ler um valor e verificar quantas vezes ela aparece na matriz; " << endl;
        cout<<" 5 - Mostrar a matriz com elementos abaixo e acima da diagonal principal; " << endl;
        cout<<" Escolha uma opção: " << endl;
        cin>>op;
        switch(op)
        {
        case 0:
            cout<<" O programa foi encerrado! " << endl;
            break;
        case 1:
            itemenu += 1;
            geramatriz(mat);
            break;
        case 2:
            if(itemenu < 0)
            {
                cout<<"Primeiro execute a opção 1, para gerar a matriz. " << endl;
                break;
            }
            else
            {
                mostramatrizpt1(mat);
                break;
            }
        case 3:
            if(itemenu < 0)
            {
                cout<<"Primeiro execute a opção 1, para gerar a matriz. " << endl;
                break;
            }
            else
            {
                somalinhamatriz(mat);
                break;
            }
        case 4:
            if(itemenu < 0)
            {
                cout<<"Primeiro execute a opção 1, para gerar a matriz. " << endl;
                break;
            }
            else
            {
                cout<<"Informe o valor a ser buscado na matriz: " <<endl;
                cin>>valor;
                lervalor(valor,mat);
                break;
            }
        case 5:
            if(itemenu < 0)
            {
                cout<<"Primeiro execute a opção 1, para gerar a matriz. " << endl;
                break;
            }
            else
            {
                mostramatrizpt2(mat);
                break;
            }
        default:
            cout<<"Opção invalida, tente novamente!" <<endl;
            break;
        }
    }
    while(op != 0);
}
void geramatriz(int m[][5])
{
    srand(time(NULL));
    for(int l = 1; l < 6; l++)
    {
        for(int c = 1; c < 6; c++)
        {
            m[l][c] = rand() % 100;
        }
    }
    cout<<"Matriz gerada com sucesso! " << endl;
}
void mostramatrizpt1(int m[][5])
{
    int indice = 7;
    cout<<"Matriz completa"<<endl;
    for(int l = 1; l < 6; l++)
    {
        for(int c = 1; c < 6; c++)
        {
            cout<<m[l][c]<<"\t";

        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<"Diagonal principal da matriz" <<endl;
    for(int l = 1; l < 6; l++)
    {
        for(int c = 1; c < 6; c++)
        {
            if(l == c)
                cout << m[l][c] << "\t";
        }
    }
    cout<<endl;
    cout<<"Diagonal secundaria da matriz" <<endl;
    for(int l = 1; l < 6; l++)
    {
        for(int c = 1; c < 6; c++)
        {
            if(l + c == indice - 1)
                cout << m[l][c] << "\t";
        }
    }
    cout<<endl;
}
void somalinhamatriz(int m[][5])
{
    int l1 = 0,l2 = 0,l3 = 0,l4 = 0,l5 = 0;
    for(int l = 1; l < 6; l++)
    {
        for(int c = 1; c < 6; c++)
        {
            l1 = m[1][1] + m[1][2] + m[1][3] + m[1][4] + m[1][5];
            l2 = m[2][1] + m[2][2] + m[2][3] + m[2][4] + m[2][5];
            l3 = m[3][1] + m[3][2] + m[3][3] + m[3][4] + m[3][5];
            l4 = m[4][1] + m[4][2] + m[4][3] + m[4][4] + m[4][5];
            l5 = m[5][1] + m[5][2] + m[5][3] + m[5][4] + m[5][5];
        }
    }
    cout<<"linha 0: " << l1 <<endl;
    cout<<"linha 1: " << l2 <<endl;
    cout<<"linha 2: " << l3 <<endl;
    cout<<"linha 3: " << l4 <<endl;
    cout<<"linha 5: " << l5 <<endl;
}
void lervalor(int v,int m[][5])
{
    int cont = 0;
    for(int l = 1; l < 6; l++)
    {
        for(int c = 1; c < 6; c++)
        {
            if(m[l][c] == v)
                cont += 1;
        }
    }
    cout<<"O número " << v << " aparece " << cont << " vezes na matriz!" << endl;
}
void mostramatrizpt2(int m[][5])
{
    cout<<"Elementos acima da diagonal principal " <<endl;
    for(int l = 1; l < 6; l++)
    {
        for(int c = 1; c < 6; c++)
        {
            if(l < c)
            {
                cout<<m[l][c]<<"\t";
            }
        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Elementos abaixo da diagonal principal " <<endl;
    for(int l = 1; l < 6; l++)
    {
        for(int c = 1; c < 6; c++)
        {
            if(l > c)
            {
                cout<<m[l][c]<<"\t";
            }
        }
        cout<<"\n";
    }
}
