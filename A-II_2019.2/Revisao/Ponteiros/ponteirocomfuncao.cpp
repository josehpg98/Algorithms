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
    cout << " endere�o de N1: " << &n1 << endl;
    cout << "N2: " << n2 << endl;
    cout << " endere�o de N2: " << &n2 << endl;

    ajuste(&n1, &n2);//ao chamar a fun��o ahjuste pega seus endere�os de mem�ria

}
void ajuste(int *x, int *i)//a fun��o ajuste
//attrav�s de seus endere�os na chamada nterior recebe n1 e n2
//e s�o apontados para os ponteiros x e i
//onde s�o somados com os valores definidos abaixo.
{
    *x += 4;
    *i -= 2;
    cout << "\n\nVALORES NA FUNCAO AJUSTE: \n";
    //mostra as variaveis com o valores modificados
    cout << "X: " << *x << endl;
    cout << " endere�o de X: " << &x << endl;
    cout << "I: " << *i << endl;
    cout << "endere�o de i: " << &i << endl;
}

