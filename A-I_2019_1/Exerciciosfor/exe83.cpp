#include<iostream>
#include<clocale>
#include <cstdio>
#include <cstdlib>

using namespace std;
main()

{
    setlocale(LC_ALL, "portuguese");

    int op, n1, n2, n3, pn1, pn2, pn3;
    float med = 0;
    cout<<"\n ---menu de a��es---";
    cout<<"\n --- 1 m�dia ar�tim�tica ---";
    cout<<"\n --- 2 m�dia ponderada ---";
    cout<<"\n --- 3 sair do programa ---";

    do
    {
        cout<<"\n escolha uma op��o: ";
        cin>>op;
        if(op == 1)
        {
            cout<<"\n informe a primeira nota: ";
            cin>>n1;
            cout<<"\n informe a segunda nota: ";
            cin>>n2;
            med = (n1 + n2) / 2;
            cout<<"\n a m�dia aritm�tica foi: " << med;
        }
        if(op == 2)
        {
            cout<<"\n informe a primeira nota: ";
            cin>>n1;
            cout<<"\n informe o peso da primeira nota: ";
            cin>>pn1;
            cout<<"\n informe a segunda nota: ";
            cin>>n2;
            cout<<"\n informe o peso da segunda nota: ";
            cin>>pn2;
            cout<<"\n informe a terceira nota: ";
            cin>>n3;
            cout<<"\n informe o peso da terceira nota: ";
            cin>>pn3;
            med = (n1 * pn1 + n2 * pn2 + n3 * pn3) / (pn1 + pn2 + pn3);
            cout<<"\n o resultado da m�dia ponderada �: " << med;
        }
        else
        {
             cout<<"\n op��o inv�lida!";
        }
    }
    while(op != 3);
}


