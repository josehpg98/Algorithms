#include<iostream>
#include<locale.h>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
     int l,c;
    int m1[3][3];
    int m2[3][3];

    for(l=0;l<3;l++){
            for(c=0;c<3;c++){
        m1[l][c] = m1[l][c] + c;
        m2[l][c] = m2[l][c] + l;
        }
    }
    cout<<m1[l][c]<< "  \n";
    cout<<m2[l][c]<< "  \n";
}
