#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;
void geravetor(int v[]);
void mediavetor(int v[]);
void mostravetor(int v[]);
void ordenacrescente(int v[]);
void maiormenor(int v[]);
void mostrapares(int v[]);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int op = -1;
    int v[10];
    do{
        cout<<"#####MENU DE AÇÕES#####" << endl;
        cout<<" 1 - Gerar Valores Randômicos para o Vetor " << endl;
        cout<<" 2 - Mostrar Média de Valores do Vetor " << endl;
        cout<<" 3 - Motrar  o Vetor " << endl;
        cout<<" 4 - Ordenar Valores de Forma Crescente do Vetor " << endl;
        cout<<" 5 - Mostrar  Maior e Menor Valor do Vetor " << endl;
        cout<<" 6 - Mostrar Valores pares do Vetor " << endl;
        cout<<" Ecolha uma opção: " << endl;
        cin>>op;
        fflush(stdin);
        cout<< endl;
        switch(op)
        {
        case 0:
            cout<<"Programa Encerrado!" << endl;
            break;
        case 1:
            geravetor(v);
            break;
        case 2:
            mediavetor(v);
            break;
        case 3:
            mostravetor(v);
            break;
        case 4:
            ordenacrescente(v);
        case 5:
            maiormenor(v);
            break;
        case 6:
            mostrapares(v);
            break;
        }
    }while(op != 0);
}
void geravetor(int v[]){
     srand(time(NULL));
     int i;
     for(i = 0;i < 10;i++){
        v[i] = rand() % 49;
     }
     cout<<"vetor gerado com sucesso!" << endl;
}
void mediavetor(int v[]){
    float s = 0;
    for(int i = 0;i < 10;i++){
        s = s + v[i];
    }
    s = (s / 10);
    cout<<"a Média de valores do vetor é: " << s << endl;
}
void mostravetor(int v[]){
    for(int i = 0;i < 10;i++){
        cout << v[i] << endl;
    }
}
void ordenacrescente(int v[]){
    for(int i =0;i < 10;i++){
        int temporario;
        for(int p = 0; p < 9;p++){
             if (v[i] < v[p]) //SE O valor do INDICE "i" for menor do que o valor do indice j
            {
                temporario = v[p];
                v[p] = v[i];
                v[i] =temporario;

            }
        }
    }

    cout<<"vetor ordenado de forma crescente: " << endl;
    for(int c = 0;c < 10;c = c + 1){
        cout<< v[c] << endl;
    }
}
void maiormenor(int v[]){
    int maior,menor;
    maior  = v[0];
    menor = v[0];
    for(int i = 0;i < 10;i++){

        if(v[i] > maior){
            maior = v[i];
        }
        if(v[i] < menor){
            menor = v[i];
        }
    }
    cout<<"o maior valor é: " << maior << endl;
    cout<<"o menor valor é: " << menor << endl;
}
void mostrapares(int v[]){
     for(int i = 0;i < 10;i++){
        if(v[i] % 2 == 0){
            cout<< v[i] << endl;
        }

    }

}
