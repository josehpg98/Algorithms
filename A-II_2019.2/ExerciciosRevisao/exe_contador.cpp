#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

void contador(int numero, int conta = 0);

main()
{
    contador(5);
    return 0;
}
void contador(int numero, int conta){
    cout<< conta << "\n";
    if(numero > conta){
        contador(numero,++conta);
    }
}
