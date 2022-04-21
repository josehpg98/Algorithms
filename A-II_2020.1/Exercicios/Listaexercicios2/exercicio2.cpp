#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
main()
{
    setlocale(LC_ALL, "Portuguese");
    char nf[50];
    int ht = 0, nd = 0, sb = 0;
    float inss = 0, ir = 0, sl = 0;
    std::cout << "informe o nome do funcionário:  \n ";
    std::cin >> nf;
    std::cout << "informe o número de horas trabalhadas:  \n ";
    std::cin >> ht;
    std::cout << "informe o número de dependentes:  \n ";
    std::cin >> nd;
    ht = (ht * 12);
    nd = (nd * 40);
    sb = (ht + nd);
    inss = ((11.5 / 100) * sb);
    ir = (5.0 / 100) * sb;
    sl = (sb - (inss + ir));
    std::cout << "--------------------------------------------------- \n";
    std::cout << "N. Func. ";
    std::cout.width(12);
    std::cout << "Sal. Bruto. ";
    std::cout.width(12);
    std::cout << "Desc. INSS ";
    std::cout.width(12);
    std::cout << "Desc. IR ";
    std::cout.width(12);
    std::cout << "Sal. Liquido \n";
    std::cout << nf;
    std::cout.width(12);
    //std::cout.fixed;
    //std::cout.precision(2);
    std::cout << sb;
    std::cout.width(12);
    //std::cout.fixed;
    //std::cout.precision(2);
    std::cout << inss;
    std::cout.width(12);
    //std::cout.fixed;
    //std::cout.precision(2);
    std::cout << ir;
    std::cout.width(12);
    //std::cout.fixed;
    //std::cout.precision(2);
    std::cout << sl;
    std::cout.width(12);
}