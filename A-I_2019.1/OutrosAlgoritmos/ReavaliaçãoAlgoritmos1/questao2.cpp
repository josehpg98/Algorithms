#include<iostream>
#include<windows.h>
#include <time.h>
using namespace std;
main( )
{
    srand(time(NULL));
    int n,l,c;
    cout<<" informe um numero: " << endl;
    cin>>n;
    while(n > 5 && n < 13){
    cout<<" informe um numero válido: " << endl;
    cin>>n;
}
cout<<" ------impressão da matriz 1----------" << endl;
int M[n][n];
for(l=0; l<n; l++)
{
    for(c=0; c<n; c++)
        {

            M[l][c] = rand() % 2;
            cout << M[l][c] << "\t";

        }
        cout<<"\n\n";
    }
cout<<" ------impressão da matriz 2----------" << endl;
for(l=0; l<n; l++)
{
    for(c=0; c<n; c++)
        {
            if(M[l][c] == 0){
                M[l][c] = 1;
            }else{
                 M[l][c] = 0;
            }
            cout << M[l][c] << "\t";

        }
        cout<<"\n\n";
    }
}

