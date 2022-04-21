#include<iostream>
#include<clocale>
#include <cstdio>
#include <cstdlib>

using namespace std;
main()

{
    setlocale(LC_ALL, "portuguese");
    int id, c1 = 0, c2 = 0,c3 = 0,c4 = 0;
    float p = 0, pfe = 0,pfe2 = 0,pfe3 = 0,pfe4 =0, med1 = 0, med2 = 0, med3 =0, med4 =0;
    for(int i = 0; i <= 14; i++)
    {
        cout<<"\n leitura número: " << i;
        cout<<"\n informe o seu idade: ";
        cin>>id;
        cout<<"\n informe o seu peso: ";
        cin>>p;
        if(id >= 1 && id <= 10)
        {
            c1 = c1 + 1;
            pfe = pfe + p;
            med1 = pfe / c1;
        }
        if(id >= 11 && id <= 20)
        {
            c2 = c2 + 1;
            pfe2 = pfe2 + p;
            med2 = pfe2 / c2;
        }
         if(id >= 21 && id <= 30)
        {
            c3 = c3 + 1;
            pfe3 = pfe3 + p;
            med3 = pfe3 / c3;
        }
         if(id > 30)
        {
            c4 = c4 + 1;
            pfe4 = pfe4 + p;
            med4 = pfe4 / c4;
        }
    }
    cout<<"\n a media de peso de 1 a 10 anos é: " << med1;
    cout<<"\n a media de peso de 11 a 21 anos é: " << med2;
    cout<<"\n a media de peso de 21 a 30 anos é: " << med3;
    cout<<"\n a media de peso de 30 anos é: " << med4;
}


