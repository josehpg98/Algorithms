#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int idade,cargo,contf=0,cargo1=0,cargo2=0,cargo3=0,cargo4=0,soma=0,total=0,sal1=0,sal2=0,sal3=0,sal4=0;
    float sal,media;
    char sexo;
    cout<< "\nInforme o código 1 para coordenador de TI"<<endl;
    cout<< "\nInforme o código 2 para administrador de rede"<<endl;
    cout<< "\nInforme o código 3 para suporte técnico"<<endl;
    cout<< "\nInforme o código 4 para analista de suporte técnico "<<endl;

    idade=1;
    while(idade!=0)
    {
        cout<<"\nInforme a idade: ";
        cin>>idade;
        if(idade!=0)
        {
            soma=soma+idade;
            total++;
            cout<<"\nInforme a pretensão salarial: ";
            cin>>sal;


            cout<<"\nInforme sexo (M ou F): ";
            cin>>sexo;
            if(sexo=='F' || sexo=='f')
            {
                contf++;
            }
            cout<<"\nInforme cargo: ";
            cin>>cargo;
            if(cargo==1)
            {
                cargo1++;
                if(sal>9.294)
                {
                    sal1++;
                }
            }
            else if (cargo==2)
            {
                cargo2++;
                if(sal>5.008)
                {
                    sal2++;
                }
            }
            else if (cargo==3)
            {
                cargo3++;
                if(sal>6.232)
                {
                    sal3++;
                }
            }
            else if (cargo==4)
            {
                cargo4++;
                if(sal>4.122)
                {
                    sal4++;
                }
            }
            cout<<"\nDigite 1 para continuar e 0 para sair: ";
            cin>>idade;
        }
    }
    media=soma/total;
    cout<<"\nTotal de candidatos do sexo feminino: "<<contf;
    cout<<"\nIdade média dos candidatos: "<<media;
    cout<<"\nTotal cargo 1: "<<cargo1;
    cout<<"\nQuantos candidatos tiveram pretensão salarial acima da Média cargo 1: "<<sal1;
    cout<<"\nTotal cargo 2: "<<cargo2;
    cout<<"\nQuantos candidatos tiveram pretensão salarial acima da Média cargo 2: "<<sal2;
    cout<<"\nTotal cargo 3: "<<cargo3;
    cout<<"\nQuantos candidatos tiveram pretensão salarial acima da Média cargo 3: "<<sal3;
    cout<<"\nTotal cargo 4: "<<cargo4;
    cout<<"\nQuantos candidatos tiveram pretensão salarial acima da Média cargo 4: "<<sal4;