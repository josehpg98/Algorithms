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
     //tempo/hora automatico na execu��o do comando,onde cada vez que � executado ele atualiza a hora e mostra um n�mero diferente;
   //for (int i = 0; i < 5; i++)
    //{
        //n = rand() % 101;
    //}
    //n = rand() % 101;
    //gerar numeros maiores que 100

    //nesse algoritmo � preciso sortear 5 numeros de forma que
    //a cada passada no la�o atualize o rand e seja possivel sortear um
    //novo n�mero. ap�s cada cont ao ser atualiado o la�o recebe 
    //um if para receber cada n�mero armazenando-o em uma vari�vel,
    //ap�s � feito as compara��es para saber qual n�mero � o maior.
    do
    {
        n = rand() % 101;
        //cout<<"\n o n�mero sorteado foi: " << n;
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
         cout<<"\n o 1 n�mero sorteado foi: " << n1;
          cout<<"\n o 2 n�mero sorteado foi: " << n2;
           cout<<"\n o 3 n�mero sorteado foi: " << n3;
            cout<<"\n o 4 n�mero sorteado foi: " << n4;
             cout<<"\n o 5 n�mero sorteado foi: " << n5 << endl;
        if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
        {
            cout<<"\n � o maior n�mero!" << n1;
             if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
             {
                cout<<"\n o menor numero �: " << n2;
             }
             else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
             {
                cout<<"\n o menor numero �: " << n3;
             }
             else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
             {
                cout<<"\n o menor numero �: " << n4;
             }
             else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
             {
                cout<<"\n o menor numero �: " << n5;
             }
        }
        if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
        {
            cout<<"\n � o maior n�mero!" << n2;
             if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
             {
                cout<<"\n o menor numero �: " << n1;
             }
             else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
             {
                cout<<"\n o menor numero �: " << n3;
             }
             else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
             {
                cout<<"\n o menor numero �: " << n4;
             }
             else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
             {
                cout<<"\n o menor numero �: " << n5;
             }
        }
        if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
        {
            cout<<"\n � o maior n�mero!" << n3;
             if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
             {
                cout<<"\n o menor numero �: " << n2;
             }
             else if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
             {
                cout<<"\n o menor numero �: " << n1;
             }
             else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
             {
                cout<<"\n o menor numero �: " << n4;
             }
             else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
             {
                cout<<"\n o menor numero �: " << n5;
             }
        }
        if(n4 > n1 && n4 > n3 && n4 > n2 && n4 > n5)
        {
            cout<<"\n � o maior n�mero!" << n4;
             if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
             {
                cout<<"\n o menor numero �: " << n2;
             }
             else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
             {
                cout<<"\n o menor numero �: " << n3;
             }
             else if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
             {
                cout<<"\n o menor numero �: " << n1;
             }
             else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
             {
                cout<<"\n o menor numero �: " << n5;
             }
        }
        if(n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
        {
            cout<<"\n � o maior n�mero!" << n5;
             if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
             {
                cout<<"\n o menor numero �: " << n2;
             }
             else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5)
             {
                cout<<"\n o menor numero �: " << n3;
             }
             else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5)
             {
                cout<<"\n o menor numero �: " << n4;
             }
             else if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
             {
                cout<<"\n o menor numero �: " << n1;
             }
        }
       m = (n1 + n2 + n3 + n4 + n5) / 5;
       cout<<"\n a m�dia �:" << m;

    }

