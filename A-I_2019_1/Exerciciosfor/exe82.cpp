#include<iostream>
#include<clocale>
#include <cstdio>
#include <cstdlib>

using namespace std;
main()

{
    setlocale(LC_ALL, "portuguese");

    int id = 0, ttp = 0,contc = 0, conts = 0, contv = 0, contd = 0, idv = 0;
    char ec;
    float medv = 0, pd;
    for(int i = 0; i < 15; i++)
    {
        cout<<"\n Informe a sua idade: ";
        cin >>id;
        cout<<"\n Informe o seu estado civil (C -casado | S -solteiro | V -viuvo | D -desquitado ou separado): ";
        cin >>ec;
        ttp = ttp + 1;
        if(ec == 'C' or ec == 'c')
        {
            contc = contc + 1;
        }
        if(ec == 'S'or ec == 's')
        {
            conts = conts + 1;
        }
        if(ec == 'V'or ec == 'v' )
        {
            contv = contv + 1;
            idv = idv + id;
            medv = (idv / contv);
        }
        if(ec == 'D' or ec == 'd')
        {
            contd = contd + 1;
        }
    }
    pd = (contd * 100) / ttp;

    cout<<"\n a quantidade de pessoas casadas é: " << contc;
    cout<<"\n a quantidade de pessoas solteiras é: " << conts;
    cout<<"\n a média de idade de pessoas viuvas é: " << medv;
    cout<<"\n o percentual de pessoas desquitadas do total é: " << pd;
}

