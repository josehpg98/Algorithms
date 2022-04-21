#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
void leitura_tempo(float *tempo,float *melhortempo){
    int volta;
    volta += 1;
    cout<<"Informe um tempo para " << volta << " volta ( Obs: ao digitar o valor zero, o programa é encerrado) : " << endl;
    cin>>*tempo;
    fflush(stdin);
    if(*tempo < *melhortempo && *tempo != 0){
        *melhortempo = *tempo;
    }
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    float temp, mtemp = 10000;
   do{
        leitura_tempo(&temp,&mtemp);
   }while(temp > 0);
    cout<<"Melhor tempo foi: " << mtemp << " segundos " << endl;
}
