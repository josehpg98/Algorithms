#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
void fatorial(int *x);
main()
{
    setlocale(LC_ALL,"portuguese");
    int x = 0, y = 0,*px,*py;
    cout<<"informe um valor para x: " << endl;
    // etapa 1
    cin>>x;
    px = &x;
    py = &y;
    cout<<"etapa2 | atribuir valor do px para py: " << x << ", " << y << endl;
    *py = *px ;
    cout<<"etapa3 | multiplicar o valor do py por 3: " << x << ", " << y  <<endl;
    *py = *py * 3;
    cout<<"etapa4 | domar o valor do y por 5: " << x << ", " << y << " ." << endl;
    *py = *py + 5;
    cout<<"etapa5 | diferença entre os valores apontados: " << endl;
    y - x;
    cout<<"etapa5 | resultado: " << x << endl;
    cout<<"\n";
    fatorial(&x);
    cout<<"etapa6 | fatorial de x: " << x << endl;
    cout<<"etapa7 | resultado final: " << x << " e " << y << endl;

}
void fatorial(int *x)
{
    for ( int l = *x - 1; l > 0; l--)
    {
        *x = *x * l;
    }
}
