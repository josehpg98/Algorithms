#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
    int a[3][3] = {4,5,7,2,7,8,3,1,0};
    int b[3][3] = {1,2,4,4,5,6,7,1,1};
    int c[3][3];
    int i,j,k;
    for(i = 0; i<3; i++)
    {
        for(j =0; j < 3; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][j] * b[k][j];

            }
             cout<<c[i][j]<<"\t";
        }

    }
}
