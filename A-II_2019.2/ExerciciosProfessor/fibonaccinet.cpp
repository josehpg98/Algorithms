#include<iostream>
#include <stdio.h>
long int fibonacci(int n);
main()
{
//Sequencia fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55..
    int n;
    printf ("Escolha a posicao: ");
    scanf("%d", &n);
    printf("Posicao %d da sequencia de fibonnaci: %d", n, fibonacci(n));
}

long fibonacci(int n)
{
    int cont;
    long int x = 0, z = 1;

    if(n % 2 == 0)
    {
        for(cont = 2; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
        return z;
    }
    else
    {
        for(cont = 1; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
            return x;
    }
}
