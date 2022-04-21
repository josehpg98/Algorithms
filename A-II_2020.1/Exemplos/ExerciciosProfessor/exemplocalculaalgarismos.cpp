#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int calcula(int n);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int v;
    cout<<"informe um valor: " << endl;
    cin>>v;
    calcula(v);
    cout<<calcula(v) << endl;
}
int calcula(int n)
{
    if(n < 10)
    {
        return n;
    }
    else
    {
      return((n % 10) + calcula(n / 10));
    }
}

