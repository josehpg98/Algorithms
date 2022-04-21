#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m=0;
    float s=1800,j,sn;

    cout<<std::fixed << std::setprecision(2);

    do
    {

        if(sn < 2000)
        {

            j = s * 0.015;
            m = m + 1;
            sn = s + j;


            cout<<"\n mes: " << m << "\t o antigo saldo: " << s << "\t juros: " << j << "\t o novo saldo: " << sn;

            s = sn;

        }
    }
    while(sn < 2000);


}
