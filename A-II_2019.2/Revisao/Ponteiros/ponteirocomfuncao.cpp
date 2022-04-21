#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
void leitura();
void ajuste(int *x, int *i);
main()
{
    setlocale(LC_ALL,"Portuguese");
    leitura();

}
void leitura()
{
    int n1, n2;
    cout << "Digite o valor 1:";
    cin >> n1;//pega o valor digitado para n1
    fflush(stdin);//limpa o buffer no teclado

    cout << "Digite o valor 2:";
    cin >> n2;//pega o segundo digito informado
    fflush(stdin);//limpa o buffer no teclado

    cout << "\n\nVALORES NA FUNCAO LEITURA: " << endl;//mostra os valores informados
    cout << "N1: " << n1 << endl;
    cout << " endereço de N1: " << &n1 << endl;
    cout << "N2: " << n2 << endl;
    cout << " endereço de N2: " << &n2 << endl;

    ajuste(&n1, &n2);//ao chamar a função ahjuste pega seus endereços de memória

}
void ajuste(int *x, int *i)//a função ajuste
//attravés de seus endereços na chamada nterior recebe n1 e n2
//e são apontados para os ponteiros x e i
//onde são somados com os valores definidos abaixo.
{
    *x += 4;
    *i -= 2;
    cout << "\n\nVALORES NA FUNCAO AJUSTE: \n";
    //mostra as variaveis com o valores modificados
    cout << "X: " << *x << endl;
    cout << " endereço de X: " << &x << endl;
    cout << "I: " << *i << endl;
    cout << "endereço de i: " << &i << endl;
}

