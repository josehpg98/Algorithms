#include<iostream>
#include<clocale>
#include<cstdlib>
#include<ctime>
using namespace std;

main()
{
    setlocale(LC_ALL,"Portuquese");
    int v[15],op = 0,n,cont = 0,i =0;
    cout<<"---- menu de ações--------" << endl;
    cout<<"Digite 1 para gerar o vetor de 15 elementos" << endl ;
    cout<<"Digite 2 para ler os 15 elementos divisiveis por n" << endl ;
    cout<<"Digite 3 para ler incrementar  1 aos elementos pares" << endl ;
    cout<<"Digite 4 para ordenar em ordem decrescente" << endl ;
    cout<<"Digite 5 para sair" << endl ;
    cin>>op;
    do
    {
        if(op == 1)
        {
            for( i = 0; i <= 14; i++)
            {
                v[i]= rand() % 50;
                cout<< v[i] << endl;
            }
        }
        else if(op == 2)
        {
            cout<<"\n leia un número: ";
            cin>>n;
            if(v[i] % n == 0)
            {
                cont = cont + 1;
                cout<<"\n o número de elemntos divisiveis por n é : " << cont;
            }
        }
        else if(op == 3)
        {
            for(i = 0; i <= 14; i++)
            {
                if(v[i] % 2 == 0)
                {
                    v[i] = v[i] + 1;
                    cout<<v[i] << endl;
                }
            }
        }
    }
    while(op < 5);
}

