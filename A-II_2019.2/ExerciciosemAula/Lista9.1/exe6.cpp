#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
void gera_valor_apostador(int qtn);
void gera_valores_sistema();
void compara_valores(int qtn);
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    int qtna;
    bool valid;
    do{cout<<"-----------------------------Aposta------------------------------------"<< endl;
    cout<<" selecione a quantidade de n�meros entre 1 e 20 que deseja apostar: " << endl;
    cin>>qtna;
     fflush(stdin);
    if(qtna < 1 or qtna > 20){
        cout<<"Quantidade de n�meros inv�lida. informe novamente!" << endl;
        valid = true;
    }else{
        valid = false;
    }
    }while(valid == true);

    gera_valor_apostador(qtna);
      compara_valores(qtna);
}
void gera_valor_apostador(int qtn){
    int *p = new int[qtn];
    cout<<"valores gerados alet�riamente para o apostador!" << endl;
    srand(time(NULL));
    for(int i = 0; i < qtn;i++){
        p[i] = rand() % 100;
        cout<< p[i] << endl;
    }
        gera_valores_sistema();



}
void gera_valores_sistema(){
     cout<<" os 20 valores gerados alet�riamente pelo computador!" << endl;
        int *p2 = new int[20];
        srand(time(NULL));
        for(int i = 0; i < 20;i++){
            p2[i] = rand() % 100;
            cout<< p2[i] << endl;
        }

}
void compara_valores(int qtn){
    int *p1 = new int[qtn];
    int *p2 = new int[20];
    int cont = 0;
    for(int e = 0;e < qtn;e++){
        for(int i = 0;i < 20;i++){
            if(p1[e] == p2[i]){
                cont += 1;
                cout<<"voc� acertou " << cont << " n�meros! " << endl;
                cout<< p1[e] << endl;
            }
        }
    }
}
