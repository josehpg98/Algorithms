#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    char n [50];
    for (i = 1; i<=5; i++)
    {
        std::cout << "informe o nome do grupo " << i << " \n ";
        std::cin >> n;
    }
}