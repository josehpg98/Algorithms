#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    char *texto = new char[100];
    int *cont = new int(0);
    int *flag = new int(0);
    cout<<"Digite um texto qualquer e descubra se ele é ou não um palíndromo: "<<endl;
    gets(texto);
    for(int i=0; i<strlen(texto); i++)
    {
        if(*(texto+i)!=' ')
        {
            *cont+=1;
        }
    }
    char *x = new char[*cont];
    *cont=0;
    for(int i=0; i<strlen(texto); i++)
    {
        if(*(texto+i)!=' ')
        {
            *(x+*cont)=tolower(*(texto+i));
            *cont+=1;
        }
    }
    for(int i=0; i<=*cont/2; i++)
    {
        if(*(x+i)!= *(x+(*cont-i-1)))
        {
            *flag=1;
        }
    }
    if(*flag==1)
    {
        cout<<"Esse texto não é palídromo. " << endl;
        getchar();
    }
    if(*flag==0)
    {
        cout<<"Esse texto é um palídromo!! " << endl;
        getchar();
    }
}
