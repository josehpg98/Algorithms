#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<ctime>
#include<stdio.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int id, r, sal;
    char sex;
    int cid = 0;
    int csal = 0;
    int cm = 0;
    int cf = 0;
    int cg = 0;
    int ccti = 0;
    int cad = 0;
    int cst = 0;
    int cast = 0;
    while(r <= 0)
    {
        cout<<"\n digite a sua idade: ";
        cin>> id;
        cid++;
        cout<<"\n informe sua pretensão salarial: ";
        cin>> sal;
        csal++;
        cout<<"\n informe seu sexo: (m = maasculino f=feminino)";
        cin>> sex;
        if(sex == 'm')
        {
            cm++;
        }
        else
        {
            cf++;
        }
        cout<<"\n informe o cargo pretendido: ";
        cout<<"\n 1- cordenador de TI ";
        cout<<"\n 2 - administrador de redes ";
        cout<<"\n 3 - suporte técnico";
        cout<<"\n 4 - analista de suporte técnico ";
        cin>> cg;
        if(cg == 1)
        {
            ccti++;
        }
        else if(cg == 2)
        {
            cad++;
        }
        else if(cg == 3)
        {
            cst++;
        }
        else
        {
            cast++;
        }
         cout<<"\n deseja continuar: 1 -sim 0 -não: ";
        cin>> r;
    }

}


