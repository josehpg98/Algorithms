#include<iostream>
#include<stdio.h>
#include<locale.h>
using namespace std;
main()
{


    setlocale(LC_ALL,"Portuguese");
    int id;
    cout<<"informe sua idade ( entre 0 e 120 ). ";
    cin>> id;

    while(id < 0 || id > 120 )
    {
        cout<<"somente entre 0 e 120 ";
        cin>> id;
    };
    cout<<"ok!";
    fflush(stdin);
    getchar();


}
