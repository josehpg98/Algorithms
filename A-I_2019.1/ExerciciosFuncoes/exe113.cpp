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
    cout<<"Informe um n�mero para verificar se � perfeito ou n�o: " << endl;
    cin>>n;

    v = verificanumeroperfeito(n);
    cout<<" return: " << v << endl;
    //cout<<" o numero �: " << vrf << endl;
}
bool verificanumeroperfeito(int n)

//se for 0 � perfeito senao e � imperfeito.
{
  bool vrf;
        if (n % 2 == 0)
        {
            //return = 0;
            vrf = 0;
            //cout<<" � um numero perfeito!" << endl;
        }
        else if(n % 2 != 0)
        {
            vrf = 1;
            //cout<<" N�o � um n�mero perfeito!" << endl ;
        }
        return vrf;
    }






