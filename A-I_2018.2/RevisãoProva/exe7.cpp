#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setLocale(LC_ALL,"Portuguese");
    int tc, me;
    float qt, r, vlc;
    cout<<"informe a moeda de entrada: (0-EURO, 1-LIBRA, 2-DOLAR COMERCIAL, 3-PESO ARGENTINO)";
    cin>> me;
    cout<<"informe o tipo de conversão: (0-EURO, 1-LIBRA, 2-DOLAR COMERCIAL, 3-PESO ARGENTINO/REAL BRAsiLEIRO)";
    cin>> tc;
    cout<<"informe a quantia ser convertida: ";
    cin>> qt;
    if(me == 0 && tc == 1)
       r = (qt * 4.45);
       vlc = (r / 5.02);
       cout<<"o valor convertido de euro para libras é " << vlc;
       else if(me == 0 && tc == 2)
       r = (qt * 4.45);
       vlc = (r / 3.85);
       cout<<"o valor convertido de euros para dolar é " << vlc;
       else if(me == 0 && tc == 3)
       r = (qt * 4.45);
       vlc = (r / 0.10);
       cout<<"o valor convertido de euros para peso argentino é: " << vlc;


}
