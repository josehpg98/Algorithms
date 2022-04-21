#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
float calculapesoideal(float alt, char sex);
main()
{
    char s;
    float alt, med;
    cout<<" informe seu sexo ( F = FEMININO | M = MASCULINOI): " << endl;
    cin>>s;
    cout<<" informe a sua altura: " << endl;
    cin>>alt;

   med = calculapesoideal(alt,s);

   cout<<" o seu peso ideal é " << med << endl;
}
float calculapesoideal(float alt, char sex)
{
    float med;
    if(sex == 'f' || sex == 'F')
    {
        med = (72.7 * alt) - 58;
    }
    if(sex == 'm' || sex == 'M')
    {
        med = (62.1 * alt) - 44.7;
    }
    return med;
}



