#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
    int i = 10,x = 2;
    int *pi, *px;
    pi = &i;
    px = &x;
   cout<<"---------------" <<endl;
   i = *pi += ++i * 2 - *pi;
   cout<<endl;
   cout<<i;
}
