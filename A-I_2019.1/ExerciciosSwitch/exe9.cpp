#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float r,v1,v2;
    int op;
     cout<<"\n informe um valor: ";
    cin>>v1;
    cout<<"\n informe outro valor: ";
    cin>>v2;
    cout<<"-----escolha a operação desejada:-------";
    cout<<"\n 1-soma";
    cout<<"\n 2-subtração";
    cout<<"\n 3-multiplicação";
    cout<<"\n 4-divisão" << endl;
    cin>>op;
    switch(op)
    {
    case 1:
        r = v1 + v2;
        cout<<"\n a soma de " << v1 << " + " << v2 << " é: " << r;
        break;
    case 2:
        r = v1 - v2;
        cout<<"\n a subtração de " << v1 << " - " << v2 << " é: " << r;
    case 3:
        r = v1 * v2;
       cout<<"\n a multiplicação de " << v1 << " * " << v2 << " é: " << r;
        break;
    case 4:
        r = v1 / v2;
        cout<<"\n a divisão de " << v1 << " / " << v2 << " é: " << r;
        break;
    default:
        cout<<"\n operação invalida!"<< op;
    }
}
