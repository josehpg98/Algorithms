#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
   int n,cont=0,n1,n2,n3,n4,n5;
   float m;
    srand(time(nullptr));
     //tempo/hora automatico na execução do comando,onde cada vez que é executado ele atualiza a hora e mostra um número diferente;
   //for (int i = 0; i < 5; i++)
    //{
        //n = rand() % 101;
    //}
    //n = rand() % 101;
    //gerar numeros maiores que 100

    //nesse algoritmo é preciso sortear 5 numeros de forma que
    //a cada passada no laço atualize o rand e seja possivel sortear um
    //novo número. após cada cont ao ser atualiado o laço recebe 
    //um if para receber cada número armazenando-o em uma variável,
    //após é feito as comparações para saber qual número é o maior.
    do
    {
        n = rand() % 101;
        //cout<<"\n o número sorteado foi: " << n;
        cont = cont + 1;

        if(cont == 1)
        {
            n1 = n;
        }
        if(cont == 2)
        {
            n2 = n;
        }
        if(cont == 3)
        {
            n3 = n;
        }
        if(cont == 4)
        {
            n4 = n;
        }
        if(cont == 5)
        {
            n5 = n;
        }
    }while(cont < 5);
         cout<<"\n o 1 número sorteado foi: " << n1;
          cout<<"\n o 2 número sorteado foi: " << n2;
           cout<<"\n o 3 número sorteado foi: " << n3;
            cout<<"\n o 4 número sorteado foi: " << n4;
             cout<<"\n o 5 número sorteado foi: " << n5 << endl;
        if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
        {
            cout<<"\n é o maior número!" << n1;
             if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
             {
                cout<<"\n o menor numero é: " << n2;
             }
             else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
             {
                cout<<"\n o menor numero é: " << n3;
             }
             else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
             {
                cout<<"\n o menor numero é: " << n4;
             }
             else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
             {
                cout<<"\n o menor numero é: " << n5;
             }
        }
        if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
        {
            cout<<"\n é o maior número!" << n2;
             if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
             {
                cout<<"\n o menor numero é: " << n1;
             }
             else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
             {
                cout<<"\n o menor numero é: " << n3;
             }
             else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
             {
                cout<<"\n o menor numero é: " << n4;
             }
             else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
             {
                cout<<"\n o menor numero é: " << n5;
             }
        }
        if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
        {
            cout<<"\n é o maior número!" << n3;
             if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
             {
                cout<<"\n o menor numero é: " << n2;
             }
             else if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
             {
                cout<<"\n o menor numero é: " << n1;
             }
             else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
             {
                cout<<"\n o menor numero é: " << n4;
             }
             else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
             {
                cout<<"\n o menor numero é: " << n5;
             }
        }
        if(n4 > n1 && n4 > n3 && n4 > n2 && n4 > n5)
        {
            cout<<"\n é o maior número!" << n4;
             if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
             {
                cout<<"\n o menor numero é: " << n2;
             }
             else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
             {
                cout<<"\n o menor numero é: " << n3;
             }
             else if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
             {
                cout<<"\n o menor numero é: " << n1;
             }
             else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
             {
                cout<<"\n o menor numero é: " << n5;
             }
        }
        if(n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
        {
            cout<<"\n é o maior número!" << n5;
             if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
             {
                cout<<"\n o menor numero é: " << n2;
             }
             else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
             {
                cout<<"\n o menor numero é: " << n3;
             }
             else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
             {
                cout<<"\n o menor numero é: " << n4;
             }
             else if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
             {
                cout<<"\n o menor numero é: " << n1;
             }
        }
       m = (n1 + n2 + n3 + n4 + n5) / 5;
       cout<<"\n a média é:" << m;

    }

