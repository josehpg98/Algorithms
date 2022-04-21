#include<iostream>
#include<cstdlib>
#include<ctime>
#include<clocale>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int M[3][3];
    int l,c,v;
     for(l=0;l<3;l++){
        for(c=0;c<3;c++){

            M[l][c] = rand()%100;
            cout<< M[l][c] << "\t";

        }
        cout<<"\n\n";
     }
     cout<<"\n\n";
    cout<<"agora a matriz no sentido inverso em 90 graus!  ";
    M[c][l] = M[l][c];
    cout<<M[c][l] << "\t";


}


