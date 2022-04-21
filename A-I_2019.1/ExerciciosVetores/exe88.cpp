#include<iostream>
#include<clocale>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
main()

{
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");
    float b[10],pp = 0, ma = 0, me = 0;
    int c = 0;
    for(int i = 0; i <= 10; i++)
    {
        cout<<"\n informe um valor para a variavel do vetor (em posição " << i << "): ";
       //cin>>b[i];
        b[i]= rand() % 100;
        ma = b[0];
        me = b[0];
        for(int i = 0; i <= 10; i++)
        {

            if(b[i] > ma)
            {
                ma = b[i];
            }
            if( b[i] < me)
            {
                me = b[i];
            }
        }

    }
    cout<<"\n o maior valor da variavel x aparece no vetor  é: " << ma;
    cout<<"\n o menor valor da variavel x aparece no vetor  é: " << me;
}








