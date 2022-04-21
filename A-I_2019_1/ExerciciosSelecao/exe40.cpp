#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    cout<<"\n informe a sua nota: " << endl;
    cin>>n;
    if(n >= 0 && n <= 6)
    {

        cout<<" o seu conceito é I! ";
    }
   else if(n >= 6 && n <= 6.9)
    {

        cout<<" o seu conceito é S! ";
    }
    else if(n >= 7 && n <= 8.9)
    {

        cout<<" o seu conceito é B! ";
    }
    else if(n >= 9 && n <= 10)
    {

        cout<<" o seu conceito é O! ";
    }
    else
    {
        cout<<"\n opção inválida!";
    }
}
