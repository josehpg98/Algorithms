#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
void ler_valores(int *valor1,int *valor2,int *valor3);
void mostra_valores_crescente(int *valor1,int *valor2,int *valor3);
void mostra_valores_pares(int *valor1,int *valor2,int *valor3);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int opcao,controle = -1,v1,v2,v3;
    do
    {
        system("cls");
        cout<<"--- Menu de Ações --- " << endl;
        cout<<" 0 - Sair: " << endl;
        cout<<" 1 - Ler Valores: " << endl;
        cout<<" 2 - Mostrar Valores em Ordem Cresecente: " << endl;
        cout<<" 3 - Mostrar Valores Pares Entre o Maior e Menor Valor: " << endl;
        cout<<" Escolha sua opção: " << endl;
        cin>>opcao;
        fflush(stdin);
        getchar();
        switch(opcao)
        {
        case 0:
            cout<<"O program foi finalizado! " << endl;
            getchar();
            break;
        case 1:
            controle += 1;
            ler_valores(&v1,&v2,&v3);
            getchar();
            break;
        case 2:
            if(controle < 0)
            {
                cout<<"Primeiro leia os valores! "<< endl;
                getchar();
                break;
            }
            else
            {
                mostra_valores_crescente(&v1,&v2,&v3);
                getchar();
                break;
            }
        case 3:
              if(controle < 0)
            {
                cout<<"Primeiro leia os valores! "<< endl;
                getchar();
                break;
            }
            else
            {
                mostra_valores_pares(&v1,&v2,&v3);
                getchar();
                break;
            }
        default:
            cout<<"Opção inválida! " << endl;
            getchar();
            break;
        }
    }
    while(opcao != 0);
}
void ler_valores(int *valor1,int *valor2,int *valor3)
{
    cout<<" Você está na função leitura! " << endl;
    cout<<"\n";
    cout<<" Informe um valor para o primeiro valor: " << endl;
    cin>>*valor1;
    fflush(stdin);
    cout<<" Informe um valor para o segundo valor: " << endl;
    cin>>*valor2;
    fflush(stdin);
    cout<<" Informe um valor para o terceiro valor: " << endl;
    cin>>*valor3;
    fflush(stdin);
    cout<<"\n";
    cout<<"Valores cadastrados com sucesso! " << endl;
    cout<<"-----------------------------------------------------" << endl;
    cout<<"\n";
    //getchar();
}
void mostra_valores_crescente(int *valor1,int *valor2,int *valor3)
{
    cout<<"Você está na função mostra valores em forma crescente! " << endl;
    int aux;
    int vet[] = {*valor1,*valor2,*valor3};
     for(int i = 0;i<3;i++){
            for(int j = 0;j<i;j++){
                    if(vet[i] < vet[j]){
                        aux = vet[i];
                        vet[i] = vet[j];
                        vet[j] = aux;
                    }
            }
    }
    cout<<"ordem crescente dos valores lidos! "<<endl;
    for(int i = 0;i<3;i++){
            cout<<vet[i]<<" ";
    }
}
void mostra_valores_pares(int *valor1,int *valor2,int *valor3)
{
    cout<<"Você está na função para mostrar os valores pares entre o maior e menor valor lido anteriormente: " << endl;
    int aux, maior,menor;
    int vet[] = {*valor1,*valor2,*valor3};
     for(int i = 0;i<=2;i++){
            for(int j = 0;j<i;j++){
                    if(vet[i] < vet[j]){
                        aux = vet[i];
                        vet[i] = vet[j];
                        vet[j] = aux;
                    }
            }
    }
    //cout<<"ordem crescente dos valores lidos! "<<endl;
    for(int i = 0;i<=2;i++){
            //cout<<vet[i]<<" ";
            maior = vet[2];
            menor = vet[0];
    }
    //cout<<maior;
    //cout<<menor;
    for(int p = maior;p >= menor;p--){
        if(p % 2 == 0){
            cout<<p << " , ";
            //getchar();
        }
    }
}
