#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int seg,h,m,s;
    cout<<"\n informe o tempo em segundos: ";
    cin>>seg;
    //horas
    h = seg / 3600;
    //minutos
    m = (seg%3600) / 60;
    //segundos
    s = ( (seg % 3600) % 60);

    cout<< h << " : " << m << " : " << s;

}
