#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");


   int x = 10;//declara��o de variavel do tipo inteiro, recebendo o valor 10

   int *ponteiro1;//declara��o de ponteiro padronizada
   //este ponteiro receber� um valor contido em um endere�o de mem�ria do tipointeiro.

   ponteiro1 = &x;//ponteiro recebe o endere�o de mem�ria onde est� o valor, onde o endere�o
   //deste ponteiro ta apontando pro endere�o de x

   //int *ponteiro = &x; criando um ponteiro e ja apontando  para o endere�o de memor�moria da variavel x

   //lembre-se:

   //*ponteiro = o valor do ponteiro � igual a tal valor

   //ponteiro = endere�o de me�ria
   cout<<"mostra o endere�o de mem�ria que o ponteiro esta acessando: " << ponteiro1 << endl;
    cout<<"mostra o valor o ponteiro esta acessando: " << *ponteiro1 << endl;
     cout<<"mostra o endere�o de mem�ria que o ponteiro esta acessando, mas por meio do & comercial: " << &ponteiro1 << endl;
      cout<<"mostra o valor que o ponteiro esta acessando, com 2(*) e 1(&): " << **&ponteiro1 << endl;
}
