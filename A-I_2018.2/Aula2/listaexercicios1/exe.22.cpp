#include <iostream>
#include <locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int id, ano, nasc, idfut;


    cout<<"\n informe a sua data de nascimento: ";
    cin>> nasc;

    cout<<"\in informe o ano atual: ";
    cin>> ano;

   id = ano - nasc;
   idfut = 2050 - nasc;


    cout<<"a sua idade é: " << id;
    cout<<"\n\n";
    cout<<"a sua idade em 2050 será: " << idfut;

}

