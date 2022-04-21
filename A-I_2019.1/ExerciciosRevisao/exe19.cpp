#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float t,u,c,v,cq,dz,ur;
    cout<<"\n informe a quantidade de moedas de 1 centavo:";
    cin>>u;
    cout<<"\n informe a quantidade de moedas de 5 centavos:";
    cin>>c;
    cout<<"\n informe a quantidade de moedas de 10 centavos:";
    cin>>dz;
    cout<<"\n informe a quantidade de moedas de 25 centavos:";
    cin>>v;
    cout<<"\n informe a quantidade de moedas de 50 centavos:";
    cin>>cq;
    cout<<"\n informe a quantidade de moedas de 1 real:";
    cin>>ur;
    u = u * 0.1;
    c = c * 0.5;
    dz = dz * 0.10;
    v = v * 0.25;
    cq = cq * 0.50;
    ur = ur * 1.0;
    t =(u + c + dz + v + cq + ur);
    cout<<"\n o valor total de moedas no cofre é: " << t;
}
