#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int pt;
    float p,pp;
    cout<<"\n informe o peso de uma pessoa aqui na terra: ";
    cin>>p;
    cout<<"\n informe um planeta para saber a graidade (1-mercurio | 2-venus | 3-marte | 4-jupiter | 5-saturno | 6-urano)";
    cin>>pt;
    switch(pt)
    {
    case 1:
        pp = (p * 0.37 );
        cout<<"\n o seu peso na terra é: " << p << " já seu peso em mercurio é: " << pp;
        break;
    case 2:
        pp = (p * 0.88);
        cout<<"\n o seu peso na terra é: " << p << " já seu peso em mercurio é: " << pp;
        break;
    case 3:
        pp = (p * 0.38);
        cout<<"\n o seu peso na terra é: " << p << " já seu peso em mercurio é: " << pp;
        break;
    case 4:
        pp = (p * 2.64);
        cout<<"\n o seu peso na terra é: " << p << " já seu peso em mercurio é: " << pp;
        break;
    case 5:
        pp = (p * 1.15);
        cout<<"\n o seu peso na terra é: " << p << " já seu peso em mercurio é: " << pp;
        break;
    case 6:
        pp = (p * 1.17);
        cout<<"\n o seu peso na terra é: " << p << " já seu peso em mercurio é: " << pp;
        break;
    default:
        cout<<"\n mes não encontrado!"<< pt;
    }
}
