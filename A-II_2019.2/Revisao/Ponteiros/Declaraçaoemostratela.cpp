#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");


   int x = 10;//declaração de variavel do tipo inteiro, recebendo o valor 10

   int *ponteiro1;//declaração de ponteiro padronizada
   //este ponteiro receberá um valor contido em um endereço de memória do tipointeiro.

   ponteiro1 = &x;//ponteiro recebe o endereço de memória onde está o valor, onde o endereço
   //deste ponteiro ta apontando pro endereço de x

   //int *ponteiro = &x; criando um ponteiro e ja apontando  para o endereço de memor´moria da variavel x

   //lembre-se:

   //*ponteiro = o valor do ponteiro é igual a tal valor

   //ponteiro = endereço de meória
   cout<<"mostra o endereço de memória que o ponteiro esta acessando: " << ponteiro1 << endl;
    cout<<"mostra o valor o ponteiro esta acessando: " << *ponteiro1 << endl;
     cout<<"mostra o endereço de memória que o ponteiro esta acessando, mas por meio do & comercial: " << &ponteiro1 << endl;
      cout<<"mostra o valor que o ponteiro esta acessando, com 2(*) e 1(&): " << **&ponteiro1 << endl;
}
