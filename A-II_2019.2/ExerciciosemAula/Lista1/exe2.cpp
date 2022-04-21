#include<iostream>
using namespace std;
main()
{
  int n,tn = 0,np = 0,nnp = 0,res = 0;
  char op;
  do{
    cout<<"informe um número:" << endl;
    cin>>n;
    for (int i = 2; i <= n / 2; i++) {
        //i recebe 2, se i for menor igual ao numero divido por 2, i recebe i mais 1
        //verifica o numero por divisa sucessiva apartir de dois ate a metade dele pŕoprio
    if (n % i == 0) {//se o mod n divido por i for igual a zero, oresulatado recebe ele mais 1
        res++;
       
    }
   }
    if(res == 0){
        cout<<"o número é primo!" << endl;
        np = np + 1;
    }else{
        cout<<"o número não e primo!" << endl;
        nnp = nnp + 1;
    }
    tn = tn + 1;
    cout<<"deseja continuar: s/n" << endl;
    cin>>op;
  }	while(op == 's' || op == 'S');
    cout<<"o total de números lidos: "<< tn << endl;
    cout<<"o total de números primos: "<< np << endl;
    cout<<"o total de números nao primos: "<< nnp << endl;
}

