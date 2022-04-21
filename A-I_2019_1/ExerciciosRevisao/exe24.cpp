#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int d,di,m,a;
    cout<<"\n informe o tempo em dias: ";
    cin>>d;
    //horas
    a = d / 365;
    //minutos
    m = (d %365) / 30;
    //segundos
    di = ( (d % 365) % 30);

    cout<< a << " anos: " << m << "  meses: " << di << " dias";

}

