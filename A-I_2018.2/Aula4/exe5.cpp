#include<iostream>
#include<locale.h>
using namespace std;
main()
{

     setlocale(LC_ALL,"Portuguese");
    int v;
    cout<<"digite uma letra qualquer, lembrando que para vogais �: 1=A ou a, 2=E ou e, 3=I ou i, 4= O ou o e 5= U ou u: ";
    cin>> v;



    switch(v)
    {
    case 1:
        cout<<" � primeira vogal ";
        break;
    case 2:
       cout<<" � segunda vogal";
        break;
    case 3:
          cout<<" � terceira vogal";
        break;
    case 4:
          cout<<" � quarta vogal";
        break;
    case 5:
          cout<<" � quinta  vogal";
        break;
    default:
        cout<<" � consoante!";
    }
}

