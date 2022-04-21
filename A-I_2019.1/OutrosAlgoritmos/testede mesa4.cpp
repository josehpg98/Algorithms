#include<iostream>
using namespace std;
int calcula(int x, int y){
    int r;
    r = x + y;
    return r;
}
main()
{
    int v = 3;
    v = calcula(v, v+2);
    v = v + calcula(v, v + 2);
    cout<<"\n valor: " << v;
}
