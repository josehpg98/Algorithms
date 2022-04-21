#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;


main()
{
    setlocale(LC_ALL,"Portuguese");
    int fp;
    cout<<"\n informe o final da placa: ";
    cin>>fp;

    if(fp == 1 || fp == 11 || fp == 21 || fp == 31 || fp == 41)
    {
        cout<<"\n o vencimento do ipva é em: 06/04/2019";
    }
    else if(fp == 51 || fp == 61 || fp == 71 || fp == 81 || fp == 91)
    {
        cout<<"\n o vencimento do ipva é em: 09/04/2019";
    }
    else if(fp == 2 || fp == 12 || fp == 22 || fp == 32 || fp == 42)
    {
        cout<<"\n o vencimento do ipva é em: 14/04/2019";
    }
    else if(fp == 52 || fp == 62 || fp == 72 || fp == 82 || fp == 92)
    {
        cout<<"\n o vencimento do ipva é em: 18/04/2019";
    }
    else if(fp == 3 || fp == 13 || fp == 23 || fp == 33 || fp == 43)
    {
        cout<<"\n o vencimento do ipva é em: 20/04/2019";
    }
    else if(fp == 53 || fp == 63 || fp == 73 || fp == 83 || fp == 93)
    {
        cout<<"\n o vencimento do ipva é em: 23/04/2019";
    }
    else if(fp == 4 || fp == 14 || fp == 24 || fp == 34 || fp == 44)
    {
        cout<<"\n o vencimento do ipva é em: 04/05/2019";
    }
    else if(fp == 54 || fp == 64 || fp == 74 || fp == 84 || fp == 94)
    {
        cout<<"\n o vencimento do ipva é em: 07/05/2019";
    }
    else if(fp == 5 || fp == 15 || fp == 25 || fp == 35 || fp == 45)
    {
        cout<<"\n o vencimento do ipva é em: 10/05/2019";
    }
    else if(fp == 55 || fp == 65 || fp == 75 || fp == 85 || fp == 95)
    {
        cout<<"\n o vencimento do ipva é em: 14/05/2019";
    }
    else if(fp == 6 || fp == 16 || fp == 26 || fp == 36 || fp == 46)
    {
        cout<<"\n o vencimento do ipva é em: 17/05/2019";
    }
    else if(fp == 56 || fp == 66 || fp == 76 || fp == 86 || fp == 96)
    {
        cout<<"\n o vencimento do ipva é em: 21/05/2019";
    }
    else if(fp == 7 || fp == 17 || fp == 27 || fp == 37 || fp == 47)
    {
        cout<<"\n o vencimento do ipva é em: 08/06/2019";
    }
    else if(fp == 57 || fp == 67 || fp == 77 || fp == 87 || fp == 97)
    {
        cout<<"\n o vencimento do ipva é em: 15/06/2019";
    }
    else if(fp == 8 || fp == 18 || fp == 28 || fp == 38 || fp == 48)
    {
        cout<<"\n o vencimento do ipva é em: 18/06/2019";
    }
    else if(fp == 58 || fp == 68 || fp == 78 || fp == 88 || fp == 98)
    {
        cout<<"\n o vencimento do ipva é em: 23/06/2019";
    }
    else if(fp == 9 || fp == 19 || fp == 29 || fp == 39 || fp == 49)
    {
        cout<<"\n o vencimento do ipva é em: 08/07/2019";
    }
    else if(fp == 59 || fp == 69 || fp == 79 || fp == 89 || fp == 99)
    {
        cout<<"\n o vencimento do ipva é em: 14/07/2019";
    }
    else if(fp == 10 || fp == 20 || fp == 30 || fp == 40 || fp == 50)
    {
        cout<<"\n o vencimento do ipva é em: 18/07/2019";
    }
    else if(fp == 60 || fp == 70 || fp == 80 || fp == 90 || fp == 00)
    {
        cout<<"\n o vencimento do ipva é em: 23/07/2019";
    }
    else
    {
        cout<<"\n placa inválida!";
    }








}
