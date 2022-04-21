#include<iostream>
#include<clocale>
#include<cstdlib>
#include<ctime>
using namespace std;

main()
{
    setlocale(LC_ALL,"Portuquese");
   int l,c,m[6][6];
   for(l=0; l<6; l++)
    {
        for(c=0; c<6; c++)
        {
            // cin>> M[l][c];
            m[l][c] = rand()% 50;
            cout << m[l][c] << "\t";
            //Sleep(1111);
        }
        cout<<"\n\n";
    }
}


