#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float vtp, p, vtf;
    int est;
    cout<<"informe o valor total dos produtos: ";
    cin>> vtp;
    cout<<"informe a faixa de peso: ";
    cin>> p;
    cout<<"informe o estado de destino: (1-RS, 2-SC e 3-PR)";
    cin>> est;

    if(p <= 1 && est == 1)
    {
        vtf = (vtp + 7.50);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 1 && p <= 2 && est == 1)
    {
        vtf = (vtp + 8.10);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 2 && p <= 3 && est == 1)
    {
        vtf = (vtp + 8.70);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 3 && p <= 4 && est == 1)
    {
        vtf = (vtp + 9.20);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 4 && p <= 5 && est == 1)
    {
        vtf = (vtp + 9.80);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if( p <= 1 && est == 2)
    {
        vtf = (vtp + 8.40);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 1 && p <= 2 && est == 2)
    {
        vtf = (vtp + 9.40);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 2 && p <= 3 && est == 2)
    {
        vtf = (vtp + 10.30);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 3 && p <= 4 && est == 2)
    {
        vtf = (vtp + 11.20);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 4 && p <= 5 && est == 2)
    {
        vtf = (vtp + 12.10);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if( p <= 1 && est == 3)
    {
        vtf = (vtp + 9.90);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 1 && p <= 2 && est == 3)
    {
        vtf = (vtp + 11.10);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 2 && p <= 3 && est == 3)
    {
        vtf = (vtp + 12.20);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 3 && p <= 4 && est == 3)
    {
        vtf = (vtp + 13.40);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 4 && p <= 5 && est == 3)
    {
        vtf = (vtp + 14.50);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else if(p > 5)
    {
        vtf = (vtp + 20.00);
        cout<<"o valor total do frete é de: " << vtf;
    }
    else
    {
        cout<<"opção inválida!";
    }
}
