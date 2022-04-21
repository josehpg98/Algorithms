#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int cma, cma1,rc;
    float cc;
    cout<<"informe o consumo de energia em KWH do mes anterior: ";
    cin>> cma;
    cout<<"informe o onsumo do mes atual: ";
    cin>> cma1;
    rc = cma1 - cma;
    if(rc > 0 && rc <= 70)
    {
        cc = (rc * 0.09);
    }
    else if(rc >= 71 && rc <= 150)
    {
         cc = (rc * 0.20);
    }
    else if(rc >= 151 && rc <= 200)
    {
         cc = (rc * 0.23);
    }
    else if(rc > 200)
    {
         cc = (rc * 0.26);
    }
    cout<<"a conta de energia será de:" << cc;
}
