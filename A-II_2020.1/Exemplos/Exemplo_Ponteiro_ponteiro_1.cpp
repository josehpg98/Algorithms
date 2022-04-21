#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
void ler(int **px2);
void mostra(int ***px3);

main()
{
    int x = 6, *px, **px2, ***px3;
    cout << "Informe um valor: ";
    cin >> x;
    fflush(stdin);
    px = &x;
    px2 = &px;
    px3 = &px2;
    cout << *px << endl;
    cout << **px2 << endl;
    cout << ***px3 << endl;

    //cout << "Informe outro valor: ";
    //cin >> ***px3;
    //fflush(stdin);
    ler(&px);
    cout << "\n\n";
    cout << *px << endl;
    cout << **px2 << endl;
    cout << ***px3 << endl;
}

void ler(int **px2)
{
    cout << "Informe outro valor: ";
    cin >> **px2;
    fflush(stdin);
    mostra(&px2);
}

void mostra(int ***px3)
{
    cout << "\nValor lido: " << ***px3 << endl;

}
