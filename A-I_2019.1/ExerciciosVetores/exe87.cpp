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
    float v[10],x = 0;
    int c = 0;
    for(int i = 0; i <= 9; i++)
    {
        cout<<"\n informe um valor para a variavel do vetor (em posição " << i << "): ";
        v[i]= rand() % 50;
        //cout<<v[i];//imprime os valores do vetor
        cout<<"\n infome um valor para a variavel x: ";
        cin>>x;
        for(int i = 0; i <=9; i++)
        {
            if(x == v[i])
                c = c + 1;
        }

    }
    //cout<<"\n infome um valor para a variavel x: ";
    //cin>>x;
    //for(int i = 0;i <=9; i++)
    //{
    //if(x == v[i])
    //c = c + 1;
    //}/
    cout<<"\n o total de vezes que a variavel x aparece no vetor  é: " << c;
}








