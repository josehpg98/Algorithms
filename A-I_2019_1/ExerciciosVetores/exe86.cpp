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
    float v[10];
    int c = 0;
    for(int i = 0; i <= 9; i++)
    {
        cout<<"\n informe um valor para a variavel do vetor (em posi��o " << i << "): ";
        cin>>v[i];//imprime os vcalores do vetor
        if(v[i] < 0)//if para receber um contador de n�mewros negativos
        {
            c = c + 1;
        }

    }
      cout<<"\n o total de n�meros negativos �: " << c;
}







