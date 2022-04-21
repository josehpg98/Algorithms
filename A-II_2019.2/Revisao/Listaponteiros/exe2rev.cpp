#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int lertempo();
main()
{
    setlocale(LC_ALL,"Portuguese");
    int ret;
       ret =  lertempo();
       cout<<"o melhor tempo foi " << ret << endl;


}
int lertempo(){
    int tmp,retorno;
    int *mtp;

    while(tmp != 0){
        cout<<"informe o tempo da corrida: " << endl;
        cin>>tmp;
         mtp = &tmp;
        //cout<<"tempo lido: " << tmp << endl;
        if(*mtp < tmp){
            *mtp = tmp;
            retorno = *mtp;
        }
    }
    return retorno;
}
