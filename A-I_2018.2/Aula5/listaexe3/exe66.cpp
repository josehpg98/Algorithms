#include<iostream>
#include<stdio.h>
#include<locale.h>
using namespace std;
main()
{


    setlocale(LC_ALL,"Portuguese");
    int s,mes;
    float calc,j, j2;
    mes = 0;
    s = 1800;
    j = 1.5;

    while( s < 2000)
    {
        j2 = ((s * j) / 100);
        calc = j2 + s;
        mes++;
        cout<< mes << "\t " << s << "\t " << j2 << "\t " << calc << "\n";
        s = calc;

    }
}

