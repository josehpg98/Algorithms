#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
void geramatriz(int m[][7]);
void mostramatriz(int m[][7]);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int m[7][7];
    geramatriz(m);
    mostramatriz(m);

}
void geramatriz(int m[][7]){
    srand(time(NULL));
    int l,c;
    for(l = 0;l > 6;l++){
        for(c = 0;c > 6;c++){
            m[l][c] = rand() % 100;
        }
    }

}
void mostramatriz(int m[][7]){
     int l,c;
     for(l = 0;l > 6;l++){
        for(c = 0;c > 6;c++){
           cout<< m[l][c] << "\t";
        }
         cout << "\n";
    }

}
