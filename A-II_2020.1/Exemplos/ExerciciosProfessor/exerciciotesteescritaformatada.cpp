#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    float nf = 0, p = 0, c = 0;
    cout<<"informe um número float qualquer: " << endl;
    cin>>nf;
    //fflush(stdin);
    cout<<"informe a porcentagem:  " << endl;
    cin>>p;
    //fflush(stdin);
    cout<<" mês ";
    cout.width(25);
    cout<<" v. inicial ";
    cout.width(40);
    cout<<" V. final ";
    for(int i = 1; i <= 5; i++)
    {
        cout.fill('.');
        cout.width(2);
        cout<<i;
        cout.fill('.');
        c = (p / 100.0) * nf;
        cout.width(20);
        cout<<nf;
        cout.width(30);
        cout<<c;
        nf = c + nf;
        cout.width(20);
        cout<< nf << endl;
    }
}
