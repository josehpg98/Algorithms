#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    cout<<"Digite um numero:";
    cin>>n;
    if(n%2==0)
        cout<<"\nO numero é par";
    else
        cout<<"\nO numero é impar";
}
