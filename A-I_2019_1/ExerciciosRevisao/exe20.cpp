#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float c1,c2,c3,c4,rp;


    cout<<"\n informe o valor da compra 1: ";
    cin>>c1;
    cout<<"\n informe o valor da compra 2: ";
    cin>>c2;
    cout<<"\n informe o valor da compra 3: ";
    cin>>c3;
    cout<<"\n informe o valor da compra 4: ";
    cin>>c4;
    rp = (c1 + c2 + c3 + c4) / 5;

    cout<<"\n a quantidade de pontos acumulados a partir de suas compras é: " << rp;
   ;

}
