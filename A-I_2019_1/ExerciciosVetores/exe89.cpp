#include<iostream>
#include<clocale>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
main()

{
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese");
    float t[12],pp = 0,st = 0,med = 0;
    int tn = 0,ma,me,pos,pos2;
    for(int i = 1; i <= 12; i++)
    {
        cout<<"\n informe uma temperatura para o mês: " << i << "): ";
        cin>>t[i];//pega o valor da temperatura de cada mes
        ma = t[0];
        me = t[0];


          if(t[i] < 0)//ve e compara caso a temperatura for menor que 0
          {
            tn = tn + 1;
          }
    for(int i = 1; i <= 12;i++){
         if(t[i] > ma)
         {
           ma = t[i];
           pos = i;
         }
        if(t[i] < me || t[i] < 0)
        {
          me = t[i];
          pos2 = i;
        }
    }
          st = st + t[i];
          med = (st / 12);
    }

    cout<<"\n a quantidade de temperaturas negativas foi de : " << tn;
    cout<<"\n a maior temperatura foi de : " << ma << " no mes " << pos;
    cout<<"\n a menor temperatura foi de : " << me  << " no mes " << pos2;
    cout<<"\n a média anual de temperaturas foi de : " << med;
}
