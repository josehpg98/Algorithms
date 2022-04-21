#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int fatorial(int num);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, retorno = 0;
    cout<<"informe um número para calcular o seu fatorial: " << endl;
    cin>>n;
    fflush(stdin);//limpa o buffer do teclado
    retorno = fatorial(n);
    cout<<"o fatorial de: " << n <<" é: " << retorno << endl;
}
int fatorial(int num){
    int ret = 0;
    if(num == 0){
        ret = 1;
    }else{
        ret = num * fatorial(num-1);
    }
    return ret;
}
