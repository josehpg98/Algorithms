#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i;
    cout<<"informe um n�mero inteiro qualquer: " << endl;
    cin>>n;
    int v[n];
    cout << " Valores gerados: " << endl;
    srand(time(NULL));
    for(i = 0; i < n; i++)
    {
        v[i] = rand() % (n- 1);
        cout << v[i] << endl;

    }
}
