#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float n,nd;
    int c = 0;
    srand(time(NULL));
    //tempo/hora automatico na execu��o do comando,onde cada vez que � executado ele atualiza a hora e mostra um n�mero diferente;
    n = rand() % 10;
    //gerar numeros maiores que 100

    do
    {
        cout<<"\n tente adivinhar o numero sorteado: ";
        cin>>nd;
        if(n == nd)
        {
            cout<<"\n parab�ns voc� acertou o n�mero! ";
            break;
        }
        if(n > nd)
            {
                cout<<"\no numero sorteado � maior que esse valor, tente novamente!";
                if(c > 5)
                {
                  break;
                }
            }
        if(n < nd)
            {
                cout<<"\n o numero sorteado � menor que esse valor, tente novamente!";
                if(c > 5)
                {
                    break;
                }
            }
        c = c + 1;
    }
    while(c < 6);
    if(n != nd)
       {
           cout<<"\n voc� n�o acertou o n�mero!";
       }

    cout<<"\n o numero sorteado foi: " << n;
}
