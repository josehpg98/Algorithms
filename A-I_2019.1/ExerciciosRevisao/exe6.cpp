#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float p,d,desc;

    cout<<"\n informe o pre�o do produto: ";
    cin>>p;
    d = (p * 10) / 100;
    desc = p -d;
    cout<<"\n o pro�o do produto � " << p << " com desconto " << desc;
}
