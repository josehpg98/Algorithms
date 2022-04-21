#include<iostream>
using namespace std;
int calcula(int x, int y, int z){
    int r;
    if(x % 2 ==0){
        r = y + z - x;
    }else
    r = x + y -z;
    return r;
}
main()
{
    int x = 1,y = 2,z = 3,v = 0;
    calcula(x,y,z);
    v = calcula(y,x,z);
    v = v + calcula(z,y,x);
    cout<<"\n valor: " << v;
}
