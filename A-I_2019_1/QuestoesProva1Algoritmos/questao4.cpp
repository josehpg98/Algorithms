#include<iostream>
#include<clocale>
#include <cstdio>
#include <cstdlib>

using namespace std;
main()

{
    setlocale(LC_ALL, "portuguese");
    int cont = 0, id, op, qtm = 0, sid = 0, Ppass = 1;
    float sal, smsal = 0, msal = 0, mid = 0, maiorsal = 0, menorsal = 0;
    char sex;
    do
    {
        cout<<"\n informe seu sal�rio: ";
        cin>>sal;
        cout<<"\n informe a sua idade: ";
        cin>>id;
        cout<<"\n informe o seu sexo (m - masculino | f - feminino): ";
        cin>>sex;
        cout<<"\n deseja continuar a coleta de dados? (n�o - digite 2 | sim - digite qualquer outro digito n�merico)";
        cin>>op;
        cont = cont + 1;
        smsal = smsal + sal;
        sid = sid + id;
        if(sex == 'M' or sex == 'm')
        {
            qtm = qtm + 1;
        }
        if(Ppass == 1)
        {
            Ppass = 0;
            maiorsal = sal;
            menorsal = sal;
        }
        if(sal > maiorsal)
        {
            maiorsal = sal;
        }
        if(sal < menorsal)
        {
            menorsal = sal;
        }
    }
    while(op != 2);
    msal = (smsal / cont);
    mid = (sid / cont);
    cout<<"\n a quantidade de pessoas participantes �: " << cont;
    cout<<"\n a sal�rial das pessoas participantes � " << msal;
    cout<<"\n a quantidade de pessoas do sexo masculino s�o: " << qtm;
    cout<<"\n o maior sal�rio �: " << maiorsal;
    cout<<"\n o menor sal�rio �: " << menorsal;
    cout<<"\n a m�dia de idade de todas as pessoas �: " << mid;

}







