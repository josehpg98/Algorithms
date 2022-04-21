#include<iostream>
#include<cstdlib>
#include<ctime>
#include<clocale>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int M[3][4];
    int l,c,j,i;
     for(l=0;l<3;l++){
        for(c=0;c<4;c++){

            M[l][c] = rand()%20;
            cout<< M[l][c] << "\t";
            cout<"---------------------------------------------------------------\n";
        }
        cout<<"\n\n";

     }

    for(i=0;i<4;i++){
        j=M[0][i];
        M[0][i] = M[2][i];
        M[2][i] = j;
    }
    for(l=0;l<3;l++){
        for(c=0;c<4;c++){

            cout<< M[l][c] << "\t";

        }
        cout<<"\n\n";
     }
}



