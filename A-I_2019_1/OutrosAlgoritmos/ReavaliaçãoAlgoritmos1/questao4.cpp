#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
float calculafrete(float p,string est);
main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"Portuquese");
    int N,temp,aux, aux1;
    float med = 0;
    cout<<" informe um numenro (maior que 1 e menor que 21): " << endl;
    cin>>N;
    while(N < 1 || N > 21)
    {
        cout<<" informe um número valido: " << endl;
        cin>>N;
    }
    cout<<"----------------Impressão do vetor-------------------" << endl;
    int v[N];
    for(int i= 0; i<N; i++)
    {
        v[i] = rand() % 50 ;
        cout<< v[i] << endl;
    }
    for (int l=0; l<N; l++)
        for( int j=l+1; j<N; j++)
        {
            if (v[l]>v[j])
            {
                temp=v[l];
                v[l]=v[j];
                v[j]=temp;
            }
        }
    cout<<" vetor ordenado de forma crescente: " << endl;
    for(int i=0; i<N; i++)
    {
        cout<<v[i] << endl;

    }
    if(N % 2 == 0)
    {
        cout<<" o vetor é par  " << endl;
        aux = N / 2;
        aux1 = (N / 2) -1;
        med = (v[aux] + v[aux1]) / 2.0;
         cout<<" a mediana é:" << med << endl;
    }
    else
    {
        cout<<" o vetor é impar  " << endl;


        //for(int i=0; i<N; i++)
        //{
             aux = N / 2;
            med = v[aux];
        //}
        cout<<" a mediana é:" << med << endl;
    }
}

