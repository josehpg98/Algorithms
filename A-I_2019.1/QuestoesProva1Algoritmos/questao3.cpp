#include<iostream>
#include<clocale>
#include <cstdio>
#include <cstdlib>

using namespace std;
main()

{
    setlocale(LC_ALL, "portuguese");


    int n, qt = 0, s = 0, qndd = 0, qndt = 0, sm = 0, pni = 0, ni = 0;
    float med;
    for(int i = 0; i < 10; i++)
    {
        cout<<"\n informe um numero: ";
        cin>>n;
        sm = sm + n;
        if(n >= 1 && n <= 30)
        {
            qt = qt + 1;
            s = s + n;
        }
        if(n % 2 == 0)
        {
            qndd = qndd + 1;
        }
        if(n % 3 == 0)
        {
            qndt = qndt + 1;
        }
        if(n % 2 != 0)
        {
            ni = ni + 1;
        }
    }
    med = (sm / 10);
    pni = (ni * 100) / 10;
    cout<<"\n a quantidade de n�meros que est�o na faixa de 1 e 30 �: " << qt;
    cout<<"\n a soma dos de n�meros que est�o na faixa de 1 e 30 � " << s;
    cout<<"\n a quantidade de n�meros divisiveis po 2 �: " << qndd;
    cout<<"\n a quantidade de n�meros divisiveis po 3 �: " << qndt;
    cout<<"\n a m�dia dos numeros lidos �: " << med;
    cout<<"\n o percentual de numeros impares aos numeros lidos �: " << pni;
}






