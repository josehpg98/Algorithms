#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>//biblioteca para manipular arquivos texto
using namespace std;
void leitura()
{
    cout<<"CRIANDO E ESCREVENDO CONTEÚDO EM UM ARQUIVO TEXTO! " << endl;
    char text[100];
    ofstream teste ("teste.txt",ios::out);
    //cria um arquivo texto.txt tanto para /escrita e abre para escrita.
    cout<<" Informe algum texto: " << endl;
    gets(text);
    fflush(stdin);
    teste<<text;//escreve os dados do texto digitado no arquivo
    //CASO SEJA ABERTO O MESMO ARQUIVO PARA ESCRITA, O CONTWEUDO ANTRIOR SERA APAGADO.
    teste.close();
    system("cls");
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    leitura();
    /** cout<<"CRIANDO E ESCREVENDO CONTEÚDO EM UM ARQUIVO TEXTO! " << endl;
     char text[100];
     ofstream teste ("teste.txt",ios::out);
     //cria um arquivo texto.txt tanto para /escrita e abre para escrita.
     cout<<" Informe algum texto: " << endl;
     gets(text);
     fflush(stdin);
     teste<<text;//escreve os dados do texto digitado no arquivo
     //CASO SEJA ABERTO O MESMO ARQUIVO PARA ESCRITA, O CONTWEUDO ANTRIOR SERA APAGADO.
     teste.close();
     system("cls");**/
     cout<<" LENDO O CONTEUDO DO ARQUIVO! " << endl;
     ifstream tst;
     if(tst.good())//testa se o arquivo foi aberto corretamente
     {
         cout<<"Arquivo aberto com sucesso! " << endl;
         tst.open("teste.txt",ios::in);//abre o arquivo teste
         cout<<endl;
         char t;//para ler os caracteres
         //cout<<"oi \n";
         while(tst.get(t)){//como é char le um caracter por ver até encontrar o fim do arquivo
             cout<<t;
         };
    }
     else
     {
         //caso der erro;
         cout<<"Arquivo aberto com erro! " << endl;
     }
     tst.close();//fecha o arquivo texto**/
}
