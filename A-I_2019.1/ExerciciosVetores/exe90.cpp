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
    float v[100];
    int c = 0,vm;
    for(int i = 0; i <= 99; i++)
    {
        cout<<"\n informe um valor para a variavel do vetor (em posição " << i << "): ";
        //cin>>v[i];//imprime os vcalores do vetor
        v[i] = rand() % 100;
        cout<< v[i] << endl;


    }
    cout<<"informe um valor para multiplicar o vetor: ";
        cin>>vm;
     for(int i = 0; i <= 99; i++){
            v[i] = v[i] * vm;
              cout<< v[i] << endl;
         }
}
