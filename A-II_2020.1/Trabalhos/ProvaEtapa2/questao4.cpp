#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
    int i = 10,x = 4;
    int *pi, *px, **px2, ***px3;
    pi = &i;
    cout<<pi <<endl;
    px = &x;
    px2 =&px;
    px3 = &px2;
    **px2 += *pi + 5;
    x = ***px3 - (*px + i);
    int cont = 0;
    while(i > 1){
        **px2 = *pi + 4 * i;
        i--;
        cont++;
    }
    if(*px % 2 != 0)
        ***px3 = *px - 8;
    else
        **px2 += i + 3;
    cout<<*px<<endl;
   cout<<*pi<<endl;
   cout<<**px2<<endl;
   cout<<***px3<<endl;
   cout<<"laco: " << cont;
}
