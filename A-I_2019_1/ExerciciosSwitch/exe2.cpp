#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int ddd;
    cout<<"\n informe um DDD de um estado atrav�s do correspondente n�mero: ";
    cin>>ddd;
    switch(ddd)
    {
    case 61:
        cout<<"\n o ddd � de bras�lia!";
        break;
    case 71:
        cout<<"\n o DDD � salvador!";
        break;
    case 11:
       cout<<"\n o DDD � s�o paulo!";
        break;
    case 21:
        cout<<"\n o DDD � rio de janeiro!";
        break;
    case 32:
        cout<<"\n o DDD � juiz de fora!";
        break;
    case 19:
        cout<<"\n o DDD � campinas!";
        break;
    case 27:
        cout<<"\n o DDD � vitoria!";
        break;
    case 31:
        cout<<"\n o DDD � belo horizonte!";
        break;
    default:
        cout<<"\n DDD n�o encontrado!"<< ddd;
    }
}
