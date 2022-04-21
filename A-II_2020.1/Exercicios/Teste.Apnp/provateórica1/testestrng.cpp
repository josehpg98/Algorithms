#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
main()
{
    int a = 4, b = 2,x,d;
    if( (a % 2 == 0) && (a > 4)){
        d = pow(a,a);
        cout<<d;
    }else{
        for(x = 0; x< a;x++){
            if(x % 2 != 0)
                b = b++ * floor(b / x);
            else
                b += ceil(x / 3);

        }
        cout<<b;
    }
    getchar();
}
