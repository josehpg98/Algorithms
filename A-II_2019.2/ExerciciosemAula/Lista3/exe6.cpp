#include <iostream>
#include <stdlib.h>// necessário p/ as funções rand e srand
#include <time.h>//necessário p/ função time
using namespace std;
void fazmatriz(int m[][6]);
void mostramatriz(int m[][6]);
int maiorvalor(int m[][6]);
main()
{
    int m[4][6],r = 0;
   fazmatriz(m);
   mostramatriz(m);
   r = maiorvalor(m);
   cout<<" o maior valor da matriz é: " << r << endl;
}
void fazmatriz(int m[][6]){
    int l,c;
    srand(time(NULL));
    for(l = 0;l <= 4;l++){
        for(c = 0;c <= 6;c++){
            m[l][c] = rand() % 100;
        }
    }
}
void mostramatriz(int m[][6]){
    int l,c;
    for(l = 0;l <= 4;l++){
        for(c = 0;c <= 6;c++){
            cout<< m[l][c] << "\t";
        }
        cout<<"\n";
    }
}
int maiorvalor(int m[][6]){
    int l,c,maior = m[0][0];
    for(l = 0;l <= 4;l++){
        for(c = 0;c <= 6;c++){
           if(m[l][c] > maior)
           {
               maior = m[l][c];
           }
        }
       
    }
    return maior;
}