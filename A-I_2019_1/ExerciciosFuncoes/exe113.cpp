#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
bool verificanumeroperfeito(int n);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    bool v;
    cout<<"Informe um nÚmero para verificar se é perfeito ou não: " << endl;
    cin>>n;

    v = verificanumeroperfeito(n);
    cout<<" return: " << v << endl;
    //cout<<" o numero é: " << vrf << endl;
}
bool verificanumeroperfeito(int n)

//se for 0 é perfeito senao e é imperfeito.
{
  bool vrf;
        if (n % 2 == 0)
        {
            //return = 0;
            vrf = 0;
            //cout<<" É um numero perfeito!" << endl;
        }
        else if(n % 2 != 0)
        {
            vrf = 1;
            //cout<<" Não é um número perfeito!" << endl ;
        }
        return vrf;
    }






