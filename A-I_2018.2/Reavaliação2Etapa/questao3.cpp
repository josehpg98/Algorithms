#include<iostream>
#include<locale.h>
using namespace std;
float calculaimpostoderenda(float s);
main()
{
    setlocale(LC_ALL,"Portuguese");
    float sal;
    cout<<"\n informe seu sal�rio para c�lculo do imposto de renda: ";
    cin>>sal;
    cout<<"\n o valor pago de imposto de renda sobre seu salario � de " << calculaimpostoderenda(sal);
}
float calculaimpostoderenda(float sal)
{
    float sb,s1,s2,s3,m,r;
    if(sal>=0.00 && sal<=2000.00)
    {
        //cout<<"\n voc� est� isento do imposto de renda!";
    }
    else if(sal>=2000.01 && sal<=3000.00)
    {
        sb = (sal - 2000.00);
        s1 = (sb * 0.08);
        r = s1;
        //s2 = (s1 *0.18);

        //cout<<"\n o valor pago de imposto de renda sobre seu salario � de "<< r;
    }
     else if(sal>3000.01 && sal<=4500.00)
    {
        sb = (sal - 3000.00);
        s1 = (sb * 0.18);
        s2 = (sal - sb-2000)*0.08;
        r = s1 + s2;
        //cout<<"\n o valor pago de imposto de renda sobre seu salario � de "<< r;
    }
    else if(sal>4500.00)
    {
         sb = (sal - 3000.00);
         s1 = (sb * 0.18);
         s2 = (sal - sb-2000)*0.08;
         m = (s1 -s2);
         s3 = (m * 0.28);
         r = s1 + s2 + s3;
         //cout<<"\n o valor pago de imposto de renda sobre seu salario � de "<<r;
    }
    return r;
}
