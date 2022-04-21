#include <iostream>
using namespace std;
void fabonacci(int v);
main()
{
    int f;
    cout<<"informe quantos primeiros termos deve ser gerado na sequência de fibonacci: " << endl;
    cin>>f;
    fabonacci(f);
}
void fabonacci(int v){
    int a = 0,b = 1,aux;
    for(int i = 0;i < v;i++){
        aux = a+ b;
        a = b;
        b = aux;
    }

}


