#include<locale.h>
#include<iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    float a1,a2,a3;
    cout<<"\nQual � a primeira altura";
    cin>>a1;
    cout<<"\nqual � a segunda altura";
    cin>>a2;
    cout<<"\nqual � a terceira altura";
    cin>>a3;

    if(a1>=a2 && a1>=a2)
        cout<<"\na maior altura � "<<a1;
    else if(a2>=a1 && a2>=a3)
        cout<<"\na maior altura � "<<a2;
    else
        cout<<"\na maior altura � "<<a3;
}
