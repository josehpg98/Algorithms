#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int prova(int n,int v[]);
main()
{
    int v[6] = {3,6,71,25,89,15};
    int n =6;
    cout<<prova(n,v);
}
int prova(int n,int v[]){
    if(n == 1)
        return v[0];
    else{
        int x;
        x = prova(n -1,v);
        if(x > v[n -1])
            return x;
        else
            return v[n -1];

    }
}
