#include<iostream>
#include<locale.h>
using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    int v1, v2;
        cout<<"informe um n�mero qualquer: ";
        cin>> v1;
        cout<<"informe outro valor qualquer: ";
        cin>> v2;

        if(v1 > v2)
            cout<<"o maior valor �: " << v1;
            else
                cout<<"o maior n�mero �: " << v2;


}

