#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void fatorial(int *vx);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int x = 0,y = 0,diferenca = 0,*px,*py;
    px = &x;
    py = &y;
    cout<<" Passo 1: Declara��o de variaveis e ponteiros! " << endl;
    cout<<" Valor de X = " << x <<endl;
    cout<<" Valor de Y = " << y <<endl;
    cout<<" Valor de PX = " << *px <<endl;
    cout<<" Valor de PY = " << *py <<endl;
    cout<<" ------------------------------------------------- " <<endl;
    cout<<"Informe um valor para X: " << endl;
    cin>>x;
    fflush(stdin);
    cout<<"\n";
    cout<<" Passo 2: Leitura de valor para X! " << endl;
    cout<<" Valor de X = " << x <<endl;
    cout<<" Valor de Y = " << y <<endl;
    cout<<" Valor de PX = " << *px <<endl;
    cout<<" Valor de PY = " << *py <<endl;
    cout<<" ------------------------------------------------- " <<endl;
    cout<<"\n";
    *py = *px;
    cout<<" Passo 3: Atribui��o do valor de ponteiro de PX para PY! " << endl;
    cout<<" Valor de X = " << x <<endl;
    cout<<" Valor de Y = " << y <<endl;
    cout<<" Valor de PX = " << *px <<endl;
    cout<<" Valor de PY = " << *py <<endl;
    cout<<" ------------------------------------------------- " <<endl;
    cout<<"\n";
    *py *= 3;
    cout<<" Passo 4: Multiplica��o do valor de PY por 3! " << endl;
    cout<<" Valor de X = " << x <<endl;
    cout<<" Valor de Y = " << y <<endl;
    cout<<" Valor de PX = " << *px <<endl;
    cout<<" Valor de PY = " << *py <<endl;
    cout<<" ------------------------------------------------- " <<endl;
    cout<<"\n";
    y += 5;
    cout<<" Passo 5: Soma do valor de Y pr 5! " << endl;
    cout<<" Valor de X = " << x <<endl;
    cout<<" Valor de Y = " << y <<endl;
    cout<<" Valor de PX = " << *px <<endl;
    cout<<" Valor de PY = " << *py <<endl;
    cout<<" ------------------------------------------------- " <<endl;
    cout<<"\n";
    diferenca = (*py - *px);
    cout<<" Passo 6: Resultado da diferen�a dos valores apontados pelos ponteiros! " << endl;
    cout<<" Valor de X = " << x <<endl;
    cout<<" Valor de Y = " << y <<endl;
    cout<<" Valor de PX = " << *px <<endl;
    cout<<" Valor de PY = " << *py <<endl;
    cout<<" Diferen�a de valores dos ponteiros PX e PY = " << diferenca << endl;
    cout<<" ------------------------------------------------- " <<endl;
    cout<<"\n";
    fatorial(&x);
    //cout<<"O fatorial de " << x << " �: " << resfat << endl;
    cout<<" Passo 7: Resultado de X e seu fatorial " << endl;
    cout<<" Valor de X = " << x <<endl;
    cout<<" Valor de Y = " << y <<endl;
    cout<<" Valor de PX = " << *px <<endl;
    cout<<" Valor de PY = " << *py <<endl;
    cout<<" Diferen�a de valores dos ponteiros PX e PY = " << diferenca << endl;
    cout<<" ------------------------------------------------- " <<endl;
    cout<<"\n";
}
void fatorial(int *vx)
{
    int i = *vx;
    i-= 1;
    //cout<<"valo x na fun��o " << *vx;
    //cout<<"valo i na fun��o " << i;
    for(i;i >= 1;i--){
        *vx *= i;
    }
    cout<<" Fatorial de x: " <<*vx << endl;;
}
