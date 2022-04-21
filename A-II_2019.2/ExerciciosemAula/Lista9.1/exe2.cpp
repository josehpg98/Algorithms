#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;
void vetor3(int *v1,int *v2);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int *vet1 = new int[5];
    int *vet2 = new int[5];

    srand(time(NULL));
    for(int i = 0; i < 5; i++)
    {
        vet1[i] = rand() % 100;
    }
    cout<<" valores vet 1 gerados" << endl;
    cout<<"---------------------" << endl;
    for(int l = 0; l < 5; l++)
    {
        vet2[l] = rand() % 100;
    }
    cout<<" ----------------------" << endl;
    cout<<" valores vet 2 gerados" << endl << endl;
    cout<<"--------------------------------------------" << endl;
    vetor3(vet1,vet2);
}

void vetor3(int *v1,int *v2)
{
    int imp;
    cout<<"vetor 3!" << endl;
    srand(time(NULL));
    for(int i = 0; i < 5; i++)
    {
        cout<<v1[i] << endl;

    }
    for(int j = 0; j < 5; j++)
    {
        cout<<v2[j] << endl;
    }
    cout<<" Números Pares: "<< endl;
    for(int f = 0; f < 5; f++)
    {
        if(v1[f] % 2 == 0)
        {
            cout<< v1[f] << endl;
        }
    }

    for(int d = 0; d < 5; d++)
    {
        if(v1[d] % 2 == 0)
        {
            cout<< v1[d] << endl;
        }
    }


    cout<<" Números imPares: "<< endl;
    for(int g = 0; g < 5; g++)
    {
        if(v1[g] % 2 == 1)
        {
            cout<< v1[g] << endl;
        }
    }

    for(int c = 0; c < 5; c++)
    {
        if(v1[c] % 2 == 1)
        {
            cout<< v1[c] << endl;
        }
    }

    cout<<" Soma dos valores do vetor: " << endl;
     int soma1 = 0,soma2 = 0, res = 0;

     for(int s1 = 0; s1 < 5; s1++)
    {
         soma1 = soma1 + v1[s1];
        if(s1 == 4){
            //cout<<soma1<< endl;
        }
    }

         for(int s2 = 0;s2 < 5;s2++){
             soma2 = soma2 + v2[s2];
        if(s2 == 4){
            //cout<<soma2<< endl;
        }
    }
    res = soma1 + soma2;
    cout<<"soma valores do vetor: " << res << endl;

}
