#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
void ler(int **lin, int **col);
void gerarvalores(float *m, int tam);
void mostrar(float *m,int tam, int col);
using namespace std;
//vetor e matrizes nao precisa de ponteiro para ponteiro
//pois pode-se replicar os endere�os de maneira a n�o dar colapso no programa
main()
{
    //*p++ //tenta incrementar o endere�o, depois o valor encotrado
    //*(p++)// acha o endere�o e incremanta o valor
    //tema: fazer esse exercicio s� com ponteiro e aloca��o dinamica
    setlocale(LC_ALL, "Poeruguese");
    int *l,*c;
    float *mat;
    l = new int;
    c = new int;
    ler(&l, &c);
    //cout<< l << endl;
    //cout<< c << endl;
    mat = new float(*c * *l);
    gerarvalores(mat,(*c * *l));

    //int x = 0;
    //int i = 0;

    //while(x < ((*c * *l))){
        //cout<< *mat <<"\t";
        //mat++;
        //i++;
        //if(i == *c){
            //cout<< "\n";
           // i = 0;
       //}
        //x++;
    //}
    mostrar(mat,(*c * *l),*c);
}
void ler(int **lin, int **col){
    cout<<"informe o n�mero de linhas: " << endl;
    cin>>**lin;
    fflush(stdin);

    cout<<"informe o n�mero de coluhas: " << endl;
    cin>>**col;
    fflush(stdin);
}
void gerarvalores( float *m, int tam){
    cout<< endl;
    srand(time(NULL));
    for(int x = 0;x < tam;x++){
        *m = ((rand() % 100) * 1.112);
        //cout<< *m << endl;
        m++;
    }
}
void mostrar(float *m,int tam, int col){
    int x = 0;
    int i = 0;
    float maior,menor, soma = 0;
    while(x < tam){
        if(x == 0){
            maior = *m;
            menor = *m;
        }else{
            if(*m > maior){
                maior = *m;
            }
            if(*m < menor){
                menor = *m;
            }
            soma = soma + *m;
            cout<< *m << "\t";
            m++;
            i++;
            if(i == col){
                cout<< endl;
                i = 0;
            }
            x++;
        }
        cout<< endl << endl;
        cout<<"maior valor: " << maior << endl;
        cout<<"menor valor: " << menor << endl;
        cout<<"somaa dos valores: " << soma << endl;
    }
}
