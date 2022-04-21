#include<iostream>
#include<stdio.h>
#include<locale.h>
using namespace std;
main()
{


    setlocale(LC_ALL,"Portuguese");
    int mes;
    float jr1, jr2, sc, sj;
    mes=0;
    cout<<"informe o salário de carlos:";
    cin>> sc;
    sj = (sc / 3);
    while(sj < sc)
    {
        jr1 = (sc * 2) / 100;
        sc+=jr1;
        jr2 = (sj * 5) / 100;
        sj+=jr2;
        mes++;

    }
      cout<<"são necessários " << mes << " meses para que o  salário de joão se iguale ao de carlos";
}
