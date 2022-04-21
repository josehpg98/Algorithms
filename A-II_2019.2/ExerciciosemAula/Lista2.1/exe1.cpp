#include <iostream> //biblioteca para leitura e escrita no disco
#include <clocale>  //biblioteca para inclusão do padrão portugês brasileiro
#include <cstdio>   //biblioteca padrão de entrada e saída
#include <cstdlib>  //biblioteca para emular o prompt de comando ou terminal
#include <ctime>    //bibilioteca para dados e horário
using namespace std;
void geravetor(int vet[10]);
float mediavetor(int v[10]);
main()
{
    setlocale(LC_ALL, "Portuguese"); //transforma o padrão de escrita do teclado em brasileiro

    int vet[10];
    float m = 0;
    geravetor(vet); //chama a função gera vetor
     m = mediavetor(vet);//chama a função mediavetor
     cout<<"A média dos valores: " << m << endl;

}
void geravetor(int vet[10]){ //função pra grar o vetor
    srand(time(NULL)); //zera o rand para gerar os valores randomicos
    cout << " vetor gerado " << endl;
    
    for (int i = 0; i <= 9; i++){//for para percorrer e alocar os valores do vetor
        vet[i] = rand() % 50;   //recebe os valores do vetor
        cout << vet[i] << endl; //mostra os valor do vetor
     
    }
        float mediavetor(int v[10]){//função para cálcular a média de valores do vetor
        float r = 0;
        int s = 0;
        for (int i = 0; i <= 9; i++)
        {
          s = s + v[10];
        }
        r = (s / 10);
        return r;
       } 
   
}
