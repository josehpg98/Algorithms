#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;
    float med;
    cout<<"informe  a primeira nota: ";
    cin>> n1;
    cout<<"informe a segunda nota: ";
    cin>> n2;
    cout<<"informe a terceira nota: ";
    cin>> n3;

    med = (n1 + n2 + n3)/3;

    if(med >= 0 && med <= 59)
        cout<<"sua nota e conceito I!";
    else if(med >= 60 && med <= 69)
        cout<<"seu conceito é S!";
    else if(med >= 70 && med <= 89)
        cout<<"seu conceito é B!";
    else if(med >= 90 && med <=100)
        cout<<"seu conceito é O!";
}
