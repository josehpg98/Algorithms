#include<iostream>
using namespace std;
main()
{
    int temp, s, m, h;

     cout<<"informe o tempo em segundos: ";
     cin>> temp;

     h = temp / 3600;
     cout<< h << " horas ";

     m = (temp % 3600)/ 60;
     cout<< m << " minutos ";

    s = ((temp % 3600)/ 60 ) % 60;
    cout<< s << "  segundos ";
}
