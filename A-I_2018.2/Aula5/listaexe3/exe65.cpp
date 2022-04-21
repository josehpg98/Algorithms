#include<iostream>
#include<stdio.h>
#include<locale.h>
using namespace std;
main()
{


    setlocale(LC_ALL,"Portuguese");
    int v, sm,cont;
    float m;

    sm = 0;
    cont = 0;
    do{
    cout<<"informe um valor. ";
    cin>> v;
    if(v>0 || v<5000){
        sm+= v;
        cont++;

        m =sm / cont;
        cout<<"números lidos: " << cont << endl;
        cout<<"média: " << m << endl;
    }




      }while(v != 0);
}

