#include<iostream>
#include<cstring>//biblioteca para manipulação de string
using namespace std;
void invertepalavra(char pl[], int tm);
main()
{
    setlocale(LC_ALL,"Portuguese");
    char palavra[50];
    int tamanho;
    cout<<"Informe uma palavra quanlquer: " <<endl;
    gets(palavra);//lê uma string
    fflush(stdin);
    getchar();
    cout<<" Testo lido: " <<endl;
    puts(palavra);//imprime a string na tela
    tamanho = strlen(palavra);//retorna o tamanho de uma string
    //cout<<tamanho;
    invertepalavra(palavra,tamanho);
}
void invertepalavra(char pl[], int tm){
    cout<<" A palavra digitada em forma invertida fica assim: " <<endl;
    for(int i = tm;i >= 0;i--){
        cout<<pl[i];
    }
}
