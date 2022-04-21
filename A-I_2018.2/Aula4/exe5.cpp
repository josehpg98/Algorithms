#include<iostream>
#include<locale.h>
using namespace std;
main()
{

     setlocale(LC_ALL,"Portuguese");
    int v;
    cout<<"digite uma letra qualquer, lembrando que para vogais é: 1=A ou a, 2=E ou e, 3=I ou i, 4= O ou o e 5= U ou u: ";
    cin>> v;



    switch(v)
    {
    case 1:
        cout<<" é primeira vogal ";
        break;
    case 2:
       cout<<" é segunda vogal";
        break;
    case 3:
          cout<<" é terceira vogal";
        break;
    case 4:
          cout<<" é quarta vogal";
        break;
    case 5:
          cout<<" é quinta  vogal";
        break;
    default:
        cout<<" é consoante!";
    }
}

