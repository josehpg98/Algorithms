#include<iostream>
#include<clocale>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
main()

{
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese");
    float med = 0;
    int ma = 0,cp =0,ci = 0,v[30],soma = 0;
    for(int i = 0; i <= 29; i++)
    {
        cout<<"\n informe um valor para a variavel do vetor (em posição " << i << "): ";
        //cin>>v[i];//imprime os vcalores do vetor
        v[i] = rand() % 100;
       if(v[i] % 2 == 0){
            cp = cp + 1;
       }
        if(v[i] % 2 == 1){
            ci = ci + 1;
       }
       soma = soma + v[i];
        med = (soma / 30);
    }

    cout<<"\n o números de pares é: " << cp;
     cout<<"\n o números de impares é: " << ci;
     cout<<"\n a média dos valores é: " << med;
}

