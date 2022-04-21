#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    cout<<"digite um numero de 1 a 10:";
    cin>>n;
    if(n>10 || n<1)
    {
       cout<<"numero invalido!";
    }
    else{
        for(int i=1;i<=10;i++){
            cout<<n<<"X"<<i<<" = "<<n*i<<"\n";
        }
    }

}
