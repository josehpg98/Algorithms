#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int A[10],i,op,sv,vl;
    cout<<"\ninforme uma opção:";
    cout<<"\n 1-gerar vetor;";
    cout<<"\n 2-imprimir vetor;";
    cout<<"\n 3- ordenar o vetor em ordem cresecente;";
    cout<<"\n 4-substituir os valores;";
    cout<<"\n 5-sair.";
    cin>>op;
    if(op==1)
    {
    for(i=0; i<20; i++)
    {

        A[i] = rand()%20;

    }
         cout<<"\n vetor gerado com sucesso!";
   }
   else if(op==2)
   {

    for(i=0; i<20; i++)
    {

        cout<<"\n  o valor do vetor na posição do vetor: ["<< i <<"] ";
         cout<< A[i];
    }
   }
   else if(op==4)
   {
       cout<<"\n selecione o vetor a ser substituido: ";
       cin>>sv;
       cout<<"selecione o valor:";
       cin>>vl;
       A[i] = A[sv];
       A[sv] = vl;
       cout<<"\n o valor substituido é " << vl;
   }
}
