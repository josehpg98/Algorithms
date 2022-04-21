#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int leitura(char texto [100]);
int acha_maior (int a,int b);
int troca (int x, int y);
main()
{
    int a,b;
    a = leitura("informe o valor de A: ");
    b = leitura("informe o valor de B: ");
    cout << a <<endl;
    cout << b << endl;
    cout << "maior valor digitado: "  << acha_maior(a,b);
    cout << "valor trocado de a: "  << endl;
    a = troca(a,b);
    cout << "valor trocado de b: "  << endl;
    b = troca(a,b);
}
int leitura(char texto [100]){
    int x;
    cout<<texto;
    cin>>x;
    return x;
}
int acha_maior (int a,int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}
int troca (int x, int y)
{
    int aux;
    aux = x;
    x = y;
    y = aux;
}
