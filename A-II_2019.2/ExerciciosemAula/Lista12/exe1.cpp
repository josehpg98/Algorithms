#include<iostream>//manipula��o de fluxo de dados padr�o do sistema
#include<cstdlib>//biblioteca para fun��es de aloca��o em mem�ria
#include<iomanip>//manipula��o da apresenta��o e do processamento de fluxos de dados
#include<time.h>//manipula��o de datas e hor�rios
#include<fstream>//manipula fluxo de dados em aruivos de computador
using namespace std;
main ()
{
    //faz com a saida dos textos no padr�o pt-br
    setlocale(LC_ALL,"Portuguese");
    //criar um objeto tanto para leitura, como escrita
    fstream nome_cidade;
    //abre ou cria um arquivo e anexa os dados insertidos no fim do arquivo
    nome_cidade.open("cidadesexe1.txt",ios::app);
    //le os dados do arquivo
    nome_cidade.open("cidadesexe1.txt",ios::in);
    if(nome_cidade.is_open())
    {
        string nmcid;
        ofstream escreve;
        cout<<"informe o nome de uma cidade: " << endl;
        getline(cin,nmcid);
        escreve << nmcid;
    }
}

