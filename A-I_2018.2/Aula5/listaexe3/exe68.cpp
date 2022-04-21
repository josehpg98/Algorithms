#include<iostream>
#include<stdio.h>
#include<locale.h>
using namespace std;
main()
{
     setlocale(LC_ALL,"Portuguese");
    int mes;
    float t1, t2,a ,b;
    mes = 0;
    cout<<"uinforme a população da cidade A:";
    cin>> a;
    cout<<"informe a população da cidade b: ";
    cin>> b;
    while(a < b)
    {
        t1 = (a * 3.1) / 100;
        a+=t1;
        t2 = (b * 1.5) / 100;
        b+=t2;
        mes++;
    }
    cout<<"o tempo para a cidade A com " << a << " habitantes, ultrapassar a cidade b com  " << b << " , foi de " << mes << " meses.";
}
