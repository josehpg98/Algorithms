#include<iostream>
#include<locale.h>
using namespace std;
main()
{

     setlocale(LC_ALL,"Portuguese");
    int c, s,sa;
    cout<<"informe o seu saário atual : ";
    cin>> s;
    cout<<"informe o seu cargo conforme a tabela: 1 = tecnicos, 2 - gerentes, 3 = demaios cargos ";
    cin>> c;

    switch(c)
    {
    case 1:
        sa = ((s * 50)/ 100) + s;
        cout<<" o sdeu salário atualizado é: " << sa << " reais ";
        break;
    case 2:
        sa = ((s * 30)/ 100) + s;
        cout<<" o sdeu salário atualizado é: " << sa << " reais ";
        break;
    case 3:
        sa = ((s * 20)/ 100) + s;
          cout<<" o sdeu salário atualizado é: " << sa << " reais ";
        break;
    default:
        cout<<"opção invalida";
    }
}
