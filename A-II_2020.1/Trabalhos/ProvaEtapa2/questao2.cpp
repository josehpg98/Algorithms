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
    cout<<*pi;
    cout<<endl;
    *pi++;
    cout<<*pi;
    cout<<endl;
}
