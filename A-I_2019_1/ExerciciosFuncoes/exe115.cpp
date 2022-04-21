#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
float consulta(char op);
float saque(float vs);
float deposito(float vd);
main()
{
    setlocale(LC_ALL, "Portuguese");
    float sld;
    char op;
   cout<<"\t (a) consulta saldo \t (c) depósito " << endl;
   cout<<"\t (c) saque \t\t (d) sair " << endl;
   do{
        cout<<"selecione a opção desejada: " << endl;
        cin>>op;
         
   }while(op != 'd' || op != 'D');

    sld = consulta(op);
 
}

    
    if(op == 'a' || op == 'A'){
        float saldo;
    float consulta(char op){
    saldo = saldo + 0.00;
    }
    return saldo;
}






