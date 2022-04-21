#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int calculaMDC(int x,int y);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int v1,v2;
    cout<<"informe dois valores inteiros:" <<endl;
    cin>>v1;
    cin>>v2;
    calculaMDC(v1,v2);
    cout<<calculaMDC << endl;
}
int calculaMDC(int x,int y){
    if(x % y == 0){
        cout<<"o divisor é resto zero!" << endl;
    }else{
       return(calculaMDC(x % y) / calculaMDC());
    }
}
