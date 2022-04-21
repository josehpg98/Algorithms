#include<locale.h>
#include<iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    float a1,a2,a3;
    cout<<"\nQual é a primeira altura";
    cin>>a1;
    cout<<"\nqual é a segunda altura";
    cin>>a2;
    cout<<"\nqual é a terceira altura";
    cin>>a3;

    if(a1>=a2 && a1>=a2)
        cout<<"\na maior altura é "<<a1;
    else if(a2>=a1 && a2>=a3)
        cout<<"\na maior altura é "<<a2;
    else
        cout<<"\na maior altura é "<<a3;
}
