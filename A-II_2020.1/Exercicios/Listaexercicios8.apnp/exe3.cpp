#include<iostream>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    string text;
    int tamanho, contaletras = 0, cesp = 0,contaespaco = 0,contmaiuscula = 0,contminuscula = 0;
    cout<<"Informe um texto qualquer: " << endl;
    getline(cin,text);
    fflush(stdin);
    tamanho = text.size();
    for(int i = 0;i < tamanho;i++){
        if(isalpha(text[i])){
            contaletras += 1;
        }
        if(isalnum(text[i]) == 0){
            cesp += 1;
        }
        if(isspace(text[i])){
            contaespaco += 1;
        }
        if(isupper(text[i])){
            contmaiuscula += 1;
        }
        if(islower(text[i])){
            contminuscula += 1;
        }
    }
    cout<<" Dados da String: " <<endl;
    cout<<"O tamanho da string é de " << tamanho << " caracteres." << endl;
    cout<<"Total de letras: " << contaletras <<endl;
    cout<<"Total de catracteres especiais: " <<cesp <<endl;
    cout<<"Toal de espaços: " <<contaespaco <<endl;
    cout<<"Total de letras maiúsculas: " <<contmaiuscula <<endl;
    cout<<"Total de letras minúsculas: " <<contminuscula <<endl;

}
