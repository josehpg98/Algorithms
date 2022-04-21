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

    int v[20],pe,se;
    for(int i = 0; i <= 19; i++)
    {
        //cout<<"\n informe um valor para a variavel do vetor (em posição " << i << "): ";
        //cin>>v[i];//imprime os vcalores do vetor
        v[i] = rand() % 100;
        //pe = v[0];
        //se = v[1];
        cout<<v[i] << endl;
        cout<<"\n ----------------------------------";
    }



    for(int i = 0; i <= 19; i++)
        {
            //v[10] = pe;
            //v[11] = se;
            cout<< v[i] << endl;
        }


}


