#include<iostream>
#include<cstdlib>
#include<ctime>
#include<clocale>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int M[5][5];
    int l,c;
     for(l=0;l<5;l++){
        for(c=0;c<5;c++){

            M[l][c] = rand()%100;
            cout<< M[l][c] << "\t";

        }
        cout<<"\n\n";
     }
     cout<<"\n\n";
        cout<<"a: ";
        a = M[0][3];

}

