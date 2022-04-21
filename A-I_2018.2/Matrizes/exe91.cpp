#include<iostream>
#include<cstdlib>
#include<ctime>
#include<clocale>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int M[3][6];
    int l,c,v;
     for(l=0;l<3;l++){
        for(c=0;c<6;c++){

            M[l][c] = rand()%100;
            cout<< M[l][c] << "\t";

        }
        cout<<"\n\n";
     }
     cout<<"\n\n";
     cout<<"informe um valor para ser multiplicado pelos valores acima: ";
     cin>>v;
      for(l=0;l<3;l++){
        for(c=0;c<6;c++){

            M[l][c]=M[l][c]* v;
            cout<< M[l][c] << "\t";

        }
        cout<<"\n\n";
     }

}

