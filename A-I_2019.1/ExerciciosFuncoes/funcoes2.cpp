#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdlib>

using namespace std;

void mostraMensagem();
void mostrarInteiro(int numero);
void mostrarDobro(int numero);

void mostrarEIncrementa();

void mostraSoma(int n1, float n2);

int global = 100;

main()
{
    setlocale(LC_ALL, "portuguese");

    mostraMensagem();
    mostraMensagem();
    mostraMensagem();

    int a= 5, b= 10;

    mostrarInteiro(a);
    mostrarInteiro(b);
    mostrarInteiro(110);

    mostrarDobro(a);
    mostrarDobro(b);

    global = global + 10;
    mostrarEIncrementa();
    mostrarEIncrementa();
    mostrarEIncrementa();

    int x = 10;
    float f = 20.2;
    mostraSoma(5, 10.5);
    mostraSoma(x, f);

}


void mostrarEIncrementa(){
    cout << "Valor de global:" << global << endl;

    global = global + 10;
}

void mostraMensagem(){
    cout << "Olá mundo!!" << endl;
}

void mostrarInteiro(int numero){
    cout << "O número recebido pela função é:" << numero << endl;
}

void mostrarDobro(int numero){
    int a = numero * 2;
    cout << "O número recebido pela função é:" << numero << endl;
    cout << "O dobro é:" << a << endl;
}


void mostraSoma(int n1, float n2){

    float resultado;

    resultado = n1 + n2;

    cout << "O resultado da soma é: " << resultado << endl;
}
