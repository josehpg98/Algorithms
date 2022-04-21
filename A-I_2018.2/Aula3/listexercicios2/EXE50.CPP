#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int cm;
    float cc;
    char t;
    cout<<"informe o consumo de energia em KWH do mes: ";
    cin>> cm;
    cout<<"informe o tipo de cliete: (r-residencial c- comercial i - industria)";
    cin>> t;

    if(t == 'r')
    {
        cc = (cm * 0.60);
    }
    else if(t == 'c')
    {
         cc = (cm * 0.48);
    }
    else if(t == 'i')
    {
         cc = (cm * 1.29);
    }
    cout<<"a conta de energia será de:" << cc << " reais.";
}
