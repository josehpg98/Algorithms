#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int m = 0, n = 0, r = 1;
    cout<<"\n informe um valor para variavel M (Expoente): ";
    cin>>m;
    cout<<"\n informe um valor para variavel N (Númerador): ";
    cin>>n;
   

    for (int i = 0; i < m; i++)
    {
       r = r * n;
       
    }

    for (int q = 1; q < r; q = q + 2)
       {

         cout<<"\n " << q;
       }
    
     

   
}