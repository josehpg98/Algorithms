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
    float v[80];
    int ma = 0,po;
    for(int i = 0; i <= 79; i++)
    {
        cout<<"\n informe um valor para a variavel do vetor (em posição " << i << "): ";
        cin>>v[i];//imprime os vcalores do vetor
        //v[i] = rand() % 100;
        ma = v[0];

    }
    for(int i = 0; i <= 79; i++)
    {
        if (v[i] > ma)
        {
            ma = v[i];
            po = i;
        }

    }
    cout<<"\n o maior valor é: " << ma << " na posição " << po;
}
