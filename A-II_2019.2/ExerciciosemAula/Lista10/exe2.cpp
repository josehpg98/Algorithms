#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cstdlib>
using namespace std;
void geravalores(int *v);
void mostrarvalores(int *v);
void maiormenor(int *v);
void parouimpar(int maior, int menor);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int *vetor = new int[20];
    geravalores(vetor);//funcão inicializavel chamanda no main

}
void geravalores(int *v)
{
    srand(time(NULL));
    for(int i = 0; i < 20; i++)
    {
        v[i] = rand() % 100;//v recebe valores randomicos na posição i
        //v++;//contador para v aumentar ce posição
    }
    //v -= 20;//volta ao indice zero
    cout<<"vetor gerado com sucesso! " << endl;
    mostrarvalores(v);//chama a proxima unção com o ponteiro
}
void mostrarvalores(int *v)
{

    cout<<" ----------------------------------------- " <<endl;
    cout<<" valores do vetor mostrados na tela: " <<endl;
    for(int i = 0; i < 20; i++)
    {
        cout<< v[i] << endl;
        //v++;
    }
    //v-=20;//volta a o endereço zero
    maiormenor(v);
}
void maiormenor(int *v)
{
   int **maior;//ponteiro de ponteiro
   int **menor;
   maior = &v;//receb oendereço de memória de v
   menor = &v;
   int ma = **maior;//ma recebe o pp*
   int me = **menor;
   for(int i = 0;i < 20;i++){
    if(v[i] > ma){//v na posição i for maior que ma
        ma = v[i];//ma recebe v[i]
    }else if(v[i] < me){//se v na pos. i for menor que me
        me = v[i];//me recebe v[i]
    }
   }
   cout<<"maior valor do vetor: " << ma << endl;
   cout<<"menor valor do vetor: " << me << endl;
   parouimpar(ma,me);//chama prox. função
}
void parouimpar(int maior, int menor)
{
   if(maior % 2 == 0){
        cout<<"o maior número é par! " << endl;
   }else{
        cout<<"o maior número é impar! " << endl;
   }

   if(menor % 2 == 0){
        cout<<"o maior número é par! " << endl;
   }else{
        cout<<"o maior número é impar! " << endl;
   }
}
