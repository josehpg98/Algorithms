#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void geracpf(int v[]);
void mostravalorCPF(int v[]);
void VERIFICACPF(int v[]);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[9];
    geracpf(vet);
    mostravalorCPF(vet);
    VERIFICACPF(vet);
}
void geracpf(int v[]){
    srand(time(NULL));
    for(int i = 0; i < 9;i++){
        v[i] = rand() % 9;
    }
    cout<<"CPF gerado com sucesso!" << endl;
}
void mostravalorCPF(int v[]){
    cout<<"Valores do CPF: " << endl;
    for(int i = 0; i < 9;i++){
       cout<<v[i];
    }
}
void VERIFICACPF(int v[]){
   int d1,d2;
   cout<<endl;
     cout<<"VERICA 1 DIGITO: " << endl;
     for(int i = 0; i < 9;i++){
        d1 = v[0] * 10 + v[1] * 9 + v[2] * 8 + v[3] * 7 + v[4] * 6 + v[5] * 5 + v[6] * 4 + v[7] * 3 + v[8] * 2;
    }

    d1 = (d1 % 11);
    if(d1 < 2){
        d1 = 0;
    }else{
        d1 = 11 - d1;
    }
    cout<<"o primeiro digito é: " << d1 <<endl;


}

