#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
void gera_valor(int qtn);
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    int qtna;
    bool valid;
    do{cout<<"-----------------------------Aposta------------------------------------"<< endl;
    cout<<" selecione a dimensão do vetor : " << endl;
    cin>>qtna;
     fflush(stdin);
    if(qtna < 1 ){
        cout<<"Quantidade de números inválida. informe novamente!" << endl;
        valid = true;
    }else{
        valid = false;
    }
    }while(valid == true);

    gera_valor(qtna);
}
void gera_valor(int qtn){
    int *p = new int[qtn];
    //int *p2 = new int[qtn];
    cout<<"valores gerados aletóriamente!" << endl;
    srand(time(NULL));
    for(int i = 0; i < qtn;i++){
        p[i] = rand() % 100;
        cout<< p[i] << endl;
    }
        cout<<"vetor na ordem inversa: " << endl;
        for(int in = qtn - 1;in >= 0;in--){
            cout<< p[in] << endl;
        }

        //ver essa ultima parte
        cout<<"troca elementos: " << endl;
        for(int l=0;l <= qtn ;l++){
            int aux = p[l];
            p[l] = p[l - (qtn - l];
            p[qtn - l] = aux;
            cout<<p[l] << endl;
        }
}
