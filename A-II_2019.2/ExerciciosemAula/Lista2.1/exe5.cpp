#include <iostream> //biblioteca para leitura e escrita no disco
#include <clocale>  //biblioteca para inclusão do padrão portugês brasileiro
#include <cstdio>   //biblioteca padrão de entrada e saída
#include <cstdlib>  //biblioteca para emular o prompt de comando ou terminal

using namespace std;
int verificapar(int n);
main()
{
    setlocale(LC_ALL, "Portuguese"); //transforma o padrão de escrita do teclado em brasileiro
    int v,ret,n;

    cout<<" informe um valor:" << endl;
    cin>>v;
    cout << "retorno: ";
    ret = verificapar(v);
    cout << ret;
}
int verificapar(int n){
    int res;
    n = (n % 2);
    if(n == 0){
        res = 1;
      
    }else{
        res = 0;
       
    }
    return res;
}