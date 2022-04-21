#include<iostream>
using namespace std;
struct produto
{
    int codigo;
    char nome[50];
    char unidade[20];
    float valorvenda;
    int quantidade;
};
void cadastraproduto(produto *v,int ic)
{
    cout<<"Cadastro de Produtos!" <<endl;
    system("cls");
    cout << "Informe o código do produto: ";
    cin>>v[ic].codigo;
    fflush(stdin);
    cout << "Informe o nome do produto: ";
    gets(v[ic].nome);
    fflush(stdin);
    cout << "Informe a unidade de medida do produto: ";
    gets(v[ic].unidade);
    fflush(stdin);
    cout << "Informe o valor de venda do produto: ";
    cin >> v[ic].valorvenda;
    fflush(stdin);
    cout << "Informe quantidade do produto: ";
    cin >> v[ic].quantidade;
    fflush(stdin);
    cout<<"\n\n";
    cout<<"Produto cadastrado com sucesso!" <<endl;
}
void mostrarprodutos(produto *v,int ic)
{
    system("cls");
    cout<<"Dados dos Produtos Cadastrados " << endl;
    cout<<"\n";
    for(int lp = 0; lp <= ic; lp++)
    {
        cout << "Código do Produto: " << v[lp].codigo<< endl;
        cout << "Nome do Produto: " << v[lp].nome << endl;
        cout << "Unidade do Produto: " << v[lp].unidade << endl;
        cout << "Valor de venda do Produto: " << v[lp].valorvenda << endl;
        cout << "Quantidade do Produto: " << v[lp].quantidade << endl;
        cout << "---------------------------------" << endl;
        //getchar();//agurda o enter do teclado
    }


}
void consultarproduto(produto *v,int ic,int c)
{
    system("cls");
    cout<<"Dados do Produto Consultado" << endl;
    cout<<"\n";
    for(int lp = 0; lp <= ic; lp++)
    {
        if(v[lp].codigo == c)
        {
            cout << "Código do Produto: " << v[lp].codigo<< endl;
            cout << "Nome do Produto: " << v[lp].nome << endl;
            cout << "Unidade do Produto: " << v[lp].unidade << endl;
            cout << "Valor de venda do Produto: " << v[lp].valorvenda << endl;
            cout << "Quantidade do Produto: " << v[lp].quantidade << endl;
            cout << "---------------------------------" << endl;
            getchar();//agurda o enter do teclado
        }
    }
}
void venderproduto(produto *v,int ic,int c,int qtv){
    cout<<"Seçao de venda de produto! " <<endl;
    for(int i = 0;i <= ic;i++){
        if(v[i].codigo == c && v[i].quantidade > qtv){
            cout<<"Dados antes da venda!!" <<endl;
            cout << "Código do Produto: " << v[i].codigo<< endl;
            cout << "Nome do Produto: " << v[i].nome << endl;
            cout << "Unidade do Produto: " << v[i].unidade << endl;
            cout << "Valor de venda do Produto: " << v[i].valorvenda << endl;
            cout << "Quantidade do Produto: " << v[i].quantidade << endl;
            cout << "---------------------------------" << endl;
            cout<<"\n\n";
            v[i].quantidade -= qtv;
            v[i].valorvenda *= qtv;
            cout<<"dados após a venda" <<endl;;
            cout << "Código do Produto: " << v[i].codigo<< endl;
            cout << "Nome do Produto: " << v[i].nome << endl;
            cout << "Unidade do Produto: " << v[i].unidade << endl;
            cout << "Valor depois da venda total do Produto: " << v[i].valorvenda << endl;
            cout << "Quantidade do Produto: " << v[i].quantidade << endl;
            cout << "---------------------------------" << endl;
            getchar();
        }else{
            cout<<"Não foi possivel realizar a venda por falta de estoque!" <<endl;
            getchar();
        }
    }
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    produto *vet = new produto[50];
    int ctrl = -1,op,cod,qt;
    do
    {
        system("cls");
        cout<< "--- Menu de Ações ---" << endl;
        cout<< " 0 - Sair " <<endl;
        cout<< " 1 - Cadastrar Produtos " <<endl;
        cout<< " 2 - Visualizar Produtos " <<endl;
        cout<< " 3 - Consulttar Produto Pelo Código " <<endl;
        cout<< " 4 - Vender Produto " <<endl;
        cout<<"Escolha Uma Opção: " << endl;
        cin>>op;
        fflush(stdin);
        switch(op)
        {
        case 0:
            cout<<"Programa Finalizado!"<<endl;
            break;
            getchar();
        case 1:
             ctrl += 1;
            if(ctrl > 49){
                cout<<"O registro maximo de produtos foi atigindo e o programa sera encerrado!" <<endl;
                op = 0;
                getchar();
                break;
            }else{
            cadastraproduto(vet,ctrl);
            getchar();
            break;
            }
        case 2:
            if(ctrl < 0)
            {
                cout<<"Cadastre um produto primeiro!" << endl;
                getchar();
                break;
            }
            else
            {
                mostrarprodutos(vet,ctrl);
                getchar();
                break;
            }
        case 3:
             if(ctrl < 0)
            {
                cout<<"Cadastre um produto primeiro!" << endl;
                getchar();
                break;
            }
            else
            {
                cout<<"Informe o código do produto para a consulta: " << endl;
                cin>>cod;
                consultarproduto(vet,ctrl,cod);
                getchar();
                break;
            }
        case 4:
            if(ctrl < 0){
                cout<<"Cadastre um produto primeiro!" << endl;
                getchar();
                break;
            }else{
                cout<<"Informe o código do produto para a consulta: " << endl;
                cin>>cod;
                cout<<"Informe a quantidade de venda do produto: " <<endl;
                cin>>qt;
                venderproduto(vet,ctrl,cod,qt);
                getchar();
                break;
            }
        default:
            cout<<"Opção inválida!" << endl;
            getchar();
            break;
        }
    }
    while(op != 0);
}


