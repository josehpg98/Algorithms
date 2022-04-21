#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
void atualizatempo(int *t, int *maiortempo);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int tempo, mt = 0;
    while(tempo != 0){
        cout<<"informe o tempo: " << endl;
        cin>>tempo;
         fflush(stdin);
         atualizatempo(&tempo,&mt);
    }

    cout<<" o tempo mais rápido foi: " << mt << endl;
}
void atualizatempo(int *t, int *maiortempo){
    if(*t > * maiortempo){
        *maiortempo = *t;
    }

}
