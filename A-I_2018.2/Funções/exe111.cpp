#include<iostream>
#include<locale.h>
using namespace std;
float pesoideal(float a,  int s);
main()
{
    setlocale(LC_ALL,"Portuguese");
    float alt,res;
    int sex;
   cout<<"\n informe sua altura: ";
   cin>>alt;
   cout<<"informe seu sexo (0-Feminino | 1-Masculino): ";
   cin>>sex;
    res = pesoideal(alt, sex);
    cout<<"\n o seu peso ideal é " << res;
}
float pesoideal(float a, int s){
   float p;
    if(s == 0)
    {
       p = (a*72.7);
    }
    if(s == 1){
        p = (a*62.1)-44.7;
    }
    return p;
}


