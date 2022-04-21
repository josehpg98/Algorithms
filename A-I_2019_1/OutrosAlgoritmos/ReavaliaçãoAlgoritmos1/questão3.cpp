#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
float calculafrete(float p,string est);
main()
{
    setlocale(LC_ALL,"Portuquese");
    float peso,vf = 0;
    string estado;
    cout<<" Informe o peso do produto: " << endl;
    cin>>peso;
    cout<<" Informe o estado de destimno: " << endl;
    cin>>estado;
    cout<<"-----------------------------------------" << endl;
    vf = calculafrete(peso, estado);
    cout<<" o valor do frete será de: " << vf <<endl;
}
float calculafrete(float p,string est)
{
    float valorfrete;
    if(p <= 2 && est == "RS")
    {
        valorfrete = (8.10);
    }
    if(p <= 2 && est == "SC")
    {
        valorfrete = (9.40);
    }
    if(p <= 2 && est == "PR")
    {
        valorfrete = (11.10);
    }
    if(p > 2 && p <= 3 && est == "RS")
    {
        valorfrete = (8.70);
    }
    if(p > 2 && p <= 3 && est == "SC")
    {
        valorfrete = (10.30);
    }
    if(p > 2 && p <= 3 && est == "PR")
    {
        valorfrete = (12.20);
    }
    if(p > 3 && p <= 4 && est == "RS")
    {
        valorfrete = (9.20);
    }
    if(p > 3 && p <= 4 && est == "SC")
    {
        valorfrete = (11.20);
    }
    if(p > 3 && p <= 4 && est == "PR")
    {
        valorfrete = (13.40);
    }
    return valorfrete;
}
