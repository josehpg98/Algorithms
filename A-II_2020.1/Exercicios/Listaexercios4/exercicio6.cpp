#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace  std;
int elevaaocubo(int n,int vezes);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n,nm = 1;
    cout<<"informe o número que deseja cálcular ao cubo: " << endl;
    cin>>n;
    elevaaocubo(nm,n);
    int res = elevaaocubo(nm,n);
    cout<<res;
}
int elevaaocubo(int n,int vezes){
    if(vezes == 0){
        return 0;
    }else
    {
        return n *  (elevaaocubo(n + 1,vezes - 1));
    }
    
}