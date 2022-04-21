#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m;
    cout<<"\n informe um mês de pagamaento do DOC através do correspondente número: ";
    cin>>m;
    switch(m)
    {
    case 1:
        cout<<"\n o mês de pagamento é janeiro!";
        break;
    case 2:
        cout<<"\n o mês de pagamento é fevereiro!";
        break;
    case 3:
        cout<<"\n o mês de pagamento é março!";
        break;
    case 4:
        cout<<"\n o mês de pagamento é abril!";
        break;
    case 5:
        cout<<"\n o mês de pagamento é maio!";
        break;
    case 6:
        cout<<"\n o mês de pagamento é junho!";
        break;
    case 7:
        cout<<"\n o mês de pagamento é julho!";
        break;
    case 8:
        cout<<"\n o mês de pagamento é agosto!";
        break;
    case 9:
        cout<<"\n o mês de pagamento é setembro!";
        break;
    case 0:
        cout<<"\n o mês de pagamento é outubro!";
        break;
    default:
        cout<<"\n mes não encontrado!"<< m;
    }
}
