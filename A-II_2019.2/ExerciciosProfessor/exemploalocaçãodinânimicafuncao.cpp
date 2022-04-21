#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;
struct teste
{
    int num;
    float res;
};
void ler(teste *p);
main()
{
    teste *p;
    int x;
    p = new teste[5];
    cout<<p<<endl;
    ler(p);
    for(x = 0; x < 5; x++)
    {
        cout << p[x].num << ", ";
    }
}
void ler(teste *pp)
{
    int x;
    cout<<pp<<endl;
    srand(time(NULL));
    for(x = 0; x < 5; x++)
    {
        pp[x].num = rand() % 50;
        cout << pp[x].num << ", ";
    }
    cout << "\n\n";
}
