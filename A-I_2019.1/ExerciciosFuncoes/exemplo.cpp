#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;

void mostramensagem();
void mostrarinteiro(int num);
//void mostrardobro(int n);
void mostrasoma(int n1, float n2);
void mostravetor(int v[3]);
//void mostramatriz(int m[3]{3});
float media(float v1, float v2);
//retorno nome e parametros

//variavel global fica aqui, mas naõ e recoemndada.
main()
{
    setlocale(LC_ALL,"Portuquese");
    //chama a função detro do main
    mostramensagem();
    mostramensagem();

    int a = 5, b = 10;

    mostrarinteiro(a);
    mostrarinteiro(b);
    mostrarinteiro(110);

    int f = 10;
    float x = 20.2;
    mostrasoma(10 ,20.2);
    mostrasoma(f, x);

    float med;
    int nm = 10;
    float nm2 = 23.1;

    med = media(nm, nm2);

    cout << "a média de " << nm << " e " << nm2 << " é " << med;
}

void mostramensagem(){
    cout<<"\n olá mundo velho de guerra!";
}
void mostrarinteiro(int num){
     cout<<"\n o numero inteiro é:" << num << endl;

}

//void mostrardobro(int n){

//}
void mostrasoma(int n1, float n2){
    float resultado;
    resultado = n1 + n2;
    cout<<"\n o resultado da soma é: " << resultado << endl;
}

//void mostravetor(int v[3]){
    //int i;
    //for(i = 0; i<3;i++){
        //cout << v[i] << endl;
    //}
    //cout << endl;
//}

//void mostramatriz(int m[3]{3}){

//}
float media(float v1, float v2){
    float res;
    res = v1 + v2 / 2.0;
    return res;
}
